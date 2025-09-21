@interface IMCTRCSUtilities : NSObject

+ (char)IMCarrierRequiresFirstTimeOnAlert;
+ (char)IMRCSEnabledForPhoneNumber:(id)a0 simID:(id)a1;
+ (long long)IMRCSGroupMessagingMaxGroupSizeForPhoneNumber:(id)a0 simID:(id)a1;
+ (char)IMRCSSupportedForPhoneNumber:(id)a0 simID:(id)a1;
+ (char)IMCarrierRequiresFirstTimeOnAlertForPhoneNumber:(id)a0 simID:(id)a1;
+ (char)IMRCSGroupMessagingEnabledForPhoneNumber:(id)a0 simID:(id)a1;
+ (char)IMRCSGroupTextReplicationSupportedForPhoneNumber:(id)a0 simID:(id)a1;

- (id)init;

@end
