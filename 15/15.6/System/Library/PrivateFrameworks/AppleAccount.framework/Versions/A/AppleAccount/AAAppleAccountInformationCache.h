@class NSString;

@interface AAAppleAccountInformationCache : NSObject

@property (readonly, nonatomic) long long primaryAccountSignInState;
@property (readonly) char isSignedIn;
@property (readonly, nonatomic) NSString *accountFullName;
@property (readonly, nonatomic) NSString *profilePictureCacheURL;

- (id)init;
- (void)setFullName:(id)a0;
- (long long)_fetchPrimaryAccountSignInState;
- (char)_needsMigration;
- (void)_deleteProfilePictureCache;
- (id)_getProfilePictureCacheURL;
- (void)_setSignedInState:(long long)a0;
- (void)clearNonSecureAAPrefsDomain;
- (void)migrateToPrimaryAccountSignInState;
- (void)resetAccountInfoToSignedOutState;
- (void)updateAccountInformationCacheForAppleAccount:(id)a0;

@end
