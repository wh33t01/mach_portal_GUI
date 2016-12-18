#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <sys/utsname.h>

#include "offsets.h"

// offsets from the main kernel 0xfeedfacf
uint64_t allproc_offset;
uint64_t kernproc_offset;

// offsets in struct proc
uint64_t struct_proc_p_pid_offset;
uint64_t struct_proc_task_offset;
uint64_t struct_proc_p_uthlist_offset;
uint64_t struct_proc_p_ucred_offset;
uint64_t struct_proc_p_comm_offset;

// offsets in struct kauth_cred
uint64_t struct_kauth_cred_cr_ref_offset;

// offsets in struct uthread
uint64_t struct_uthread_uu_ucred_offset;
uint64_t struct_uthread_uu_list_offset;

// offsets in struct task
uint64_t struct_task_ref_count_offset;
uint64_t struct_task_itk_space_offset;

// offsets in struct ipc_space
uint64_t struct_ipc_space_is_table_offset;

// offsets in struct ipc_port
uint64_t struct_ipc_port_ip_kobject_offset;

//file:kernel_iPhone8,2_10.1.1_14B150_n56.img.dec
//kernel version:root:xnu-3789.22.3~1/RELEASE_ARM64_T7000

//file:kernel_iPhone8,1_10.1.1_14B150_n61.img.dec
//kernel version:root:xnu-3789.22.3~1/RELEASE_ARM64_T7000

void init_iphone_6s_plus_and_iphone_6s_n61() {
    allproc_offset = 0x5b4168;
    kernproc_offset = 0x5ba0e0;
    
    struct_proc_p_pid_offset = 0x10;
    struct_proc_task_offset = 0x18;
    struct_proc_p_uthlist_offset = 0x98;
    struct_proc_p_ucred_offset = 0x100;
    struct_proc_p_comm_offset = 0x26c;
    
    struct_kauth_cred_cr_ref_offset = 0x10;
    
    struct_uthread_uu_ucred_offset = 0x168;
    struct_uthread_uu_list_offset = 0x170;
    
    struct_task_ref_count_offset = 0x10;
    struct_task_itk_space_offset = 0x300;
    
    struct_ipc_space_is_table_offset = 0x20;
    
    struct_ipc_port_ip_kobject_offset = 0x68;
}
//file:kernel_iPhone9,1_10.1.1_14B150_d10.img.dec
//kernel version:root:xnu-3789.22.3~1/RELEASE_ARM64_T8010
void init_iphone_7() {
    allproc_offset = 0x5ec178;
    kernproc_offset = 0x5f20e0;
    
    struct_proc_p_pid_offset = 0x10;
    struct_proc_task_offset = 0x18;
    struct_proc_p_uthlist_offset = 0x98;
    struct_proc_p_ucred_offset = 0x100;
    struct_proc_p_comm_offset = 0x26c;
    
    struct_kauth_cred_cr_ref_offset = 0x10;
    
    struct_uthread_uu_ucred_offset = 0x168;
    struct_uthread_uu_list_offset = 0x170;
    
    struct_task_ref_count_offset = 0x10;
    struct_task_itk_space_offset = 0x300;
    
    struct_ipc_space_is_table_offset = 0x20;
    
    struct_ipc_port_ip_kobject_offset = 0x68;
}
void init_iphone_6s_n71(){
  printf("setting offsets for iPhone 6s 10.1.1\n");
  allproc_offset = 0x5A4148;            //allproc offset
  kernproc_offset = 0x5AA0E0;            //kernproc offset
    
  struct_proc_p_pid_offset = 0x10;
  struct_proc_task_offset = 0x18;
  struct_proc_p_uthlist_offset = 0x98;
  struct_proc_p_ucred_offset = 0x100;
  struct_proc_p_comm_offset = 0x26c;
    
  struct_kauth_cred_cr_ref_offset = 0x10;
    
  struct_uthread_uu_ucred_offset = 0x168;
  struct_uthread_uu_list_offset = 0x170;
    
  struct_task_ref_count_offset = 0x10;
  struct_task_itk_space_offset = 0x300;
    
  struct_ipc_space_is_table_offset = 0x20;
    
  struct_ipc_port_ip_kobject_offset = 0x68;
}
//file:kernel_iPhone7,1_10.1.1_14B100_n56.img.dec
//kernel version:root:xnu-3789.22.3~1/RELEASE_ARM64_T7000
void init_iphone_6_n56() {
    allproc_offset = 0x5b4168;
    kernproc_offset = 0x5ba0e0;
    
    struct_proc_p_pid_offset = 0x10;
    struct_proc_task_offset = 0x18;
    struct_proc_p_uthlist_offset = 0x98;
    struct_proc_p_ucred_offset = 0x100;
    struct_proc_p_comm_offset = 0x26c;
    
    struct_kauth_cred_cr_ref_offset = 0x10;
    
    struct_uthread_uu_ucred_offset = 0x168;
    struct_uthread_uu_list_offset = 0x170;
    
    struct_task_ref_count_offset = 0x10;
    struct_task_itk_space_offset = 0x300;
    
    struct_ipc_space_is_table_offset = 0x20;
    
    struct_ipc_port_ip_kobject_offset = 0x68;
}
//file:kernel_iPhone7,1_10.1.1_14B100_n66.img.dec
//kernel version:root:xnu-3789.22.3~1/RELEASE_ARM64_S8000
void init_iphone_6_n66() {
    allproc_offset = 0x5a4148;
    kernproc_offset = 0x5aa0e0;
    
    struct_proc_p_pid_offset = 0x10;
    struct_proc_task_offset = 0x18;
    struct_proc_p_uthlist_offset = 0x98;
    struct_proc_p_ucred_offset = 0x100;
    struct_proc_p_comm_offset = 0x26c;
    
    struct_kauth_cred_cr_ref_offset = 0x10;
    
    struct_uthread_uu_ucred_offset = 0x168;
    struct_uthread_uu_list_offset = 0x170;
    
    struct_task_ref_count_offset = 0x10;
    struct_task_itk_space_offset = 0x300;
    
    struct_ipc_space_is_table_offset = 0x20;
    
    struct_ipc_port_ip_kobject_offset = 0x68;
}
void init_ipad_mini_2() {
  printf("setting offsets for iPad mini 2 10.1.1\n");
  allproc_offset = 0x5A4128;
  kernproc_offset = 0x5AA0E0;

  struct_proc_p_pid_offset = 0x10;
  struct_proc_task_offset = 0x18;
  struct_proc_p_uthlist_offset = 0x98;
  struct_proc_p_ucred_offset = 0x100;
  struct_proc_p_comm_offset = 0x26c;
  
  struct_kauth_cred_cr_ref_offset = 0x10;
  
  struct_uthread_uu_ucred_offset = 0x168;
  struct_uthread_uu_list_offset = 0x170;
  
  struct_task_ref_count_offset = 0x10;
  struct_task_itk_space_offset = 0x300;
  
  struct_ipc_space_is_table_offset = 0x20;
  
  struct_ipc_port_ip_kobject_offset = 0x68;
}

void init_ipod_touch_6g() {
  printf("setting offsets for iPod touch 6G 10.1.1\n");
  allproc_offset = 0x5B4168;
  kernproc_offset = 0x5BA0E0;

  struct_proc_p_pid_offset = 0x10;
  struct_proc_task_offset = 0x18;
  struct_proc_p_uthlist_offset = 0x98;
  struct_proc_p_ucred_offset = 0x100;
  struct_proc_p_comm_offset = 0x26c;
  
  struct_kauth_cred_cr_ref_offset = 0x10;
  
  struct_uthread_uu_ucred_offset = 0x168;
  struct_uthread_uu_list_offset = 0x170;
  
  struct_task_ref_count_offset = 0x10;
  struct_task_itk_space_offset = 0x300;
  
  struct_ipc_space_is_table_offset = 0x20;
  
  struct_ipc_port_ip_kobject_offset = 0x68;
}

void init_macos_10_12_1() {
  printf("setting offsets for MacOS 10.12.1\n");
  allproc_offset = 0x8bb490;
  kernproc_offset = 0x8BA7D8;
  
  struct_proc_task_offset = 0x18;
  struct_proc_p_uthlist_offset = 0x98;
  struct_proc_p_ucred_offset = 0xe8;
  struct_proc_p_comm_offset = 0x2e4;
  
  struct_kauth_cred_cr_ref_offset = 0x10;
  
  struct_uthread_uu_ucred_offset = 0x168;
  struct_uthread_uu_list_offset = 0x170;
  
  struct_task_ref_count_offset = 0x10;
  struct_task_itk_space_offset = 0x300;
  
  struct_ipc_space_is_table_offset = 0x18;
  
  struct_ipc_port_ip_kobject_offset = 0x68;
}

//file:kernel_iPhone7,2_10.1.1_14B100_n61.img.dec
//kernel version:root:xnu-3789.22.3~1/RELEASE_ARM64_T7000
void init_iphone_6_plus_n61() {
    allproc_offset = 0x5b4168;
    kernproc_offset = 0x5ba0e0;
    
    struct_proc_p_pid_offset = 0x10;
    struct_proc_task_offset = 0x18;
    struct_proc_p_uthlist_offset = 0x98;
    struct_proc_p_ucred_offset = 0x100;
    struct_proc_p_comm_offset = 0x26c;
    
    struct_kauth_cred_cr_ref_offset = 0x10;
    
    struct_uthread_uu_ucred_offset = 0x168;
    struct_uthread_uu_list_offset = 0x170;
    
    struct_task_ref_count_offset = 0x10;
    struct_task_itk_space_offset = 0x300;
    
    struct_ipc_space_is_table_offset = 0x20;
    
    struct_ipc_port_ip_kobject_offset = 0x68;
}
void init_iphone_5s() {
    allproc_offset = 0x5a4128;
    kernproc_offset = 0x5aa0e0;
    
    struct_proc_p_pid_offset = 0x10;
    struct_proc_task_offset = 0x18;
    struct_proc_p_uthlist_offset = 0x98;
    struct_proc_p_ucred_offset = 0x100;
    struct_proc_p_comm_offset = 0x26c;
    
    struct_kauth_cred_cr_ref_offset = 0x10;
    
    struct_uthread_uu_ucred_offset = 0x168;
    struct_uthread_uu_list_offset = 0x170;
    
    struct_task_ref_count_offset = 0x10;
    struct_task_itk_space_offset = 0x300;
    
    struct_ipc_space_is_table_offset = 0x20;
    
    struct_ipc_port_ip_kobject_offset = 0x68;
}
void unknown_build() {
  printf("This is an unknown kernel build - the offsets are likely to be incorrect and it's very unlikely this exploit will work\n");
  printf("You need to find these two kernel symbols:\n");
  printf("  allproc\n");
  printf("  kernproc\n\n");
  printf("and update the code\n");
}
void init_offsets() {
  struct utsname u = {0};
  int err = uname(&u);
  if (err == -1) {
    printf("uname failed - what platform is this?\n");
    printf("there's no way this will work, but trying anyway!\n");
    init_ipad_mini_2();
    return;
  }

  printf("sysname: %s\n", u.sysname);
  printf("nodename: %s\n", u.nodename);
  printf("release: %s\n", u.release);
  printf("version: %s\n", u.version);
  printf("machine: %s\n", u.machine);

  if (strstr(u.machine, "iPod7,1")) {
    // this is an iPod 6G
    if (strstr(u.version, "root:xnu-3789.22.3~1/RELEASE_ARM64_T7000")) {
      printf("this is a known kernel build for iPod touch 6G - offsets should be okay\n");
    } else {
      unknown_build();
    }
    init_ipod_touch_6g();
    return;
  }
  if (strstr(u.machine, "iPhone6,1")) {
    // this is an iPhone 5S
    if (strstr(u.version, "root:xnu-3789.22.3~1/RELEASE_ARM64_S5L8960X")){
        printf("this is a known kernel build for iPhone 5s - offsets should be okay\n");
    } else {
        unknown_build();
    }
    init_iphone_5s();
    return;
    }
  if (strstr(u.machine, "iPad4,*")) {
    // this is an iPhone 5S
    if (strstr(u.version, "root:xnu-3789.22.3~1/RELEASE_ARM64_S5L8960X")){
        printf("this is a known kernel build for iPhone 5s, iPad mini 2 and iPad Air- offsets should be okay\n");
    } else {
        unknown_build();
    }
    init_iphone_5s();
    return;
    }
  if (strstr(u.machine, "iPhone8,1")) {
    // this is an iPhone 6S
    if (strstr(u.version, "root:xnu-3789.22.3~1/RELEASE_ARM64_S8000")){
        printf("this is a known kernel build for iPhone 6s - offsets should be okay\n");
    } else {
        unknown_build();
    }
    init_iphone_6s_n71();
    return;
  }
  if (strstr(u.machine, "iPad6,*")) {
    // this is an iPhone 6S
    if (strstr(u.version, "root:xnu-3789.22.3~1/RELEASE_ARM64_S8000")){
        printf("this is a known kernel build for iPad Pro - offsets should be okay\n");
      }else {
        unknown_build();
      
    init_iphone_6s_n71();
    return;
  }
  if (strstr(u.machine, "iPhone8,4")) {
    // this is an iPhone se
    if (strstr(u.version, "root:xnu-3789.22.3~1/RELEASE_ARM64_S8000")){
        printf("this is a known kernel build for iPhone se - offsets should be okay\n");
    } else {
        unknown_build();
    }
      init_iphone_6s_n71();
    return;
    }
  if (strstr(u.machine, "iPhone8,2")) {
    // this is an iPhone 6s plus or 6s (n61)
    if (strstr(u.version, "root:xnu-3789.22.3~1/RELEASE_ARM64_S8000")){
        printf("this is a known kernel build for iPhone 6s plus or iPhone 6s (n61) - offsets should be okay\n");
    } else {
        unknown_build();
    }
    init_iphone_6s_plus_and_iphone_6s_n61();
    return;
    }
  if (strstr(u.machine, "iPhone9,*")) {
    // this is an iPhone 7 revision
    if (strstr(u.version, "root:xnu-3789.22.3~1/RELEASE_ARM64_T8010")){
        printf("this is a known kernel build for any iPhone 7 revision- offsets should be okay\n");
    } else {
        unknown_build();
    }
    init_iphone_7();
    return;
  }
      if (strstr(u.machine, "iPhone7,*")) {
    // this is an iPhone 6 revision
    if (strstr(u.version, "root:xnu-3789.22.3~1/RELEASE_ARM64_S8000")){
        printf("this is a known kernel build for any iPhone 6 revision - offsets should be okay\n");
        init_iphone_6_n66();
    } else {
        if(strstr(u.version, "root:xnu-3789.22.3~1/RELEASE_ARM64_T7000")){
            printf("this is a known kernel build for iPhone 6 - offsets should be okay\n");
            init_iphone_6_n56();
        } else {
            unknown_build();
            return;
        }
    }
      }
  printf("don't recognize this platform\n");
  unknown_build();
  init_ipad_mini_2(); // this won't work!
  }
}
