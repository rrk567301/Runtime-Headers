@class NSString, NSImage, CDPLocalSecret, NSWindow;

@interface CDPUIDeviceToDeviceEncryptionFlowContext : NSObject

@property (weak) NSWindow *hostWindow;
@property (retain) NSImage *displayImage;
@property (nonatomic) long long deviceToDeviceEncryptionUpgradeUIStyle;
@property (nonatomic) long long deviceToDeviceEncryptionUpgradeType;
@property (copy, nonatomic) NSString *securityUpgradeContext;
@property (copy, nonatomic) NSString *featureName;
@property (readonly, copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) CDPLocalSecret *cachedLocalSecret;
@property (nonatomic) BOOL forceInlinePresentation;

- (void).cxx_destruct;
- (id)initWithAltDSID:(id)a0;

@end
