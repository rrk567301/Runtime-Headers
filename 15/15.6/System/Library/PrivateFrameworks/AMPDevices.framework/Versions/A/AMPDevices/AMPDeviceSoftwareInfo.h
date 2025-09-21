@class NSString;

@interface AMPDeviceSoftwareInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *softwareVersion;
@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSString *statusMessage;
@property (retain, nonatomic) NSString *disabledMessage;
@property (retain, nonatomic) NSString *updateCaptionMessage;
@property (nonatomic) char updateCaptionEnabled;
@property (retain, nonatomic) NSString *updateButtonTitle;
@property (nonatomic) char hasCheckForUpdates;
@property (nonatomic) char updateButtonEnabled;
@property (retain, nonatomic) NSString *restoreCaptionMessage;
@property (nonatomic) char restoreCaptionEnabled;
@property (retain, nonatomic) NSString *restoreButtonTitle;
@property (nonatomic) char restoreButtonEnabled;
@property (retain, nonatomic) NSString *recoveryModeTitle;
@property (retain, nonatomic) NSString *ejectButtonTitle;
@property (nonatomic) char softwareUpdateRestoreInProgress;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
