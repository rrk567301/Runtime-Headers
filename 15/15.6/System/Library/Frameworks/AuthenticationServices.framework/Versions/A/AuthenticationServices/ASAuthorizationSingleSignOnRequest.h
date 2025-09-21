@class NSArray;

@interface ASAuthorizationSingleSignOnRequest : ASAuthorizationOpenIDRequest {
    NSArray *_authorizationOptions;
    char _userInterfaceEnabled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _internalLock;
}

@property (copy, nonatomic) NSArray *authorizationOptions;
@property (nonatomic, getter=isUserInterfaceEnabled) char userInterfaceEnabled;

- (void).cxx_destruct;
- (id)initWithProvider:(id)a0;
- (char)supportsStyle:(long long)a0;

@end
