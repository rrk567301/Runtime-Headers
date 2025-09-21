@class SFDevice;

@interface DMTSharingDevice : CATSharingDevice

@property (readonly, nonatomic) SFDevice *sharingDevice;

+ (char)deviceIsPairedAccordingToFlags:(unsigned int)a0;
+ (unsigned long long)devicePairingStateFromSFPairState:(unsigned int)a0;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (id)underlyingDevice;

@end
