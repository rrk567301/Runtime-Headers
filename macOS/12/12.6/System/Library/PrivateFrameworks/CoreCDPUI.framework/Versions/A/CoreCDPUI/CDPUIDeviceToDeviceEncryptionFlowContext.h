@class NSString, CDPContext, NSImage, CDPLocalSecret, NSWindow;

@interface CDPUIDeviceToDeviceEncryptionFlowContext : NSObject

@property (copy, nonatomic) NSString *altDSID;
@property (retain, nonatomic) CDPContext *repairContext;
@property (weak) NSWindow *hostWindow;
@property (retain) NSImage *displayImage;
@property (nonatomic) long long deviceToDeviceEncryptionUpgradeUIStyle;
@property (nonatomic) long long deviceToDeviceEncryptionUpgradeType;
@property (copy, nonatomic) NSString *securityUpgradeContext;
@property (copy, nonatomic) NSString *featureName;
@property (copy, nonatomic) CDPLocalSecret *cachedLocalSecret;
@property (nonatomic) BOOL forceInlinePresentation;
@property (nonatomic) BOOL requiresSynchronousRepair;

- (void).cxx_destruct;
- (id)initWithAltDSID:(id)a0;

@end
