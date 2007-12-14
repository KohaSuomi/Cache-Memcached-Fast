/*
  Copyright (C) 2007 by Tomash Brechko.  All rights reserved.

  When used to build Perl module:

  This library is free software; you can redistribute it and/or modify
  it under the same terms as Perl itself, either Perl version 5.8.8
  or, at your option, any later version of Perl 5 you may have
  available.

  When used as a standalone library:

  This library is free software; you can redistribute it and/or modify
  it under the terms of the GNU Lesser General Public License as
  published by the Free Software Foundation; either version 2.1 of the
  License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.
*/

#ifndef DISPATCH_KEY_H
#define DISPATCH_KEY_H 1

#include <stddef.h>


struct dispatch_continuum_point;


struct dispatch_state
{
  struct dispatch_continuum_point *bins;
  int bins_count;
  int bins_capacity;

  double total_weight;
};


extern
void
dispatch_init(struct dispatch_state *state);

extern
int
dispatch_add_server(struct dispatch_state *state, double weight, int index);

extern
int
dispatch_key(struct dispatch_state *state, const char *key, size_t key_len);


#endif /* ! DISPATCH_KEY_H */
