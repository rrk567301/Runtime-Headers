@interface AppleIRCommand : IRCommand

@property (readonly, nonatomic) unsigned short vendorID;
@property (readonly, nonatomic) unsigned char deviceUID;
@property (readonly, nonatomic) unsigned char commandPage;
@property (readonly, nonatomic) unsigned char commandID;
@property (readonly, nonatomic) unsigned short token;
@property (readonly, nonatomic) unsigned long long command;
@property (readonly, nonatomic) char isA39PlayPauseSelect;
@property (readonly, nonatomic) char isB39PlayPauseOrSelect;
@property (readonly, nonatomic) char isB39Command;
@property (readonly, nonatomic) char isStackshotRequest;
@property (readonly, nonatomic) char isPairingRequest;
@property (readonly, nonatomic) char isUnpairingRequest;
@property (readonly, nonatomic) char isBTLEDiscoveryModeRequest;

+ (char)matchNECVendorID:(unsigned short)a0;

- (id)description;
- (unsigned long long)command;
- (char)getVendorSpecificHIDUsagePage:(unsigned int *)a0 usageID:(unsigned int *)a1 ignoreRepeats:(char *)a2;
- (id)initWithPayload:(unsigned long long)a0 repeat:(char)a1;
- (char)isA39PlayPauseSelect;
- (char)isB39Command;
- (char)isB39PlayPauseOrSelect;
- (char)isBTLEDiscoveryModeRequest;
- (char)isPairingRequest;
- (char)isStackshotRequest;
- (char)isUnpairingRequest;

@end
