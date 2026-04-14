@class NSString;

@interface AAAppleAccountInformationCache : NSObject

@property (readonly, nonatomic) long long primaryAccountSignInState;
@property (readonly) BOOL isSignedIn;
@property (readonly, nonatomic) NSString *accountFullName;
@property (readonly, nonatomic) NSString *profilePictureCacheURL;

- (void)setFullName:(id)a0;
- (id)init;
- (long long)_fetchPrimaryAccountSignInState;
- (BOOL)_needsMigration;
- (void)_deleteProfilePictureCache;
- (id)_getProfilePictureCacheURL;
- (void)_setSignedInState:(long long)a0;
- (void)clearNonSecureAAPrefsDomain;
- (void)migrateToPrimaryAccountSignInState;
- (void)resetAccountInfoToSignedOutState;
- (void)updateAccountInformationCacheForAppleAccount:(id)a0;

@end
