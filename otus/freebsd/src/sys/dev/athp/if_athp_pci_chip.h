#ifndef	__IF_ATHP_PCI_CHIP_H__
#define	__IF_ATHP_PCI_CHIP_H__

/* PCI power control bits; for register accesses */
extern	int ath10k_pci_wake(struct athp_pci_softc *psc);
extern	void ath10k_pci_sleep(struct athp_pci_softc *psc);

extern	int ath10k_pci_irq_disable(struct athp_pci_softc *psc);
extern	int ath10k_pci_init_irq(struct athp_pci_softc *psc);
extern	int ath10k_pci_chip_reset(struct athp_pci_softc *psc);

extern	bool ath10k_pci_chip_is_supported(uint32_t dev_id,
	    uint32_t chip_id);

#endif	/* __IF_ATHP_PCI_CHIP_H__ */