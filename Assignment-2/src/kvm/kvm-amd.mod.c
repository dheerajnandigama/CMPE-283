#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe370a791, "handle_fastpath_set_msr_irqoff" },
	{ 0xce807a25, "up_write" },
	{ 0x2e6a6147, "psp_copy_user_blob" },
	{ 0x6cdc8d1, "kvm_configure_mmu" },
	{ 0x48e080b1, "x86_virt_spec_ctrl" },
	{ 0x90f6fa70, "kvm_make_all_cpus_request" },
	{ 0xfcadfcea, "__srcu_read_lock" },
	{ 0x43cf6a58, "__tracepoint_kvm_avic_kick_vcpu_slowpath" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x4224227b, "kvm_emulate_instruction_from_buffer" },
	{ 0xb5a6c671, "kvm_init_mmu" },
	{ 0x658dd01c, "kvm_emulate_wbinvd" },
	{ 0x90c548cb, "kvm_vcpu_reset" },
	{ 0x98f4d306, "hyperv_flush_guest_mapping" },
	{ 0x28f58635, "kvm_set_cr3" },
	{ 0xda34b842, "kvm_update_cpuid_runtime" },
	{ 0x1c42f98d, "x86_decode_emulated_instruction" },
	{ 0xfafb5e1c, "__SCK__kvm_x86_get_cs_db_l_bits" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9b967ad7, "__SCK__tp_func_kvm_page_fault" },
	{ 0x49d7d3e5, "kvm_alloc_apic_access_page" },
	{ 0x88787fb6, "kvm_get_cr8" },
	{ 0x925493f, "clear_page_orig" },
	{ 0x621b3957, "__tracepoint_kvm_vmgexit_exit" },
	{ 0x6636c3c9, "irq_set_vcpu_affinity" },
	{ 0x388e0e10, "__SCT__tp_func_kvm_pi_irte_update" },
	{ 0xb8d543f1, "__SCK__tp_func_ipi_send_cpu" },
	{ 0x42ac129c, "kvm_is_linear_rip" },
	{ 0x96af7a25, "kvm_set_dr" },
	{ 0x3eb29c1c, "kvm_set_msi_irq" },
	{ 0x2fec45f9, "kvm_emulate_hypercall" },
	{ 0x9084b044, "clear_page_erms" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x5fdfa2c1, "amd_pmu_enable_virt" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x709cd8cb, "kvm_spurious_fault" },
	{ 0x8f0042c1, "__SCK__tp_func_kvm_vmgexit_msr_protocol_exit" },
	{ 0xa45a1f7a, "kvm_emulate_ap_reset_hold" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xd1861546, "__tracepoint_kvm_skinit" },
	{ 0x68952493, "rcu_note_context_switch" },
	{ 0xad1036a2, "amd_iommu_activate_guest_mode" },
	{ 0x8c430881, "load_pdptrs" },
	{ 0x1b603d64, "__tracepoint_write_msr" },
	{ 0xa588ef67, "__SCT__tp_func_kvm_nested_intercepts" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x5d0113e0, "x86_pred_cmd" },
	{ 0x15a4d120, "kvm_vcpu_read_guest_page" },
	{ 0x5d996b31, "kvm_set_cpu_caps" },
	{ 0xfb578fc5, "memset" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x5db3e786, "hv_track_root_tdp" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x97cd8173, "kvm_set_cr4" },
	{ 0x1f8e9483, "__SCT__tp_func_kvm_avic_doorbell" },
	{ 0xc805f93, "clflush_cache_range" },
	{ 0x71746a89, "__SCK__tp_func_kvm_exit" },
	{ 0x8bc36a89, "kvm_handle_page_fault" },
	{ 0x6303c089, "kvm_calc_nested_tsc_offset" },
	{ 0xfec8202a, "kvm_cpu_caps" },
	{ 0x2d82cc24, "kvm_spec_ctrl_test_value" },
	{ 0x616e6c95, "__SCT__tp_func_kvm_exit" },
	{ 0x5104c321, "__tracepoint_kvm_avic_unaccelerated_access" },
	{ 0xf6fc8791, "__bitmap_xor" },
	{ 0x6d16c104, "mutex_lock_killable" },
	{ 0x668b19a1, "down_read" },
	{ 0xb0d73feb, "kvm_load_guest_xsave_state" },
	{ 0x2d905f00, "kvm_set_cr0" },
	{ 0x582a1b63, "__kvm_is_valid_cr4" },
	{ 0x9df5be73, "pv_ops" },
	{ 0x825ae5a7, "kvm_set_cr8" },
	{ 0x3e25db10, "__tracepoint_kvm_vmgexit_msr_protocol_exit" },
	{ 0x9b1237e7, "__tracepoint_kvm_invlpga" },
	{ 0xa10db22a, "kvm_get_dr" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x2183313a, "kvm_update_dr7" },
	{ 0x5cf18d09, "__tracepoint_kvm_nested_intercepts" },
	{ 0x9d0778e, "kvm_mmu_page_fault" },
	{ 0xe91bd429, "__SCK__tp_func_kvm_nested_vmexit" },
	{ 0xdf521442, "_find_next_zero_bit" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1d1b139a, "__SCT__tp_func_kvm_avic_ga_log" },
	{ 0x425d0c6, "param_ops_bool" },
	{ 0x21b6a4f4, "kvm_emulate_instruction" },
	{ 0x329de597, "cpu_info" },
	{ 0x4660d880, "kvm_hv_assist_page_enabled" },
	{ 0xef14fd98, "kvm_calc_nested_tsc_multiplier" },
	{ 0x6c95726c, "host_xss" },
	{ 0x8fa25c24, "xa_find" },
	{ 0x8ff7b0e9, "alloc_pages" },
	{ 0x25db1577, "do_trace_write_msr" },
	{ 0x13c53f7b, "kvm_vcpu_apicv_activated" },
	{ 0x5620d4f5, "kvm_apic_send_ipi" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x5957413c, "__tracepoint_read_msr" },
	{ 0x8a9f014e, "kvm_vcpu_read_guest" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5a6a7d80, "kvm_vcpu_on_spin" },
	{ 0xd02e197f, "sev_platform_init" },
	{ 0x7e4e4f8c, "__SCK__tp_func_kvm_vmgexit_exit" },
	{ 0x2caf840d, "kvm_read_guest" },
	{ 0x755abc1, "__srcu_read_unlock" },
	{ 0x9aff381e, "set_page_dirty_lock" },
	{ 0x60b82ee8, "kvm_vcpu_wake_up" },
	{ 0xdfb62b1b, "ms_hyperv" },
	{ 0x485cd7f6, "kvm_rebooting" },
	{ 0x4b4e163e, "kvm_get_rflags" },
	{ 0xdc48f3a2, "kvm_queue_exception_e" },
	{ 0xe9dc51c5, "cpu_emergency_register_virt_callback" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x6becaded, "__SCT__tp_func_kvm_inj_virq" },
	{ 0xd09da48b, "__SCT__tp_func_kvm_nested_intr_vmexit" },
	{ 0xdde0a8c2, "__tracepoint_kvm_exit" },
	{ 0x92d09606, "kvm_emulate_cpuid" },
	{ 0x7a1602a1, "boot_cpu_data" },
	{ 0x70f7c1d7, "kvm_emulate_wrmsr" },
	{ 0x3325e770, "__SCK__tp_func_kvm_inj_virq" },
	{ 0xf54e2886, "__SCT__tp_func_kvm_vmgexit_msr_protocol_enter" },
	{ 0xabf53b48, "rep_stos_alternative" },
	{ 0xc3e957a7, "kvm_find_cpuid_entry_index" },
	{ 0x8f2703b7, "wbinvd_on_all_cpus" },
	{ 0x6d2c9437, "__SCT__tp_func_kvm_nested_vmenter" },
	{ 0x9faba727, "kvm_vcpu_kick" },
	{ 0x59387ba3, "__SCT__kvm_x86_cache_reg" },
	{ 0xc437572a, "kvm_mmu_invlpg" },
	{ 0xa367499d, "kvm_emulate_invd" },
	{ 0x9b791c1, "kvm_fast_pio" },
	{ 0x50b42ba1, "entry_ibpb" },
	{ 0x69ad6ac1, "cpu_emergency_unregister_virt_callback" },
	{ 0xa38db094, "kvm_init_shadow_npt_mmu" },
	{ 0x1a2dddea, "__SCK__tp_func_kvm_ple_window_update" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x1715ba35, "kmalloc_trace" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0x276c9cce, "kvm_set_msr_common" },
	{ 0xe93dfc8c, "__SCT__tp_func_kvm_nested_vmenter_failed" },
	{ 0xf5b52d5c, "hv_vp_assist_page" },
	{ 0x4ed73097, "__SCK__tp_func_kvm_nested_vmexit_inject" },
	{ 0x3efd2d57, "kvm_intr_is_single_vcpu" },
	{ 0xd87e4da6, "perf_event_release_kernel" },
	{ 0x3f510ff5, "kvm_has_noapic_vcpu" },
	{ 0xf1cd8929, "kvm_read_and_reset_apf_flags" },
	{ 0x536f9053, "kvm_emulate_rdpmc" },
	{ 0x93a3e40e, "__SCT__tp_func_kvm_ple_window_update" },
	{ 0x843d6541, "sev_guest_decommission" },
	{ 0xf1038897, "param_ops_int" },
	{ 0x634b5c0b, "__tracepoint_kvm_nested_vmexit_inject" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xa8e4010b, "__tracepoint_kvm_avic_doorbell" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x31bedaa, "kvm_sev_es_mmio_read" },
	{ 0x7ff2a104, "__SCT__tp_func_kvm_page_fault" },
	{ 0xdd3a26d0, "__SCK__tp_func_kvm_vmgexit_msr_protocol_enter" },
	{ 0x4cce875a, "kvm_cpu_has_injectable_intr" },
	{ 0x71950474, "kvm_skip_emulated_instruction" },
	{ 0xabdc439, "cc_platform_has" },
	{ 0x3f251dca, "kvm_set_or_clear_apicv_inhibit" },
	{ 0xa61ea49f, "kvm_handle_invalid_op" },
	{ 0x53b954a2, "up_read" },
	{ 0x2c2f5a09, "x86_family" },
	{ 0x6bc792a4, "kvm_caps" },
	{ 0xb79243bc, "__kvm_vcpu_update_apicv" },
	{ 0x4d7272e4, "migrate_enable" },
	{ 0xe5a150f3, "kvm_sev_es_mmio_write" },
	{ 0x67a756b3, "hv_flush_remote_tlbs_range" },
	{ 0x67b36ed2, "kvm_get_kvm" },
	{ 0x5b2adbdd, "kvm_complete_insn_gp" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7f4a6d0c, "kmalloc_caches" },
	{ 0x28e92112, "kvm_apic_write_nodecode" },
	{ 0xe0e786a7, "__SCT__tp_func_kvm_skinit" },
	{ 0x9cf59e7a, "allow_smaller_maxphyaddr" },
	{ 0x81ac79ab, "__SCK__kvm_x86_cache_reg" },
	{ 0x8a35b432, "sme_me_mask" },
	{ 0xd15a8bbd, "kvm_x86_vendor_init" },
	{ 0xd106f4c9, "pin_user_pages_fast" },
	{ 0x265cdde4, "__tracepoint_kvm_ple_window_update" },
	{ 0x7ac2fbe2, "__SCK__tp_func_kvm_avic_incomplete_ipi" },
	{ 0xdf19c259, "kvm_arch_has_assigned_device" },
	{ 0xd3457299, "kvm_apic_match_dest" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x18582826, "amd_pmu_disable_virt" },
	{ 0x9d14205c, "cr4_read_shadow" },
	{ 0xb82c0987, "enable_pmu" },
	{ 0xb72dfbaa, "kvm_requeue_exception" },
	{ 0x3e059f28, "sev_guest_activate" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x53d9f927, "__SCT__kvm_x86_get_cs_db_l_bits" },
	{ 0x487c5bf4, "file_is_kvm" },
	{ 0x77ff053, "default_cpu_present_to_apicid" },
	{ 0x37b937b9, "__tracepoint_kvm_avic_ga_log" },
	{ 0xb4340a2f, "__SCK__tp_func_kvm_nested_vmenter_failed" },
	{ 0xd475c188, "kvm_pmu_cap" },
	{ 0x27046576, "kvm_exit" },
	{ 0x4ea50cf7, "kvm_init" },
	{ 0xd157bef5, "kvm_deliver_exception_payload" },
	{ 0xc071e99f, "__SCT__tp_func_kvm_entry" },
	{ 0xe441ea1d, "__tracepoint_kvm_avic_incomplete_ipi" },
	{ 0x3357c17c, "param_ops_ushort" },
	{ 0xf8068a03, "__tracepoint_kvm_nested_vmexit" },
	{ 0x1db1c372, "enable_vmware_backdoor" },
	{ 0x1d013832, "kvm_enable_efer_bits" },
	{ 0x40a0aafc, "__flush_tlb_all" },
	{ 0xa8278384, "__tracepoint_kvm_nested_vmenter" },
	{ 0x2510fc6d, "__SCT__tp_func_kvm_nested_vmexit" },
	{ 0xbd9d6dfc, "kvm_mmu_set_me_spte_mask" },
	{ 0x8a7fe54a, "__SCT__tp_func_kvm_vmgexit_enter" },
	{ 0xa03ce8a4, "__kvm_request_immediate_exit" },
	{ 0x6e75cf68, "kvm_emulate_xsetbv" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xa38f21b9, "amd_iommu_update_ga" },
	{ 0xc1bad5af, "__SCK__tp_func_kvm_cr" },
	{ 0x96e0c93e, "kvm_apicv_activated" },
	{ 0x7915cee5, "do_machine_check" },
	{ 0x2c5fe10b, "__tracepoint_kvm_vmgexit_msr_protocol_enter" },
	{ 0xce576a13, "enable_apicv" },
	{ 0xf4002534, "handle_ud" },
	{ 0x4942be67, "__SCT__tp_func_kvm_avic_incomplete_ipi" },
	{ 0xbb3f537a, "kvm_mmu_new_pgd" },
	{ 0x44dda4c3, "unpin_user_pages" },
	{ 0xa4b044, "amd_iommu_deactivate_guest_mode" },
	{ 0x2f9bcce7, "kvm_post_set_cr4" },
	{ 0x60808d07, "__SCK__tp_func_kvm_nested_intercepts" },
	{ 0x4da0492c, "__tracepoint_kvm_nested_vmenter_failed" },
	{ 0x14c68860, "kvm_get_msr_common" },
	{ 0xeae8ee8, "__SCK__tp_func_kvm_avic_ga_log" },
	{ 0x9a71a534, "smp_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0xae04012c, "__vmalloc" },
	{ 0x738d570c, "__SCK__tp_func_kvm_nested_vmenter" },
	{ 0x3edcd9f8, "perf_event_period" },
	{ 0x73cb55c7, "pcpu_hot" },
	{ 0x4130868a, "kvm_hv_get_assist_page" },
	{ 0x6340434e, "x86_model" },
	{ 0x2e51b394, "kvm_emulate_halt" },
	{ 0xd5a655f0, "__SCK__tp_func_kvm_vmgexit_enter" },
	{ 0xa4928d3f, "kvm_emulate_mwait" },
	{ 0xa4319e37, "kvm_vcpu_map" },
	{ 0xe973b7fb, "__SCK__tp_func_kvm_invlpga" },
	{ 0xb7618c80, "__SCK__tp_func_kvm_skinit" },
	{ 0x67103de6, "kvm_msr_allowed" },
	{ 0x687b78fc, "kvm_x86_vendor_exit" },
	{ 0xc89c344c, "kvm_wait_lapic_expire" },
	{ 0xac13ef58, "hv_flush_remote_tlbs" },
	{ 0x5ea0f52a, "sev_issue_cmd_external_user" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x3f07021a, "kvm_put_kvm" },
	{ 0xf7c12ddf, "perf_event_read_value" },
	{ 0x61b443f8, "x86_spec_ctrl_current" },
	{ 0x3d517b0b, "kvm_find_cpuid_entry" },
	{ 0xe4f3ab82, "kvm_task_switch" },
	{ 0x5388b1a0, "amd_get_dr_addr_mask" },
	{ 0xe0215af0, "__SCK__tp_func_kvm_avic_unaccelerated_access" },
	{ 0x39e3c030, "do_trace_read_msr" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x42f7603e, "kvm_write_guest" },
	{ 0x1a8a03cb, "kvm_sev_es_string_io" },
	{ 0xf8096097, "__tracepoint_kvm_cr" },
	{ 0x6ada8f59, "kvm_mmu_set_mmio_spte_mask" },
	{ 0x53614ec, "kvm_set_user_return_msr" },
	{ 0x22de4931, "amd_iommu_register_ga_log_notifier" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x778e30b9, "__SCT__tp_func_kvm_cr" },
	{ 0x15da83cd, "kvm_emulate_monitor" },
	{ 0xf8512291, "kvm_requeue_exception_e" },
	{ 0xc4bb0bda, "__tracepoint_kvm_vmgexit_enter" },
	{ 0x122c3a7e, "_printk" },
	{ 0x5c7e9f84, "__SCT__tp_func_kvm_apicv_accept_irq" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xc96d35f4, "report_ignored_msrs" },
	{ 0x4a1c261b, "__SCT__tp_func_kvm_invlpga" },
	{ 0x5f911332, "__SCT__tp_func_kvm_avic_kick_vcpu_slowpath" },
	{ 0x672ffb53, "kvm_queue_exception" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x388264ea, "amd_clear_divider" },
	{ 0xd1f827a4, "kvm_emulate_rdmsr" },
	{ 0xcff45f4, "__SCT__tp_func_kvm_vmgexit_msr_protocol_exit" },
	{ 0x793ac193, "__SCT__tp_func_ipi_send_cpu" },
	{ 0x365c3d14, "__tracepoint_kvm_apicv_accept_irq" },
	{ 0x5fcf5b42, "__tracepoint_kvm_pi_irte_update" },
	{ 0x8fac14a2, "sev_guest_df_flush" },
	{ 0x8b618aa6, "__SCT__tp_func_kvm_nested_vmexit_inject" },
	{ 0xf946d1b2, "kvm_vcpu_unmap" },
	{ 0xf9e5d228, "kvm_post_set_cr0" },
	{ 0xb535f539, "__free_pages" },
	{ 0x7fe19488, "kvm_add_user_return_msr" },
	{ 0xce3bf6eb, "__tracepoint_kvm_nested_intr_vmexit" },
	{ 0xfd4de376, "kvm_valid_efer" },
	{ 0xa01a22c, "__tracepoint_ipi_send_cpu" },
	{ 0x23b4e0d7, "clear_page_rep" },
	{ 0xc6cbbc89, "capable" },
	{ 0x84658fca, "__SCK__tp_func_kvm_pi_irte_update" },
	{ 0xfab33e4c, "enable_mmio_caching" },
	{ 0xbbe5cff4, "kvm_set_rflags" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x44b8e230, "__SCK__tp_func_kvm_apicv_accept_irq" },
	{ 0xb9f95f21, "__SCK__tp_func_kvm_avic_doorbell" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x5f5ef764, "__SCK__tp_func_kvm_entry" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x8737d025, "__SCK__tp_func_kvm_avic_kick_vcpu_slowpath" },
	{ 0x48644036, "__SCT__tp_func_kvm_vmgexit_exit" },
	{ 0xf32dff97, "__SCT__tp_func_kvm_avic_unaccelerated_access" },
	{ 0xf98ff99d, "kvm_handle_invpcid" },
	{ 0xbefcfbbe, "__tracepoint_kvm_entry" },
	{ 0xdb80809b, "mark_page_accessed" },
	{ 0xcbc5e076, "kvm_load_host_xsave_state" },
	{ 0x8f9ce934, "__tracepoint_kvm_page_fault" },
	{ 0x177a82c3, "entry_untrain_ret" },
	{ 0x4073e924, "sev_guest_deactivate" },
	{ 0x2e2df7f4, "irq_remapping_cap" },
	{ 0xa2da5fd, "kvm_queue_exception_p" },
	{ 0x29bfaaec, "__SCK__tp_func_kvm_nested_intr_vmexit" },
	{ 0x1f19e746, "kvm_vcpu_deliver_sipi_vector" },
	{ 0x2756dabf, "__tracepoint_kvm_inj_virq" },
	{ 0x75ad7d47, "fput" },
	{ 0x49608959, "migrate_disable" },
	{ 0x57bc19d2, "down_write" },
	{ 0x17e6b25c, "kvm_cpu_has_interrupt" },
	{ 0x883e890, "module_layout" },
};

MODULE_INFO(depends, "kvm,ccp");

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*00C2*");

MODULE_INFO(srcversion, "06794C4509EC8410DA8F087");