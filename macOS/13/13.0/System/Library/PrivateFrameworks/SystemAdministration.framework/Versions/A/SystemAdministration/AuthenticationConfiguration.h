@class NSObject, NSString, AdminAuthenticator, NSMutableArray, SFAuthorization;
@protocol OS_dispatch_queue;

@interface AuthenticationConfiguration : NSObject {
    NSMutableArray *_authStrings;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) AdminAuthenticator *authenticator;
@property SFAuthorization *authorization;
@property (copy) NSString *nameOverride;
@property (copy) NSString *subtitleOverride;
@property (copy) NSString *iconPathOverride;

+ (id)shared;
+ (id)createSharedConfiguration:(id)a0 authorizationStrings:(id)a1;
+ (void)destroyCredentials;

- (id)initWithAuthenticator:(id)a0 authorizationStrings:(id)a1;
- (id)authorizationStrings;
- (void)addAuthorizationString:(id)a0;
- (void)removeAuthorizationString:(id)a0;
- (void)authenticateWithCompletion:(id /* block */)a0;

@end
