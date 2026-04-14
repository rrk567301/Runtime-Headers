@class NSImage, NSWindow, NSString;

@interface CDPUIDeviceToDeviceEncryptionFlowContext : NSObject

@property (weak) NSWindow *hostWindow;
@property (retain) NSImage *displayImage;
@property (nonatomic) long long deviceToDeviceEncryptionUpgradeUIStyle;
@property (nonatomic) long long deviceToDeviceEncryptionUpgradeType;
@property (copy, nonatomic) NSString *securityUpgradeContext;
@property (copy, nonatomic) NSString *featureName;
@property (readonly, copy, nonatomic) NSString *altDSID;

- (void).cxx_destruct;
- (id)initWithAltDSID:(id)a0;

@end
