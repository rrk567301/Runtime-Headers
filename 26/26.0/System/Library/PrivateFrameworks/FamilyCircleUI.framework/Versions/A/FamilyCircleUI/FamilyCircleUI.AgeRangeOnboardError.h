@class NSError;

@interface FamilyCircleUI.AgeRangeOnboardError : NSObject

@property (class, nonatomic, readonly) NSError *notNow;
@property (class, nonatomic, readonly) NSError *updateBirthday;
@property (class, nonatomic, readonly) NSError *neverShare;
@property (class, nonatomic, readonly) NSError *missingAccount;
@property (class, nonatomic, readonly) NSError *incorrectScreenTimePasscode;
@property (class, nonatomic, readonly) NSError *invalidEntitlement;
@property (class, nonatomic, readonly) NSError *notInForeground;
@property (class, nonatomic, readonly) NSError *missingXPCMetadata;

- (id)init;
- (void).cxx_destruct;

@end
