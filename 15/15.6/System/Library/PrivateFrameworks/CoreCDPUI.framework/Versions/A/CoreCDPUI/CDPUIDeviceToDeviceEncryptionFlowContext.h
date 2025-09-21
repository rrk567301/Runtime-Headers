@class NSString, NSImage, CDPContext, CDPLocalSecret, NSWindow;

@interface CDPUIDeviceToDeviceEncryptionFlowContext : NSObject

@property (readonly, nonatomic) CDPContext *cdpContext;
@property (retain, nonatomic) CDPContext *repairContext;
@property (weak) NSWindow *hostWindow;
@property (retain) NSImage *displayImage;
@property (nonatomic) long long deviceToDeviceEncryptionUpgradeUIStyle;
@property (nonatomic) long long deviceToDeviceEncryptionUpgradeType;
@property (copy, nonatomic) NSString *securityUpgradeContext;
@property (copy, nonatomic) NSString *featureName;
@property (readonly, copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) CDPLocalSecret *cachedLocalSecret;
@property (nonatomic) char forceInlinePresentation;
@property (nonatomic) char requiresSynchronousRepair;
@property (nonatomic) char shouldSuppressPasscodeCreationCancelPrompt;
@property (nonatomic) char isDemoDevice;
@property (copy, nonatomic) NSString *telemetryFlowID;

- (void).cxx_destruct;
- (id)initWithAltDSID:(id)a0;
- (id)initWithCDPContext:(id)a0;

@end
