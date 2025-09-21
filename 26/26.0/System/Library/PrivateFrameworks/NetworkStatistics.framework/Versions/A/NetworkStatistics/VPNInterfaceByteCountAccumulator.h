@interface VPNInterfaceByteCountAccumulator : NSObject {
    struct accumulator_bytes { unsigned long long rxCellularBytes; unsigned long long rxWiFiInfraBytes; unsigned long long rxWiFiNonInfraBytes; unsigned long long rxWiredBytes; unsigned long long rxCompanionLinkBluetoothBytes; unsigned long long rxAlternateBytes; unsigned long long txCellularBytes; unsigned long long txWiFiInfraBytes; unsigned long long txWiFiNonInfraBytes; unsigned long long txWiredBytes; unsigned long long txCompanionLinkBluetoothBytes; unsigned long long txAlternateBytes; } _currentVPNInterfaceByteCounts;
}

- (id)init;
- (void)addBytesToAttributeToVPNProviderFromSnapshot:(id)a0;
- (void)subtractBytesAttributedToVPNProviderFromSnapshot:(id)a0;

@end
