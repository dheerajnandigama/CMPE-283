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

KSYMTAB_DATA(halt_poll_ns, "_gpl", "");
KSYMTAB_DATA(halt_poll_ns_grow, "_gpl", "");
KSYMTAB_DATA(halt_poll_ns_grow_start, "_gpl", "");
KSYMTAB_DATA(halt_poll_ns_shrink, "_gpl", "");
KSYMTAB_DATA(kvm_debugfs_dir, "_gpl", "");
KSYMTAB_FUNC(vcpu_load, "_gpl", "");
KSYMTAB_FUNC(vcpu_put, "_gpl", "");
KSYMTAB_FUNC(kvm_make_all_cpus_request, "_gpl", "");
KSYMTAB_FUNC(kvm_flush_remote_tlbs, "_gpl", "");
KSYMTAB_FUNC(kvm_destroy_vcpus, "_gpl", "");
KSYMTAB_FUNC(kvm_get_kvm, "_gpl", "");
KSYMTAB_FUNC(kvm_get_kvm_safe, "_gpl", "");
KSYMTAB_FUNC(kvm_put_kvm, "_gpl", "");
KSYMTAB_FUNC(kvm_put_kvm_no_destroy, "_gpl", "");
KSYMTAB_FUNC(__kvm_set_memory_region, "_gpl", "");
KSYMTAB_FUNC(kvm_set_memory_region, "_gpl", "");
KSYMTAB_FUNC(gfn_to_memslot, "_gpl", "");
KSYMTAB_FUNC(kvm_is_visible_gfn, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_is_visible_gfn, "_gpl", "");
KSYMTAB_FUNC(gfn_to_hva_memslot, "_gpl", "");
KSYMTAB_FUNC(gfn_to_hva, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_gfn_to_hva, "_gpl", "");
KSYMTAB_FUNC(__gfn_to_pfn_memslot, "_gpl", "");
KSYMTAB_FUNC(gfn_to_pfn_prot, "_gpl", "");
KSYMTAB_FUNC(gfn_to_pfn_memslot, "_gpl", "");
KSYMTAB_FUNC(gfn_to_pfn_memslot_atomic, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_gfn_to_pfn_atomic, "_gpl", "");
KSYMTAB_FUNC(gfn_to_pfn, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_gfn_to_pfn, "_gpl", "");
KSYMTAB_FUNC(gfn_to_page_many_atomic, "_gpl", "");
KSYMTAB_FUNC(gfn_to_page, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_map, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_unmap, "_gpl", "");
KSYMTAB_FUNC(kvm_release_page_clean, "_gpl", "");
KSYMTAB_FUNC(kvm_release_pfn_clean, "_gpl", "");
KSYMTAB_FUNC(kvm_release_page_dirty, "_gpl", "");
KSYMTAB_FUNC(kvm_release_pfn_dirty, "_gpl", "");
KSYMTAB_FUNC(kvm_set_pfn_dirty, "_gpl", "");
KSYMTAB_FUNC(kvm_set_pfn_accessed, "_gpl", "");
KSYMTAB_FUNC(kvm_read_guest_page, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_read_guest_page, "_gpl", "");
KSYMTAB_FUNC(kvm_read_guest, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_read_guest, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_read_guest_atomic, "_gpl", "");
KSYMTAB_FUNC(kvm_write_guest_page, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_write_guest_page, "_gpl", "");
KSYMTAB_FUNC(kvm_write_guest, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_write_guest, "_gpl", "");
KSYMTAB_FUNC(kvm_gfn_to_hva_cache_init, "_gpl", "");
KSYMTAB_FUNC(kvm_write_guest_offset_cached, "_gpl", "");
KSYMTAB_FUNC(kvm_write_guest_cached, "_gpl", "");
KSYMTAB_FUNC(kvm_read_guest_offset_cached, "_gpl", "");
KSYMTAB_FUNC(kvm_read_guest_cached, "_gpl", "");
KSYMTAB_FUNC(kvm_clear_guest, "_gpl", "");
KSYMTAB_FUNC(mark_page_dirty_in_slot, "_gpl", "");
KSYMTAB_FUNC(mark_page_dirty, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_mark_page_dirty, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_halt, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_wake_up, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_kick, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_yield_to, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_on_spin, "_gpl", "");
KSYMTAB_FUNC(kvm_are_all_memslots_empty, "_gpl", "");
KSYMTAB_FUNC(file_is_kvm, "_gpl", "");
KSYMTAB_DATA(kvm_rebooting, "_gpl", "");
KSYMTAB_FUNC(kvm_io_bus_write, "_gpl", "");
KSYMTAB_FUNC(kvm_io_bus_get_dev, "_gpl", "");
KSYMTAB_FUNC(kvm_get_running_vcpu, "_gpl", "");
KSYMTAB_FUNC(kvm_init, "_gpl", "");
KSYMTAB_FUNC(kvm_exit, "_gpl", "");
KSYMTAB_FUNC(kvm_irq_has_notifier, "_gpl", "");
KSYMTAB_FUNC(kvm_gpc_check, "_gpl", "");
KSYMTAB_FUNC(kvm_gpc_refresh, "_gpl", "");
KSYMTAB_FUNC(kvm_gpc_init, "_gpl", "");
KSYMTAB_FUNC(kvm_gpc_activate, "_gpl", "");
KSYMTAB_FUNC(kvm_gpc_deactivate, "_gpl", "");
KSYMTAB_DATA(kvm_caps, "_gpl", "");
KSYMTAB_DATA(__SCK__kvm_x86_get_cs_db_l_bits, "_gpl", "");
KSYMTAB_FUNC(__SCT__kvm_x86_get_cs_db_l_bits, "_gpl", "");
KSYMTAB_DATA(__SCK__kvm_x86_cache_reg, "_gpl", "");
KSYMTAB_FUNC(__SCT__kvm_x86_cache_reg, "_gpl", "");
KSYMTAB_DATA(report_ignored_msrs, "_gpl", "");
KSYMTAB_DATA(enable_vmware_backdoor, "_gpl", "");
KSYMTAB_DATA(enable_pmu, "_gpl", "");
KSYMTAB_DATA(kvm_nr_uret_msrs, "_gpl", "");
KSYMTAB_DATA(host_efer, "_gpl", "");
KSYMTAB_DATA(allow_smaller_maxphyaddr, "_gpl", "");
KSYMTAB_DATA(enable_apicv, "_gpl", "");
KSYMTAB_DATA(host_xss, "_gpl", "");
KSYMTAB_DATA(host_arch_capabilities, "_gpl", "");
KSYMTAB_FUNC(kvm_add_user_return_msr, "_gpl", "");
KSYMTAB_FUNC(kvm_find_user_return_msr, "_gpl", "");
KSYMTAB_FUNC(kvm_set_user_return_msr, "_gpl", "");
KSYMTAB_FUNC(kvm_get_apic_mode, "_gpl", "");
KSYMTAB_FUNC(kvm_spurious_fault, "_gpl", "");
KSYMTAB_FUNC(kvm_deliver_exception_payload, "_gpl", "");
KSYMTAB_FUNC(kvm_queue_exception, "_gpl", "");
KSYMTAB_FUNC(kvm_requeue_exception, "_gpl", "");
KSYMTAB_FUNC(kvm_queue_exception_p, "_gpl", "");
KSYMTAB_FUNC(kvm_complete_insn_gp, "_gpl", "");
KSYMTAB_FUNC(kvm_inject_emulated_page_fault, "_gpl", "");
KSYMTAB_FUNC(kvm_queue_exception_e, "_gpl", "");
KSYMTAB_FUNC(kvm_requeue_exception_e, "_gpl", "");
KSYMTAB_FUNC(kvm_require_dr, "_gpl", "");
KSYMTAB_FUNC(load_pdptrs, "_gpl", "");
KSYMTAB_FUNC(kvm_post_set_cr0, "_gpl", "");
KSYMTAB_FUNC(kvm_set_cr0, "_gpl", "");
KSYMTAB_FUNC(kvm_lmsw, "_gpl", "");
KSYMTAB_FUNC(kvm_load_guest_xsave_state, "_gpl", "");
KSYMTAB_FUNC(kvm_load_host_xsave_state, "_gpl", "");
KSYMTAB_FUNC(kvm_emulate_xsetbv, "_gpl", "");
KSYMTAB_FUNC(__kvm_is_valid_cr4, "_gpl", "");
KSYMTAB_FUNC(kvm_post_set_cr4, "_gpl", "");
KSYMTAB_FUNC(kvm_set_cr4, "_gpl", "");
KSYMTAB_FUNC(kvm_set_cr3, "_gpl", "");
KSYMTAB_FUNC(kvm_set_cr8, "_gpl", "");
KSYMTAB_FUNC(kvm_get_cr8, "_gpl", "");
KSYMTAB_FUNC(kvm_update_dr7, "_gpl", "");
KSYMTAB_FUNC(kvm_set_dr, "_gpl", "");
KSYMTAB_FUNC(kvm_get_dr, "_gpl", "");
KSYMTAB_FUNC(kvm_emulate_rdpmc, "_gpl", "");
KSYMTAB_FUNC(kvm_valid_efer, "_gpl", "");
KSYMTAB_FUNC(kvm_enable_efer_bits, "_gpl", "");
KSYMTAB_FUNC(kvm_msr_allowed, "_gpl", "");
KSYMTAB_FUNC(kvm_get_msr, "_gpl", "");
KSYMTAB_FUNC(kvm_set_msr, "_gpl", "");
KSYMTAB_FUNC(kvm_emulate_rdmsr, "_gpl", "");
KSYMTAB_FUNC(kvm_emulate_wrmsr, "_gpl", "");
KSYMTAB_FUNC(kvm_emulate_invd, "_gpl", "");
KSYMTAB_FUNC(kvm_handle_invalid_op, "_gpl", "");
KSYMTAB_FUNC(kvm_emulate_mwait, "_gpl", "");
KSYMTAB_FUNC(kvm_emulate_monitor, "_gpl", "");
KSYMTAB_FUNC(handle_fastpath_set_msr_irqoff, "_gpl", "");
KSYMTAB_FUNC(kvm_read_l1_tsc, "_gpl", "");
KSYMTAB_FUNC(kvm_calc_nested_tsc_offset, "_gpl", "");
KSYMTAB_FUNC(kvm_calc_nested_tsc_multiplier, "_gpl", "");
KSYMTAB_FUNC(kvm_service_local_tlb_flush_requests, "_gpl", "");
KSYMTAB_FUNC(kvm_set_msr_common, "_gpl", "");
KSYMTAB_FUNC(kvm_get_msr_common, "_gpl", "");
KSYMTAB_FUNC(kvm_mmu_gva_to_gpa_read, "_gpl", "");
KSYMTAB_FUNC(kvm_mmu_gva_to_gpa_write, "_gpl", "");
KSYMTAB_FUNC(kvm_read_guest_virt, "_gpl", "");
KSYMTAB_FUNC(kvm_write_guest_virt_system, "_gpl", "");
KSYMTAB_FUNC(handle_ud, "_gpl", "");
KSYMTAB_FUNC(kvm_emulate_wbinvd, "_gpl", "");
KSYMTAB_FUNC(kvm_inject_realmode_interrupt, "_gpl", "");
KSYMTAB_FUNC(__kvm_prepare_emulation_failure_exit, "_gpl", "");
KSYMTAB_FUNC(kvm_prepare_emulation_failure_exit, "_gpl", "");
KSYMTAB_FUNC(kvm_skip_emulated_instruction, "_gpl", "");
KSYMTAB_FUNC(x86_decode_emulated_instruction, "_gpl", "");
KSYMTAB_FUNC(kvm_emulate_instruction, "_gpl", "");
KSYMTAB_FUNC(kvm_emulate_instruction_from_buffer, "_gpl", "");
KSYMTAB_FUNC(kvm_fast_pio, "_gpl", "");
KSYMTAB_FUNC(kvm_x86_vendor_init, "_gpl", "");
KSYMTAB_FUNC(kvm_x86_vendor_exit, "_gpl", "");
KSYMTAB_FUNC(kvm_emulate_halt_noskip, "_gpl", "");
KSYMTAB_FUNC(kvm_emulate_halt, "_gpl", "");
KSYMTAB_FUNC(kvm_emulate_ap_reset_hold, "_gpl", "");
KSYMTAB_FUNC(kvm_apicv_activated, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_apicv_activated, "_gpl", "");
KSYMTAB_FUNC(kvm_emulate_hypercall, "_gpl", "");
KSYMTAB_FUNC(__kvm_vcpu_update_apicv, "_gpl", "");
KSYMTAB_FUNC(kvm_set_or_clear_apicv_inhibit, "_gpl", "");
KSYMTAB_FUNC(__kvm_request_immediate_exit, "_gpl", "");
KSYMTAB_FUNC(kvm_task_switch, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_reset, "_gpl", "");
KSYMTAB_FUNC(kvm_vcpu_deliver_sipi_vector, "_gpl", "");
KSYMTAB_DATA(kvm_has_noapic_vcpu, "_gpl", "");
KSYMTAB_FUNC(__x86_set_memory_region, "_gpl", "");
KSYMTAB_FUNC(kvm_get_linear_rip, "_gpl", "");
KSYMTAB_FUNC(kvm_is_linear_rip, "_gpl", "");
KSYMTAB_FUNC(kvm_get_rflags, "_gpl", "");
KSYMTAB_FUNC(kvm_set_rflags, "_gpl", "");
KSYMTAB_FUNC(kvm_arch_start_assignment, "_gpl", "");
KSYMTAB_FUNC(kvm_arch_end_assignment, "_gpl", "");
KSYMTAB_FUNC(kvm_arch_has_assigned_device, "_gpl", "");
KSYMTAB_FUNC(kvm_arch_register_noncoherent_dma, "_gpl", "");
KSYMTAB_FUNC(kvm_arch_unregister_noncoherent_dma, "_gpl", "");
KSYMTAB_FUNC(kvm_arch_has_noncoherent_dma, "_gpl", "");
KSYMTAB_FUNC(kvm_arch_no_poll, "_gpl", "");
KSYMTAB_FUNC(kvm_spec_ctrl_test_value, "_gpl", "");
KSYMTAB_FUNC(kvm_fixup_and_inject_pf_error, "_gpl", "");
KSYMTAB_FUNC(kvm_handle_memory_failure, "_gpl", "");
KSYMTAB_FUNC(kvm_handle_invpcid, "_gpl", "");
KSYMTAB_FUNC(kvm_sev_es_mmio_write, "_gpl", "");
KSYMTAB_FUNC(kvm_sev_es_mmio_read, "_gpl", "");
KSYMTAB_FUNC(kvm_sev_es_string_io, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_entry, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_entry, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_entry, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_entry, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_exit, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_exit, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_exit, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_exit, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_fast_mmio, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_fast_mmio, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_fast_mmio, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_fast_mmio, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_inj_virq, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_inj_virq, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_inj_virq, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_inj_virq, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_page_fault, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_page_fault, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_page_fault, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_page_fault, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_msr, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_msr, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_msr, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_msr, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_cr, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_cr, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_cr, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_cr, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_nested_vmenter, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_nested_vmenter, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_nested_vmenter, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_nested_vmenter, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_nested_vmexit, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_nested_vmexit, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_nested_vmexit, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_nested_vmexit, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_nested_vmexit_inject, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_nested_vmexit_inject, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_nested_vmexit_inject, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_nested_vmexit_inject, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_nested_intr_vmexit, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_nested_intr_vmexit, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_nested_intr_vmexit, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_nested_intr_vmexit, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_nested_vmenter_failed, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_nested_vmenter_failed, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_nested_vmenter_failed, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_nested_vmenter_failed, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_invlpga, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_invlpga, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_invlpga, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_invlpga, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_skinit, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_skinit, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_skinit, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_skinit, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_nested_intercepts, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_nested_intercepts, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_nested_intercepts, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_nested_intercepts, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_write_tsc_offset, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_write_tsc_offset, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_write_tsc_offset, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_write_tsc_offset, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_ple_window_update, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_ple_window_update, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_ple_window_update, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_ple_window_update, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_pml_full, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_pml_full, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_pml_full, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_pml_full, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_pi_irte_update, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_pi_irte_update, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_pi_irte_update, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_pi_irte_update, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_avic_unaccelerated_access, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_avic_unaccelerated_access, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_avic_unaccelerated_access, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_avic_unaccelerated_access, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_avic_incomplete_ipi, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_avic_incomplete_ipi, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_avic_incomplete_ipi, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_avic_incomplete_ipi, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_avic_ga_log, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_avic_ga_log, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_avic_ga_log, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_avic_ga_log, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_avic_kick_vcpu_slowpath, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_avic_kick_vcpu_slowpath, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_avic_kick_vcpu_slowpath, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_avic_kick_vcpu_slowpath, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_avic_doorbell, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_avic_doorbell, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_avic_doorbell, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_avic_doorbell, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_apicv_accept_irq, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_apicv_accept_irq, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_apicv_accept_irq, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_apicv_accept_irq, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_vmgexit_enter, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_vmgexit_enter, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_vmgexit_enter, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_vmgexit_enter, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_vmgexit_exit, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_vmgexit_exit, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_vmgexit_exit, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_vmgexit_exit, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_vmgexit_msr_protocol_enter, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_vmgexit_msr_protocol_enter, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_vmgexit_msr_protocol_enter, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_vmgexit_msr_protocol_enter, "_gpl", "");
KSYMTAB_DATA(__tracepoint_kvm_vmgexit_msr_protocol_exit, "_gpl", "");
KSYMTAB_FUNC(__traceiter_kvm_vmgexit_msr_protocol_exit, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_kvm_vmgexit_msr_protocol_exit, "_gpl", "");
KSYMTAB_FUNC(__SCT__tp_func_kvm_vmgexit_msr_protocol_exit, "_gpl", "");
KSYMTAB_FUNC(kvm_cpu_has_injectable_intr, "_gpl", "");
KSYMTAB_FUNC(kvm_cpu_has_interrupt, "_gpl", "");
KSYMTAB_FUNC(kvm_cpu_get_interrupt, "_gpl", "");
KSYMTAB_FUNC(__kvm_apic_update_irr, "_gpl", "");
KSYMTAB_FUNC(kvm_apic_update_irr, "_gpl", "");
KSYMTAB_FUNC(kvm_apic_clear_irr, "_gpl", "");
KSYMTAB_FUNC(kvm_lapic_find_highest_irr, "_gpl", "");
KSYMTAB_FUNC(kvm_apic_update_ppr, "_gpl", "");
KSYMTAB_FUNC(kvm_apic_match_dest, "_gpl", "");
KSYMTAB_FUNC(kvm_apic_set_eoi_accelerated, "_gpl", "");
KSYMTAB_FUNC(kvm_apic_send_ipi, "_gpl", "");
KSYMTAB_FUNC(kvm_lapic_readable_reg_mask, "_gpl", "");
KSYMTAB_FUNC(kvm_wait_lapic_expire, "_gpl", "");
KSYMTAB_FUNC(kvm_lapic_expired_hv_timer, "_gpl", "");
KSYMTAB_FUNC(kvm_lapic_set_eoi, "_gpl", "");
KSYMTAB_FUNC(kvm_apic_write_nodecode, "_gpl", "");
KSYMTAB_FUNC(kvm_alloc_apic_access_page, "_gpl", "");
KSYMTAB_FUNC(kvm_apic_has_interrupt, "_gpl", "");
KSYMTAB_FUNC(kvm_set_msi_irq, "_gpl", "");
KSYMTAB_FUNC(kvm_intr_is_single_vcpu, "_gpl", "");
KSYMTAB_DATA(kvm_cpu_caps, "_gpl", "");
KSYMTAB_FUNC(kvm_update_cpuid_runtime, "_gpl", "");
KSYMTAB_FUNC(kvm_set_cpu_caps, "_gpl", "");
KSYMTAB_FUNC(kvm_find_cpuid_entry_index, "_gpl", "");
KSYMTAB_FUNC(kvm_find_cpuid_entry, "_gpl", "");
KSYMTAB_FUNC(kvm_cpuid, "_gpl", "");
KSYMTAB_FUNC(kvm_emulate_cpuid, "_gpl", "");
KSYMTAB_DATA(kvm_pmu_cap, "_gpl", "");
KSYMTAB_FUNC(kvm_pmu_trigger_event, "_gpl", "");
KSYMTAB_FUNC(kvm_mtrr_get_guest_memory_type, "_gpl", "");
KSYMTAB_FUNC(kvm_hv_assist_page_enabled, "_gpl", "");
KSYMTAB_FUNC(kvm_hv_get_assist_page, "_gpl", "");
KSYMTAB_FUNC(kvm_mmu_free_roots, "_gpl", "");
KSYMTAB_FUNC(kvm_mmu_free_guest_mode_roots, "_gpl", "");
KSYMTAB_FUNC(kvm_handle_page_fault, "_gpl", "");
KSYMTAB_FUNC(kvm_mmu_new_pgd, "_gpl", "");
KSYMTAB_FUNC(kvm_init_shadow_npt_mmu, "_gpl", "");
KSYMTAB_FUNC(kvm_init_shadow_ept_mmu, "_gpl", "");
KSYMTAB_FUNC(kvm_init_mmu, "_gpl", "");
KSYMTAB_FUNC(kvm_mmu_reset_context, "_gpl", "");
KSYMTAB_FUNC(kvm_mmu_page_fault, "_gpl", "");
KSYMTAB_FUNC(kvm_mmu_invalidate_addr, "_gpl", "");
KSYMTAB_FUNC(kvm_mmu_invlpg, "_gpl", "");
KSYMTAB_FUNC(kvm_configure_mmu, "_gpl", "");
KSYMTAB_FUNC(kvm_page_track_register_notifier, "_gpl", "");
KSYMTAB_FUNC(kvm_page_track_unregister_notifier, "_gpl", "");
KSYMTAB_FUNC(kvm_write_track_add_gfn, "_gpl", "");
KSYMTAB_FUNC(kvm_write_track_remove_gfn, "_gpl", "");
KSYMTAB_DATA(enable_mmio_caching, "_gpl", "");
KSYMTAB_FUNC(kvm_mmu_set_mmio_spte_mask, "_gpl", "");
KSYMTAB_FUNC(kvm_mmu_set_me_spte_mask, "_gpl", "");
KSYMTAB_FUNC(kvm_mmu_set_ept_masks, "_gpl", "");
KSYMTAB_FUNC(hv_flush_remote_tlbs_range, "_gpl", "");
KSYMTAB_FUNC(hv_flush_remote_tlbs, "_gpl", "");
KSYMTAB_FUNC(hv_track_root_tdp, "_gpl", "");

SYMBOL_CRC(halt_poll_ns, 0x59e640c0, "_gpl");
SYMBOL_CRC(halt_poll_ns_grow, 0x7afe324e, "_gpl");
SYMBOL_CRC(halt_poll_ns_grow_start, 0x5fb8848b, "_gpl");
SYMBOL_CRC(halt_poll_ns_shrink, 0x39fd83db, "_gpl");
SYMBOL_CRC(kvm_debugfs_dir, 0xbc7c2d64, "_gpl");
SYMBOL_CRC(vcpu_load, 0x104e5aee, "_gpl");
SYMBOL_CRC(vcpu_put, 0x64adad05, "_gpl");
SYMBOL_CRC(kvm_make_all_cpus_request, 0x90f6fa70, "_gpl");
SYMBOL_CRC(kvm_flush_remote_tlbs, 0xa7620597, "_gpl");
SYMBOL_CRC(kvm_destroy_vcpus, 0xd52c4f57, "_gpl");
SYMBOL_CRC(kvm_get_kvm, 0x67b36ed2, "_gpl");
SYMBOL_CRC(kvm_get_kvm_safe, 0xc5abb33b, "_gpl");
SYMBOL_CRC(kvm_put_kvm, 0x3f07021a, "_gpl");
SYMBOL_CRC(kvm_put_kvm_no_destroy, 0x32eb3c66, "_gpl");
SYMBOL_CRC(__kvm_set_memory_region, 0x6aeda719, "_gpl");
SYMBOL_CRC(kvm_set_memory_region, 0xca8b2c25, "_gpl");
SYMBOL_CRC(gfn_to_memslot, 0xbb86c19e, "_gpl");
SYMBOL_CRC(kvm_is_visible_gfn, 0x6277d23d, "_gpl");
SYMBOL_CRC(kvm_vcpu_is_visible_gfn, 0x53d5ec3c, "_gpl");
SYMBOL_CRC(gfn_to_hva_memslot, 0x981e3866, "_gpl");
SYMBOL_CRC(gfn_to_hva, 0xea1d2f00, "_gpl");
SYMBOL_CRC(kvm_vcpu_gfn_to_hva, 0x223af1a2, "_gpl");
SYMBOL_CRC(__gfn_to_pfn_memslot, 0x34af4f9d, "_gpl");
SYMBOL_CRC(gfn_to_pfn_prot, 0x7d7cee39, "_gpl");
SYMBOL_CRC(gfn_to_pfn_memslot, 0x4c78ca7b, "_gpl");
SYMBOL_CRC(gfn_to_pfn_memslot_atomic, 0xc13494bc, "_gpl");
SYMBOL_CRC(kvm_vcpu_gfn_to_pfn_atomic, 0x34575907, "_gpl");
SYMBOL_CRC(gfn_to_pfn, 0x8ab22724, "_gpl");
SYMBOL_CRC(kvm_vcpu_gfn_to_pfn, 0xc340672f, "_gpl");
SYMBOL_CRC(gfn_to_page_many_atomic, 0xc77aa90e, "_gpl");
SYMBOL_CRC(gfn_to_page, 0xca66881a, "_gpl");
SYMBOL_CRC(kvm_vcpu_map, 0xa4319e37, "_gpl");
SYMBOL_CRC(kvm_vcpu_unmap, 0xf946d1b2, "_gpl");
SYMBOL_CRC(kvm_release_page_clean, 0x18c14213, "_gpl");
SYMBOL_CRC(kvm_release_pfn_clean, 0x4e3fd1b4, "_gpl");
SYMBOL_CRC(kvm_release_page_dirty, 0x7dc7c37f, "_gpl");
SYMBOL_CRC(kvm_release_pfn_dirty, 0x7c94c99a, "_gpl");
SYMBOL_CRC(kvm_set_pfn_dirty, 0xa1c4231f, "_gpl");
SYMBOL_CRC(kvm_set_pfn_accessed, 0x6892e3c3, "_gpl");
SYMBOL_CRC(kvm_read_guest_page, 0x8be82633, "_gpl");
SYMBOL_CRC(kvm_vcpu_read_guest_page, 0x15a4d120, "_gpl");
SYMBOL_CRC(kvm_read_guest, 0x2caf840d, "_gpl");
SYMBOL_CRC(kvm_vcpu_read_guest, 0x8a9f014e, "_gpl");
SYMBOL_CRC(kvm_vcpu_read_guest_atomic, 0x8bcc65a7, "_gpl");
SYMBOL_CRC(kvm_write_guest_page, 0x41214ac3, "_gpl");
SYMBOL_CRC(kvm_vcpu_write_guest_page, 0x76e063a7, "_gpl");
SYMBOL_CRC(kvm_write_guest, 0x42f7603e, "_gpl");
SYMBOL_CRC(kvm_vcpu_write_guest, 0x2c427afa, "_gpl");
SYMBOL_CRC(kvm_gfn_to_hva_cache_init, 0x7841a00e, "_gpl");
SYMBOL_CRC(kvm_write_guest_offset_cached, 0xc74c3233, "_gpl");
SYMBOL_CRC(kvm_write_guest_cached, 0xc786ee0f, "_gpl");
SYMBOL_CRC(kvm_read_guest_offset_cached, 0xecac66b8, "_gpl");
SYMBOL_CRC(kvm_read_guest_cached, 0xec4fec03, "_gpl");
SYMBOL_CRC(kvm_clear_guest, 0xb287105b, "_gpl");
SYMBOL_CRC(mark_page_dirty_in_slot, 0x0b003fb6, "_gpl");
SYMBOL_CRC(mark_page_dirty, 0xb50c73bc, "_gpl");
SYMBOL_CRC(kvm_vcpu_mark_page_dirty, 0x639916bc, "_gpl");
SYMBOL_CRC(kvm_vcpu_halt, 0xe7d37e74, "_gpl");
SYMBOL_CRC(kvm_vcpu_wake_up, 0x60b82ee8, "_gpl");
SYMBOL_CRC(kvm_vcpu_kick, 0x9faba727, "_gpl");
SYMBOL_CRC(kvm_vcpu_yield_to, 0x3f131fa5, "_gpl");
SYMBOL_CRC(kvm_vcpu_on_spin, 0x5a6a7d80, "_gpl");
SYMBOL_CRC(kvm_are_all_memslots_empty, 0xd6e2a26a, "_gpl");
SYMBOL_CRC(file_is_kvm, 0x487c5bf4, "_gpl");
SYMBOL_CRC(kvm_rebooting, 0x485cd7f6, "_gpl");
SYMBOL_CRC(kvm_io_bus_write, 0x4e5c9927, "_gpl");
SYMBOL_CRC(kvm_io_bus_get_dev, 0x7be2af8d, "_gpl");
SYMBOL_CRC(kvm_get_running_vcpu, 0x04c729be, "_gpl");
SYMBOL_CRC(kvm_init, 0x4ea50cf7, "_gpl");
SYMBOL_CRC(kvm_exit, 0x27046576, "_gpl");
SYMBOL_CRC(kvm_irq_has_notifier, 0x9cdc82c7, "_gpl");
SYMBOL_CRC(kvm_gpc_check, 0x53a06b38, "_gpl");
SYMBOL_CRC(kvm_gpc_refresh, 0xa71185ae, "_gpl");
SYMBOL_CRC(kvm_gpc_init, 0x427c09e2, "_gpl");
SYMBOL_CRC(kvm_gpc_activate, 0x64748785, "_gpl");
SYMBOL_CRC(kvm_gpc_deactivate, 0x3c59a983, "_gpl");
SYMBOL_CRC(kvm_caps, 0x6bc792a4, "_gpl");
SYMBOL_CRC(__SCK__kvm_x86_get_cs_db_l_bits, 0xfafb5e1c, "_gpl");
SYMBOL_CRC(__SCT__kvm_x86_get_cs_db_l_bits, 0x53d9f927, "_gpl");
SYMBOL_CRC(__SCK__kvm_x86_cache_reg, 0x81ac79ab, "_gpl");
SYMBOL_CRC(__SCT__kvm_x86_cache_reg, 0x59387ba3, "_gpl");
SYMBOL_CRC(report_ignored_msrs, 0xc96d35f4, "_gpl");
SYMBOL_CRC(enable_vmware_backdoor, 0x1db1c372, "_gpl");
SYMBOL_CRC(enable_pmu, 0xb82c0987, "_gpl");
SYMBOL_CRC(kvm_nr_uret_msrs, 0x0b58a11d, "_gpl");
SYMBOL_CRC(host_efer, 0x159b8d5e, "_gpl");
SYMBOL_CRC(allow_smaller_maxphyaddr, 0x9cf59e7a, "_gpl");
SYMBOL_CRC(enable_apicv, 0xce576a13, "_gpl");
SYMBOL_CRC(host_xss, 0x6c95726c, "_gpl");
SYMBOL_CRC(host_arch_capabilities, 0xe54c1a0d, "_gpl");
SYMBOL_CRC(kvm_add_user_return_msr, 0x7fe19488, "_gpl");
SYMBOL_CRC(kvm_find_user_return_msr, 0x3ab2794c, "_gpl");
SYMBOL_CRC(kvm_set_user_return_msr, 0x053614ec, "_gpl");
SYMBOL_CRC(kvm_get_apic_mode, 0x7d3afd65, "_gpl");
SYMBOL_CRC(kvm_spurious_fault, 0x709cd8cb, "_gpl");
SYMBOL_CRC(kvm_deliver_exception_payload, 0xd157bef5, "_gpl");
SYMBOL_CRC(kvm_queue_exception, 0x672ffb53, "_gpl");
SYMBOL_CRC(kvm_requeue_exception, 0xb72dfbaa, "_gpl");
SYMBOL_CRC(kvm_queue_exception_p, 0x0a2da5fd, "_gpl");
SYMBOL_CRC(kvm_complete_insn_gp, 0x5b2adbdd, "_gpl");
SYMBOL_CRC(kvm_inject_emulated_page_fault, 0xb229ca6a, "_gpl");
SYMBOL_CRC(kvm_queue_exception_e, 0xdc48f3a2, "_gpl");
SYMBOL_CRC(kvm_requeue_exception_e, 0xf8512291, "_gpl");
SYMBOL_CRC(kvm_require_dr, 0xca3b5270, "_gpl");
SYMBOL_CRC(load_pdptrs, 0x8c430881, "_gpl");
SYMBOL_CRC(kvm_post_set_cr0, 0xf9e5d228, "_gpl");
SYMBOL_CRC(kvm_set_cr0, 0x2d905f00, "_gpl");
SYMBOL_CRC(kvm_lmsw, 0xe4701e4b, "_gpl");
SYMBOL_CRC(kvm_load_guest_xsave_state, 0xb0d73feb, "_gpl");
SYMBOL_CRC(kvm_load_host_xsave_state, 0xcbc5e076, "_gpl");
SYMBOL_CRC(kvm_emulate_xsetbv, 0x6e75cf68, "_gpl");
SYMBOL_CRC(__kvm_is_valid_cr4, 0x582a1b63, "_gpl");
SYMBOL_CRC(kvm_post_set_cr4, 0x2f9bcce7, "_gpl");
SYMBOL_CRC(kvm_set_cr4, 0x97cd8173, "_gpl");
SYMBOL_CRC(kvm_set_cr3, 0x28f58635, "_gpl");
SYMBOL_CRC(kvm_set_cr8, 0x825ae5a7, "_gpl");
SYMBOL_CRC(kvm_get_cr8, 0x88787fb6, "_gpl");
SYMBOL_CRC(kvm_update_dr7, 0x2183313a, "_gpl");
SYMBOL_CRC(kvm_set_dr, 0x96af7a25, "_gpl");
SYMBOL_CRC(kvm_get_dr, 0xa10db22a, "_gpl");
SYMBOL_CRC(kvm_emulate_rdpmc, 0x536f9053, "_gpl");
SYMBOL_CRC(kvm_valid_efer, 0xfd4de376, "_gpl");
SYMBOL_CRC(kvm_enable_efer_bits, 0x1d013832, "_gpl");
SYMBOL_CRC(kvm_msr_allowed, 0x67103de6, "_gpl");
SYMBOL_CRC(kvm_get_msr, 0x89e733e6, "_gpl");
SYMBOL_CRC(kvm_set_msr, 0x13fca3fa, "_gpl");
SYMBOL_CRC(kvm_emulate_rdmsr, 0xd1f827a4, "_gpl");
SYMBOL_CRC(kvm_emulate_wrmsr, 0x70f7c1d7, "_gpl");
SYMBOL_CRC(kvm_emulate_invd, 0xa367499d, "_gpl");
SYMBOL_CRC(kvm_handle_invalid_op, 0xa61ea49f, "_gpl");
SYMBOL_CRC(kvm_emulate_mwait, 0xa4928d3f, "_gpl");
SYMBOL_CRC(kvm_emulate_monitor, 0x15da83cd, "_gpl");
SYMBOL_CRC(handle_fastpath_set_msr_irqoff, 0xe370a791, "_gpl");
SYMBOL_CRC(kvm_read_l1_tsc, 0xa1f029b1, "_gpl");
SYMBOL_CRC(kvm_calc_nested_tsc_offset, 0x6303c089, "_gpl");
SYMBOL_CRC(kvm_calc_nested_tsc_multiplier, 0xef14fd98, "_gpl");
SYMBOL_CRC(kvm_service_local_tlb_flush_requests, 0x89a2ffdc, "_gpl");
SYMBOL_CRC(kvm_set_msr_common, 0x276c9cce, "_gpl");
SYMBOL_CRC(kvm_get_msr_common, 0x14c68860, "_gpl");
SYMBOL_CRC(kvm_mmu_gva_to_gpa_read, 0x75001475, "_gpl");
SYMBOL_CRC(kvm_mmu_gva_to_gpa_write, 0x8b307fbf, "_gpl");
SYMBOL_CRC(kvm_read_guest_virt, 0x30583657, "_gpl");
SYMBOL_CRC(kvm_write_guest_virt_system, 0x69ae75df, "_gpl");
SYMBOL_CRC(handle_ud, 0xf4002534, "_gpl");
SYMBOL_CRC(kvm_emulate_wbinvd, 0x658dd01c, "_gpl");
SYMBOL_CRC(kvm_inject_realmode_interrupt, 0x474333f6, "_gpl");
SYMBOL_CRC(__kvm_prepare_emulation_failure_exit, 0x2d7a9187, "_gpl");
SYMBOL_CRC(kvm_prepare_emulation_failure_exit, 0x8cad8fa5, "_gpl");
SYMBOL_CRC(kvm_skip_emulated_instruction, 0x71950474, "_gpl");
SYMBOL_CRC(x86_decode_emulated_instruction, 0x1c42f98d, "_gpl");
SYMBOL_CRC(kvm_emulate_instruction, 0x21b6a4f4, "_gpl");
SYMBOL_CRC(kvm_emulate_instruction_from_buffer, 0x4224227b, "_gpl");
SYMBOL_CRC(kvm_fast_pio, 0x09b791c1, "_gpl");
SYMBOL_CRC(kvm_x86_vendor_init, 0xd15a8bbd, "_gpl");
SYMBOL_CRC(kvm_x86_vendor_exit, 0x687b78fc, "_gpl");
SYMBOL_CRC(kvm_emulate_halt_noskip, 0xccbdf137, "_gpl");
SYMBOL_CRC(kvm_emulate_halt, 0x2e51b394, "_gpl");
SYMBOL_CRC(kvm_emulate_ap_reset_hold, 0xa45a1f7a, "_gpl");
SYMBOL_CRC(kvm_apicv_activated, 0x96e0c93e, "_gpl");
SYMBOL_CRC(kvm_vcpu_apicv_activated, 0x13c53f7b, "_gpl");
SYMBOL_CRC(kvm_emulate_hypercall, 0x2fec45f9, "_gpl");
SYMBOL_CRC(__kvm_vcpu_update_apicv, 0xb79243bc, "_gpl");
SYMBOL_CRC(kvm_set_or_clear_apicv_inhibit, 0x3f251dca, "_gpl");
SYMBOL_CRC(__kvm_request_immediate_exit, 0xa03ce8a4, "_gpl");
SYMBOL_CRC(kvm_task_switch, 0xe4f3ab82, "_gpl");
SYMBOL_CRC(kvm_vcpu_reset, 0x90c548cb, "_gpl");
SYMBOL_CRC(kvm_vcpu_deliver_sipi_vector, 0x1f19e746, "_gpl");
SYMBOL_CRC(kvm_has_noapic_vcpu, 0x3f510ff5, "_gpl");
SYMBOL_CRC(__x86_set_memory_region, 0x834e5bbf, "_gpl");
SYMBOL_CRC(kvm_get_linear_rip, 0x15c51f88, "_gpl");
SYMBOL_CRC(kvm_is_linear_rip, 0x42ac129c, "_gpl");
SYMBOL_CRC(kvm_get_rflags, 0x4b4e163e, "_gpl");
SYMBOL_CRC(kvm_set_rflags, 0xbbe5cff4, "_gpl");
SYMBOL_CRC(kvm_arch_start_assignment, 0x9a6de457, "_gpl");
SYMBOL_CRC(kvm_arch_end_assignment, 0x515728c6, "_gpl");
SYMBOL_CRC(kvm_arch_has_assigned_device, 0xdf19c259, "_gpl");
SYMBOL_CRC(kvm_arch_register_noncoherent_dma, 0xb94ee699, "_gpl");
SYMBOL_CRC(kvm_arch_unregister_noncoherent_dma, 0x6b022805, "_gpl");
SYMBOL_CRC(kvm_arch_has_noncoherent_dma, 0xca7aa946, "_gpl");
SYMBOL_CRC(kvm_arch_no_poll, 0x49d3dc15, "_gpl");
SYMBOL_CRC(kvm_spec_ctrl_test_value, 0x2d82cc24, "_gpl");
SYMBOL_CRC(kvm_fixup_and_inject_pf_error, 0xf025556a, "_gpl");
SYMBOL_CRC(kvm_handle_memory_failure, 0xc676e588, "_gpl");
SYMBOL_CRC(kvm_handle_invpcid, 0xf98ff99d, "_gpl");
SYMBOL_CRC(kvm_sev_es_mmio_write, 0xe5a150f3, "_gpl");
SYMBOL_CRC(kvm_sev_es_mmio_read, 0x031bedaa, "_gpl");
SYMBOL_CRC(kvm_sev_es_string_io, 0x1a8a03cb, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_entry, 0xbefcfbbe, "_gpl");
SYMBOL_CRC(__traceiter_kvm_entry, 0xf3093b77, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_entry, 0x5f5ef764, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_entry, 0xc071e99f, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_exit, 0xdde0a8c2, "_gpl");
SYMBOL_CRC(__traceiter_kvm_exit, 0x8483b9a5, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_exit, 0x71746a89, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_exit, 0x616e6c95, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_fast_mmio, 0x8ae4f04d, "_gpl");
SYMBOL_CRC(__traceiter_kvm_fast_mmio, 0x752c2b00, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_fast_mmio, 0x812b5c51, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_fast_mmio, 0xea5cda33, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_inj_virq, 0x2756dabf, "_gpl");
SYMBOL_CRC(__traceiter_kvm_inj_virq, 0x7f51547e, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_inj_virq, 0x3325e770, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_inj_virq, 0x6becaded, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_page_fault, 0x8f9ce934, "_gpl");
SYMBOL_CRC(__traceiter_kvm_page_fault, 0x1304a359, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_page_fault, 0x9b967ad7, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_page_fault, 0x7ff2a104, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_msr, 0xee6fe210, "_gpl");
SYMBOL_CRC(__traceiter_kvm_msr, 0xdc7369fe, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_msr, 0xc654e93b, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_msr, 0xf084b57d, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_cr, 0xf8096097, "_gpl");
SYMBOL_CRC(__traceiter_kvm_cr, 0x17f9cfe3, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_cr, 0xc1bad5af, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_cr, 0x778e30b9, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_nested_vmenter, 0xa8278384, "_gpl");
SYMBOL_CRC(__traceiter_kvm_nested_vmenter, 0x74910627, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_nested_vmenter, 0x738d570c, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_nested_vmenter, 0x6d2c9437, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_nested_vmexit, 0xf8068a03, "_gpl");
SYMBOL_CRC(__traceiter_kvm_nested_vmexit, 0xed86ede5, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_nested_vmexit, 0xe91bd429, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_nested_vmexit, 0x2510fc6d, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_nested_vmexit_inject, 0x634b5c0b, "_gpl");
SYMBOL_CRC(__traceiter_kvm_nested_vmexit_inject, 0x114eb824, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_nested_vmexit_inject, 0x4ed73097, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_nested_vmexit_inject, 0x8b618aa6, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_nested_intr_vmexit, 0xce3bf6eb, "_gpl");
SYMBOL_CRC(__traceiter_kvm_nested_intr_vmexit, 0x912a9286, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_nested_intr_vmexit, 0x29bfaaec, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_nested_intr_vmexit, 0xd09da48b, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_nested_vmenter_failed, 0x4da0492c, "_gpl");
SYMBOL_CRC(__traceiter_kvm_nested_vmenter_failed, 0x23263c0a, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_nested_vmenter_failed, 0xb4340a2f, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_nested_vmenter_failed, 0xe93dfc8c, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_invlpga, 0x9b1237e7, "_gpl");
SYMBOL_CRC(__traceiter_kvm_invlpga, 0x0b8a3365, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_invlpga, 0xe973b7fb, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_invlpga, 0x4a1c261b, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_skinit, 0xd1861546, "_gpl");
SYMBOL_CRC(__traceiter_kvm_skinit, 0xb96e9aa1, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_skinit, 0xb7618c80, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_skinit, 0xe0e786a7, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_nested_intercepts, 0x5cf18d09, "_gpl");
SYMBOL_CRC(__traceiter_kvm_nested_intercepts, 0xa6a50230, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_nested_intercepts, 0x60808d07, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_nested_intercepts, 0xa588ef67, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_write_tsc_offset, 0xcf2aaf65, "_gpl");
SYMBOL_CRC(__traceiter_kvm_write_tsc_offset, 0x5c11e105, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_write_tsc_offset, 0xbdce7041, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_write_tsc_offset, 0xa84a2e73, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_ple_window_update, 0x265cdde4, "_gpl");
SYMBOL_CRC(__traceiter_kvm_ple_window_update, 0x1412f042, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_ple_window_update, 0x1a2dddea, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_ple_window_update, 0x93a3e40e, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_pml_full, 0x5991818f, "_gpl");
SYMBOL_CRC(__traceiter_kvm_pml_full, 0xc60d7d0c, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_pml_full, 0x4de2bc40, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_pml_full, 0xf2df48f3, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_pi_irte_update, 0x5fcf5b42, "_gpl");
SYMBOL_CRC(__traceiter_kvm_pi_irte_update, 0x45e80fdf, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_pi_irte_update, 0x84658fca, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_pi_irte_update, 0x388e0e10, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_avic_unaccelerated_access, 0x5104c321, "_gpl");
SYMBOL_CRC(__traceiter_kvm_avic_unaccelerated_access, 0x9f68faa3, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_avic_unaccelerated_access, 0xe0215af0, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_avic_unaccelerated_access, 0xf32dff97, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_avic_incomplete_ipi, 0xe441ea1d, "_gpl");
SYMBOL_CRC(__traceiter_kvm_avic_incomplete_ipi, 0x9e20b2bc, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_avic_incomplete_ipi, 0x7ac2fbe2, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_avic_incomplete_ipi, 0x4942be67, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_avic_ga_log, 0x37b937b9, "_gpl");
SYMBOL_CRC(__traceiter_kvm_avic_ga_log, 0xa7022320, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_avic_ga_log, 0x0eae8ee8, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_avic_ga_log, 0x1d1b139a, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_avic_kick_vcpu_slowpath, 0x43cf6a58, "_gpl");
SYMBOL_CRC(__traceiter_kvm_avic_kick_vcpu_slowpath, 0x4733bf8c, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_avic_kick_vcpu_slowpath, 0x8737d025, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_avic_kick_vcpu_slowpath, 0x5f911332, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_avic_doorbell, 0xa8e4010b, "_gpl");
SYMBOL_CRC(__traceiter_kvm_avic_doorbell, 0xc7fe55ac, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_avic_doorbell, 0xb9f95f21, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_avic_doorbell, 0x1f8e9483, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_apicv_accept_irq, 0x365c3d14, "_gpl");
SYMBOL_CRC(__traceiter_kvm_apicv_accept_irq, 0x3d93fb92, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_apicv_accept_irq, 0x44b8e230, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_apicv_accept_irq, 0x5c7e9f84, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_vmgexit_enter, 0xc4bb0bda, "_gpl");
SYMBOL_CRC(__traceiter_kvm_vmgexit_enter, 0x8f3a890e, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_vmgexit_enter, 0xd5a655f0, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_vmgexit_enter, 0x8a7fe54a, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_vmgexit_exit, 0x621b3957, "_gpl");
SYMBOL_CRC(__traceiter_kvm_vmgexit_exit, 0x7510a39a, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_vmgexit_exit, 0x7e4e4f8c, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_vmgexit_exit, 0x48644036, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_vmgexit_msr_protocol_enter, 0x2c5fe10b, "_gpl");
SYMBOL_CRC(__traceiter_kvm_vmgexit_msr_protocol_enter, 0x0ca8df68, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_vmgexit_msr_protocol_enter, 0xdd3a26d0, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_vmgexit_msr_protocol_enter, 0xf54e2886, "_gpl");
SYMBOL_CRC(__tracepoint_kvm_vmgexit_msr_protocol_exit, 0x3e25db10, "_gpl");
SYMBOL_CRC(__traceiter_kvm_vmgexit_msr_protocol_exit, 0x25c07225, "_gpl");
SYMBOL_CRC(__SCK__tp_func_kvm_vmgexit_msr_protocol_exit, 0x8f0042c1, "_gpl");
SYMBOL_CRC(__SCT__tp_func_kvm_vmgexit_msr_protocol_exit, 0x0cff45f4, "_gpl");
SYMBOL_CRC(kvm_cpu_has_injectable_intr, 0x4cce875a, "_gpl");
SYMBOL_CRC(kvm_cpu_has_interrupt, 0x17e6b25c, "_gpl");
SYMBOL_CRC(kvm_cpu_get_interrupt, 0xdbd30685, "_gpl");
SYMBOL_CRC(__kvm_apic_update_irr, 0x6243ac82, "_gpl");
SYMBOL_CRC(kvm_apic_update_irr, 0x56cc1ef1, "_gpl");
SYMBOL_CRC(kvm_apic_clear_irr, 0xe79a44cf, "_gpl");
SYMBOL_CRC(kvm_lapic_find_highest_irr, 0xb2d24c54, "_gpl");
SYMBOL_CRC(kvm_apic_update_ppr, 0x1335976a, "_gpl");
SYMBOL_CRC(kvm_apic_match_dest, 0xd3457299, "_gpl");
SYMBOL_CRC(kvm_apic_set_eoi_accelerated, 0x7ce76a3b, "_gpl");
SYMBOL_CRC(kvm_apic_send_ipi, 0x5620d4f5, "_gpl");
SYMBOL_CRC(kvm_lapic_readable_reg_mask, 0x1ca173cd, "_gpl");
SYMBOL_CRC(kvm_wait_lapic_expire, 0xc89c344c, "_gpl");
SYMBOL_CRC(kvm_lapic_expired_hv_timer, 0x5ba68340, "_gpl");
SYMBOL_CRC(kvm_lapic_set_eoi, 0xd1e67326, "_gpl");
SYMBOL_CRC(kvm_apic_write_nodecode, 0x28e92112, "_gpl");
SYMBOL_CRC(kvm_alloc_apic_access_page, 0x49d7d3e5, "_gpl");
SYMBOL_CRC(kvm_apic_has_interrupt, 0x8100c7b2, "_gpl");
SYMBOL_CRC(kvm_set_msi_irq, 0x3eb29c1c, "_gpl");
SYMBOL_CRC(kvm_intr_is_single_vcpu, 0x3efd2d57, "_gpl");
SYMBOL_CRC(kvm_cpu_caps, 0xfec8202a, "_gpl");
SYMBOL_CRC(kvm_update_cpuid_runtime, 0xda34b842, "_gpl");
SYMBOL_CRC(kvm_set_cpu_caps, 0x5d996b31, "_gpl");
SYMBOL_CRC(kvm_find_cpuid_entry_index, 0xc3e957a7, "_gpl");
SYMBOL_CRC(kvm_find_cpuid_entry, 0x3d517b0b, "_gpl");
SYMBOL_CRC(kvm_cpuid, 0xc0af9823, "_gpl");
SYMBOL_CRC(kvm_emulate_cpuid, 0x92d09606, "_gpl");
SYMBOL_CRC(kvm_pmu_cap, 0xd475c188, "_gpl");
SYMBOL_CRC(kvm_pmu_trigger_event, 0xb4600936, "_gpl");
SYMBOL_CRC(kvm_mtrr_get_guest_memory_type, 0x2f4c76a5, "_gpl");
SYMBOL_CRC(kvm_hv_assist_page_enabled, 0x4660d880, "_gpl");
SYMBOL_CRC(kvm_hv_get_assist_page, 0x4130868a, "_gpl");
SYMBOL_CRC(kvm_mmu_free_roots, 0xff29368d, "_gpl");
SYMBOL_CRC(kvm_mmu_free_guest_mode_roots, 0x0845d4d2, "_gpl");
SYMBOL_CRC(kvm_handle_page_fault, 0x8bc36a89, "_gpl");
SYMBOL_CRC(kvm_mmu_new_pgd, 0xbb3f537a, "_gpl");
SYMBOL_CRC(kvm_init_shadow_npt_mmu, 0xa38db094, "_gpl");
SYMBOL_CRC(kvm_init_shadow_ept_mmu, 0x38e7d32f, "_gpl");
SYMBOL_CRC(kvm_init_mmu, 0xb5a6c671, "_gpl");
SYMBOL_CRC(kvm_mmu_reset_context, 0x059b91df, "_gpl");
SYMBOL_CRC(kvm_mmu_page_fault, 0x09d0778e, "_gpl");
SYMBOL_CRC(kvm_mmu_invalidate_addr, 0x9341fc89, "_gpl");
SYMBOL_CRC(kvm_mmu_invlpg, 0xc437572a, "_gpl");
SYMBOL_CRC(kvm_configure_mmu, 0x06cdc8d1, "_gpl");
SYMBOL_CRC(kvm_page_track_register_notifier, 0x3361f6b7, "_gpl");
SYMBOL_CRC(kvm_page_track_unregister_notifier, 0x2b3951b9, "_gpl");
SYMBOL_CRC(kvm_write_track_add_gfn, 0xef1739ed, "_gpl");
SYMBOL_CRC(kvm_write_track_remove_gfn, 0x39b57f5f, "_gpl");
SYMBOL_CRC(enable_mmio_caching, 0xfab33e4c, "_gpl");
SYMBOL_CRC(kvm_mmu_set_mmio_spte_mask, 0x6ada8f59, "_gpl");
SYMBOL_CRC(kvm_mmu_set_me_spte_mask, 0xbd9d6dfc, "_gpl");
SYMBOL_CRC(kvm_mmu_set_ept_masks, 0x5bf7cde0, "_gpl");
SYMBOL_CRC(hv_flush_remote_tlbs_range, 0x67a756b3, "_gpl");
SYMBOL_CRC(hv_flush_remote_tlbs, 0xac13ef58, "_gpl");
SYMBOL_CRC(hv_track_root_tdp, 0x5db3e786, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4d9b652b, "rb_erase" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x4f56dafb, "fpu_free_guest_fpstate" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x403886e4, "mmu_notifier_unregister" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x995d1071, "prof_on" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0xbee74cb9, "xfer_to_guest_mode_handle_work" },
	{ 0xf90f01e7, "cleanup_srcu_struct" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x492b44c4, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x77f24400, "perf_register_guest_info_callbacks" },
	{ 0xeee667d3, "fpregs_assert_state_consistent" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x1475d603, "xstate_get_guest_group_perm" },
	{ 0xd298d9e3, "bpf_trace_run1" },
	{ 0x38ea9765, "intel_pt_validate_hw_cap" },
	{ 0x733fdb47, "bpf_trace_run9" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x7b64d81, "hyperv_stop_tsc_emulation" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x3fe35aea, "irq_bypass_unregister_consumer" },
	{ 0xfb578fc5, "memset" },
	{ 0xdad13544, "ptrs_per_p4d" },
	{ 0x41ed3cec, "eventfd_ctx_remove_wait_queue" },
	{ 0xc95ccf37, "synchronize_srcu_expedited" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x110a6348, "misc_register" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xb9c425de, "register_syscore_ops" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xf871dd20, "follow_pte" },
	{ 0x4248ae3c, "single_task_running" },
	{ 0x6214aef2, "cpufreq_unregister_notifier" },
	{ 0x85329672, "fpu_swap_kvm_fpstate" },
	{ 0x56398615, "mark_tsc_unstable" },
	{ 0x365bf8fe, "simple_attr_read" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x6d16c104, "mutex_lock_killable" },
	{ 0x668b19a1, "down_read" },
	{ 0x2a2f0525, "__mmdrop" },
	{ 0xa0ebc08, "__xa_cmpxchg" },
	{ 0xcf78ec68, "fpu_copy_uabi_to_guest_fpstate" },
	{ 0x7fe32873, "rb_replace_node" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x7c46233a, "cpufreq_quick_get" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbb13595e, "smp_call_function_many" },
	{ 0x68a12ab8, "rep_movs_alternative" },
	{ 0x58dbad9, "kthread_create_on_node" },
	{ 0xaa6a50f9, "__static_key_deferred_flush" },
	{ 0x745a981, "xa_erase" },
	{ 0x9df5be73, "pv_ops" },
	{ 0x6e68d5f9, "bpf_trace_run3" },
	{ 0x16d2cf64, "__mmap_lock_do_trace_start_locking" },
	{ 0x3a47615b, "seq_read" },
	{ 0xb4b97c90, "pvclock_gtod_register_notifier" },
	{ 0x715f2a16, "trace_print_flags_seq" },
	{ 0xd48cfa26, "perf_event_enable" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x29ad8e33, "x86_hyper_type" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x4790ad58, "irq_work_sync" },
	{ 0x44aaf30f, "tsc_khz" },
	{ 0x5a6d322, "debugfs_create_file" },
	{ 0x999e8297, "vfree" },
	{ 0x18ebdcc4, "trace_event_buffer_reserve" },
	{ 0xe2a15834, "mmput" },
	{ 0xc683da81, "set_memory_decrypted" },
	{ 0x38fa11e5, "kthread_destroy_worker" },
	{ 0x57861a5c, "gds_ucode_mitigated" },
	{ 0x3a099605, "__get_user_nocheck_4" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xe138fb8c, "percpu_counter_add_batch" },
	{ 0xb89e69b1, "jump_label_update_timeout" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x265b6e29, "hyperv_flush_guest_mapping_range" },
	{ 0x425d0c6, "param_ops_bool" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x329de597, "cpu_info" },
	{ 0xe8035b40, "get_user_pages_fast_only" },
	{ 0xe0e6ef02, "perf_get_x86_pmu_capability" },
	{ 0x34db62bd, "fpu_enable_guest_xfd_features" },
	{ 0x5d48153c, "get_user_pages_unlocked" },
	{ 0x8fa25c24, "xa_find" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x8ff7b0e9, "alloc_pages" },
	{ 0x9e4532c3, "__tracepoint_mmap_lock_start_locking" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xdf8c695a, "__ndelay" },
	{ 0xed10cc18, "__folio_put" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x65d9e877, "cpufreq_register_notifier" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x50b03f5d, "l1tf_vmx_mitigation" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x326847e6, "seq_printf" },
	{ 0x29332499, "__x86_indirect_thunk_rsi" },
	{ 0x6adec718, "__mmap_lock_do_trace_released" },
	{ 0xde6d7c56, "dput" },
	{ 0x5b3e282f, "xa_store" },
	{ 0x550ce709, "pat_enabled" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x46030074, "__hrtimer_get_remaining" },
	{ 0x8d6aff89, "__put_user_nocheck_4" },
	{ 0x7452adff, "user_return_notifier_register" },
	{ 0x755abc1, "__srcu_read_unlock" },
	{ 0x32bc0fcf, "preempt_notifier_dec" },
	{ 0x5452141e, "mmu_notifier_register" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x5f2da8c4, "check_tsc_unstable" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x888c5be5, "irq_bypass_register_consumer" },
	{ 0x7a1602a1, "boot_cpu_data" },
	{ 0x40f76a86, "__vcalloc" },
	{ 0x2df70d71, "rcuwait_wake_up" },
	{ 0x72396ded, "single_release" },
	{ 0xdab5a1eb, "interval_tree_insert" },
	{ 0x7b888c9b, "pid_vnr" },
	{ 0x5ff4a4ef, "cpufreq_cpu_get" },
	{ 0x53d9ed37, "preempt_notifier_unregister" },
	{ 0x947b40c6, "cpu_smt_possible" },
	{ 0x73d9f31d, "fpu_alloc_guest_fpstate" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x1715ba35, "kmalloc_trace" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xd6df01f7, "perf_get_hw_event_config" },
	{ 0xef8fc95f, "kvm_async_pf_task_wait_schedule" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xd87e4da6, "perf_event_release_kernel" },
	{ 0x754d539c, "strlen" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0x5318a5d8, "bpf_trace_run7" },
	{ 0xba6b4d18, "get_task_pid" },
	{ 0xf1038897, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xf5878cc7, "fpstate_clear_xstate_component" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x64fcd28c, "single_open" },
	{ 0xe83eba32, "itlb_multihit_kvm_mitigation" },
	{ 0xe911df29, "eventfd_ctx_do_read" },
	{ 0x5ec14c83, "__static_call_update" },
	{ 0xbc986a79, "debugfs_create_dir" },
	{ 0x879afb89, "generic_file_llseek" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x5f18a6, "add_wait_queue_priority" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x8b3494ff, "trace_handle_return" },
	{ 0x53b954a2, "up_read" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x134f0478, "put_pid" },
	{ 0x363a70e8, "__cpuhp_remove_state" },
	{ 0x9b53e14, "interval_tree_remove" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x3466ce63, "x86_msi_msg_get_destid" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x49310e24, "eventfd_ctx_fileget" },
	{ 0x7f4a6d0c, "kmalloc_caches" },
	{ 0xfb48ad75, "kmem_cache_destroy" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4e8f828, "mtree_load" },
	{ 0x9714e0bb, "ktime_get_raw" },
	{ 0xdfc84f28, "vma_kernel_pagesize" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xb3456c47, "yield_to" },
	{ 0x6a5fa363, "sigprocmask" },
	{ 0x196614ce, "hw_breakpoint_restore" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0xd5f3bb7b, "set_memory_encrypted" },
	{ 0xe914e41e, "strcpy" },
	{ 0x5bec0755, "shrinker_alloc" },
	{ 0x721999b0, "simple_attr_write" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0xb891d4df, "anon_inode_getfile" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3b7a7163, "__static_call_return0" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x2130b91f, "kthread_create_worker" },
	{ 0x78368f8a, "misc_deregister" },
	{ 0x79f209e, "simple_attr_open" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x46248e7f, "kthread_flush_work" },
	{ 0x6988d0ca, "cpu_dr7" },
	{ 0xcea381dd, "x86_match_cpu" },
	{ 0xb282d1f2, "bpf_trace_run4" },
	{ 0x20978fb9, "idr_find" },
	{ 0x705736e6, "param_ops_uint" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x67955ce6, "profile_hits" },
	{ 0x916aefbe, "__percpu_counter_init_many" },
	{ 0xdf2c2742, "rb_last" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2c834418, "static_key_slow_inc" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9241b358, "__static_key_slow_dec_deferred" },
	{ 0x63f835ba, "on_each_cpu_cond_mask" },
	{ 0xc863060b, "vmalloc_to_page" },
	{ 0x139bbfe3, "trace_seq_printf" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x9a2032f0, "trace_raw_output_prep" },
	{ 0xb771851c, "perf_event_create_kernel_counter" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xf5e4d01a, "cgroup_attach_task_all" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x76ffdf56, "param_get_bool" },
	{ 0xc51e802c, "bpf_trace_run6" },
	{ 0xca9360b5, "rb_next" },
	{ 0x5b56860c, "vm_munmap" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xd87537a2, "__mod_lruvec_page_state" },
	{ 0xda1e3086, "__trace_trigger_soft_disabled" },
	{ 0x93813a00, "get_pid_task" },
	{ 0xc03b3c29, "fpu_copy_guest_fpstate_to_uabi" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x1e8b96e5, "trace_event_printf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xf7370f56, "system_state" },
	{ 0xbe081836, "__mmap_lock_do_trace_acquire_returned" },
	{ 0x466c14a7, "__delay" },
	{ 0x1057a279, "bsearch" },
	{ 0xfce3451, "fget" },
	{ 0xed3e492d, "__put_task_struct" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0xce4cd04e, "set_user_nice" },
	{ 0x46a6c9ef, "hv_get_tsc_page" },
	{ 0x7aff77a3, "__cpu_present_mask" },
	{ 0x3ba01b47, "get_compat_sigset" },
	{ 0xcd81a945, "switch_fpu_return" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x301304c2, "__get_user_nocheck_8" },
	{ 0x9dab5dbb, "irq_work_queue" },
	{ 0xe1aa2d62, "set_hv_tscchange_cb" },
	{ 0xdb2e4f7d, "percpu_counter_destroy_many" },
	{ 0x8e9ea60c, "param_set_uint" },
	{ 0x309609d7, "fd_install" },
	{ 0x5820b1f4, "trace_event_raw_init" },
	{ 0x90576ec4, "vmemdup_user" },
	{ 0xe6570985, "trace_print_symbols_seq" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfa1eb910, "unregister_syscore_ops" },
	{ 0xbf2e2e71, "housekeeping_enabled" },
	{ 0x72d79d83, "pgdir_shift" },
	{ 0x9a71a534, "smp_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0x6aeea1f, "perf_event_pause" },
	{ 0xae04012c, "__vmalloc" },
	{ 0xe23b37f, "alloc_cpumask_var_node" },
	{ 0x3edcd9f8, "perf_event_period" },
	{ 0x73cb55c7, "pcpu_hot" },
	{ 0xb554b1cb, "seq_lseek" },
	{ 0xf95322f4, "kthread_parkme" },
	{ 0xe66b966d, "vm_mmap" },
	{ 0x512e219e, "__put_devmap_managed_page_refs" },
	{ 0x7fd13c82, "send_sig_mceerr" },
	{ 0x26cda94f, "e820__mapped_raw_any" },
	{ 0x9a6a5539, "bpf_trace_run2" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x7e78b120, "__tracepoint_mmap_lock_acquire_returned" },
	{ 0xd5a61a34, "synchronize_srcu" },
	{ 0x1cbd92b0, "cpu_mitigations_off" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x1328a5a6, "__module_get" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0x394c2df3, "kmem_cache_create" },
	{ 0x90299467, "bpf_trace_run8" },
	{ 0x4d924f20, "memremap" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8a705219, "kthread_park" },
	{ 0x273e1002, "fpu_sync_guest_vmexit_xfd_state" },
	{ 0xe452c685, "__tracepoint_mmap_lock_released" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x4bdd7562, "trace_print_hex_seq" },
	{ 0x4868922d, "cpufreq_cpu_put" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xf7c12ddf, "perf_event_read_value" },
	{ 0xa44a1307, "interval_tree_iter_first" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0x513d9edc, "get_user_pages_remote" },
	{ 0x2f4880df, "static_key_slow_dec" },
	{ 0x9a1be522, "wake_up_process" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0xdedb0879, "shrinker_free" },
	{ 0x1c18a537, "trace_event_buffer_commit" },
	{ 0xc575719, "__cond_resched_rwlock_write" },
	{ 0xdf2ebb87, "_raw_read_unlock_irqrestore" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x238f1841, "anon_inode_getfd" },
	{ 0x882bd96b, "param_get_uint" },
	{ 0x6bbd8324, "perf_unregister_guest_info_callbacks" },
	{ 0xa40ca469, "get_user_pages" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xf82ec573, "rb_prev" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x793ac193, "__SCT__tp_func_ipi_send_cpu" },
	{ 0x82a26ca3, "shrinker_register" },
	{ 0xbd71b658, "kthread_queue_work" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x47d8d301, "__cond_resched_rwlock_read" },
	{ 0x618911fc, "numa_node" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xb1342cdb, "_raw_read_lock_irqsave" },
	{ 0xb05225cc, "kmem_cache_alloc" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x85efc7e0, "zero_pfn" },
	{ 0xa01a22c, "__tracepoint_ipi_send_cpu" },
	{ 0xc6cbbc89, "capable" },
	{ 0x5523d4bb, "find_vma" },
	{ 0x472c6645, "module_put" },
	{ 0xda1f78ee, "clear_hv_tscchange_cb" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x72730a28, "kthread_unpark" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0xcfe59cb, "hyperv_fill_flush_guest_mapping_list" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xa2977d74, "param_ops_bint" },
	{ 0xc5c1c3f1, "debugfs_lookup" },
	{ 0xdb80809b, "mark_page_accessed" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x5b8cd5d, "kobject_uevent_env" },
	{ 0x2e2df7f4, "irq_remapping_cap" },
	{ 0x5ff7f38e, "fpu_update_guest_xfd" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x8fca0669, "init_srcu_struct" },
	{ 0xf228a7f, "perf_trace_run_bpf_submit" },
	{ 0x4688d7ec, "pvclock_gtod_unregister_notifier" },
	{ 0x75ad7d47, "fput" },
	{ 0x57bc19d2, "down_write" },
	{ 0xe7232e0f, "user_return_notifier_unregister" },
	{ 0xce807a25, "up_write" },
	{ 0xb7c0f443, "sort" },
	{ 0x353cfc6a, "__cpuhp_setup_state" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x1d19f77b, "physical_mask" },
	{ 0x402cbbf, "preempt_notifier_inc" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xd195c2ea, "simple_attr_release" },
	{ 0xb22246f9, "kmem_cache_create_usercopy" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0xc9a4b416, "copy_to_user_nofault" },
	{ 0xfcadfcea, "__srcu_read_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8688f7c4, "dentry_path_raw" },
	{ 0x65e86251, "task_cputime_adjusted" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0xa43c36a7, "noop_llseek" },
	{ 0xd96babb4, "interval_tree_iter_next" },
	{ 0xf8fe3986, "pat_pfn_immune_to_uc_mtrr" },
	{ 0x448fde5e, "bpf_trace_run5" },
	{ 0x98f4d306, "hyperv_flush_guest_mapping" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0xa94a09bb, "mem_section" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x554cfc55, "kmem_cache_free" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x6aa6ee44, "fixup_user_fault" },
	{ 0x4ffe5957, "debugfs_remove" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x9b8da3e9, "preempt_notifier_register" },
	{ 0xfa6cb9bf, "finish_rcuwait" },
	{ 0xb8d543f1, "__SCK__tp_func_ipi_send_cpu" },
	{ 0x4c874481, "trace_event_reg" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x883e890, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2D6C273A0E35939DB6D36A9");
