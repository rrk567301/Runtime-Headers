@class SUSharedPrefs;

@interface SUOSULoginCredentialPolicyManager : NSObject

@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property unsigned long long currentLoginCredentialPolicyMode;
@property double intervalForRequiringCredentials;
@property (retain, nonatomic) SUSharedPrefs *sharedPrefs;

- (void).cxx_destruct;
- (unsigned long long)getCurrentLoginCredentialPolicy;
- (BOOL)_allowedToRequireCredentials;
- (void)_changeCurrentPolicyMode:(unsigned long long)a0 withReason:(id)a1;
- (id)_stringForPolicyMode:(unsigned long long)a0;
- (BOOL)_willAutoInstallProduct:(id)a0;
- (void)credentialsHarvested;
- (id)initWithSharedPrefs:(id)a0 intervalForRequiringCredentials:(double)a1;
- (void)recommendedUpdatesDidChange;
- (void)updatePolicyForDownloadedAndPreparedProduct:(id)a0;
- (void)updatePolicyForInstallTonightWithProduct:(id)a0;

@end
