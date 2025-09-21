@class NSDictionary, NSArray;

@interface STConversationContext : NSObject

@property char allowedByScreenTime;
@property (copy) NSDictionary *allowedByContactsHandle;
@property char applicationCurrentlyLimited;
@property char shouldBeAllowedByScreenTimeWhenLimited;
@property char shouldBeAllowedDuringGeneralScreenTime;
@property (copy) NSDictionary *contactsByHandle;
@property (copy) NSArray *whitelistedHandles;
@property unsigned long long currentApplicationState;
@property char emergencyModeEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)updateForThirdPartyApplicationState:(long long)a0;
- (void)updateShouldBeAllowedDuringGeneralScreenTime:(char)a0 shouldBeAllowedByScreenTimeWhenLimited:(char)a1 currentApplicationState:(unsigned long long)a2 emergencyModeEnabled:(char)a3;

@end
