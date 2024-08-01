use std::ffi::CString;
use std::os::raw::c_char;

#[no_mangle]
pub extern "C" fn build_shader(input: *const c_char) {}
