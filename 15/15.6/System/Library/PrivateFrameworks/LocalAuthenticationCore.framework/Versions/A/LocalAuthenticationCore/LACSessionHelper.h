@interface LACSessionHelper : NSObject

+ (id)currentSession;

- (long long)authenticationRequirementsForMechanismEvent:(long long)a0;
- (long long)authenticationRequirementsForUIController:(long long)a0;
- (char)canCurrentSessionSatisfyAuthenticationRequirements:(long long)a0 error:(id *)a1;
- (id)_canCurrentSessionPresentUiWithSessionDict:(id)a0 physicalPresenceRequired:(char)a1;
- (id)_canCurrentSessionSatisfyAuthenticationRequirements:(long long)a0;
- (id)_currentSessionDictionary;
- (char)_isScreenWatcherPresent;

@end
