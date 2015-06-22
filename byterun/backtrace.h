/***********************************************************************/
/*                                                                     */
/*                                OCaml                                */
/*                                                                     */
/*            Xavier Leroy, projet Cristal, INRIA Rocquencourt         */
/*                                                                     */
/*  Copyright 2001 Institut National de Recherche en Informatique et   */
/*  en Automatique.  All rights reserved.  This file is distributed    */
/*  under the terms of the GNU Library General Public License, with    */
/*  the special exception on linking described in file ../LICENSE.     */
/*                                                                     */
/***********************************************************************/

#ifndef CAML_BACKTRACE_H
#define CAML_BACKTRACE_H

#include "mlvalues.h"
#include "memory.h"

CAMLextern __thread code_t * caml_backtrace_buffer;
CAMLextern __thread caml_root caml_backtrace_last_exn;
CAMLextern __thread char * caml_cds_file;

CAMLprim value caml_record_backtrace(value vflag);
#ifndef NATIVE_CODE
extern void caml_stash_backtrace(value exn, code_t pc, value * sp, int reraise);
#endif
CAMLextern void caml_print_exception_backtrace(void);

#endif /* CAML_BACKTRACE_H */
