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
@property (nonatomic) BOOL forceInlinePresentation;
@property (nonatomic) BOOL requiresSynchronousRepair;
@property (nonatomic) BOOL shouldSuppressPasscodeCreationCancelPrompt;
@property (nonatomic) BOOL isDemoDevice;
@property (copy, nonatomic) NSString *telemetryFlowID;

- (id)initWithAltDSID:(id)a0;
- (void).cxx_destruct;
- (id)initWithCDPContext:(id)a0;

@end
