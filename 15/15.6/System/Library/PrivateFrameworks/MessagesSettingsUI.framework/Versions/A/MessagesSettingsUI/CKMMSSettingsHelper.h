@interface CKMMSSettingsHelper : NSObject

+ (char)mmsDefaultEnabledForPhoneNumber:(id)a0 simID:(id)a1;

- (id)isMMSEnabled;
- (id)getMMSDictionary;
- (void)setMMSEnabled:(char)a0;
- (id)willSendGroupMMS;

@end
