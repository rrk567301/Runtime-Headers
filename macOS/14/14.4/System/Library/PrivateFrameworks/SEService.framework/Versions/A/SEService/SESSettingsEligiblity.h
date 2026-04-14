@interface SESSettingsEligiblity : NSObject

+ (BOOL)isContactlessTCCServiceEligible;
+ (BOOL)isApplicationInstalledOrPlaceholder:(id)a0;
+ (BOOL)isDefaultContactlessAppConfigurationEligible;
+ (BOOL)isSecureElementTCCServiceEligible;
+ (BOOL)shouldShowLimitedContactlessPane;

@end
