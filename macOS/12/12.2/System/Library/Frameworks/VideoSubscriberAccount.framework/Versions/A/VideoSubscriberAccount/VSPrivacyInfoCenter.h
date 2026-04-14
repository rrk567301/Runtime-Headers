@interface VSPrivacyInfoCenter : NSObject

@property (nonatomic) int registrationToken;
@property (nonatomic) long long accountAccessStatus;

+ (id)sharedPrivacyInfoCenter;

- (void)dealloc;
- (id)init;
- (void)updateAccountAccessStatusWithResponse:(id)a0;
- (id)updateAccountAccessStatusWithError:(id)a0;
- (void)_invalidateAccountAccessStatus;

@end
