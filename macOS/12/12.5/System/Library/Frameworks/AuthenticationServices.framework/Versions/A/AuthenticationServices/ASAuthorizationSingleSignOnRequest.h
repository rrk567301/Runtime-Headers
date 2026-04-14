@class NSArray;

@interface ASAuthorizationSingleSignOnRequest : ASAuthorizationOpenIDRequest

@property (copy, nonatomic) NSArray *authorizationOptions;
@property (nonatomic, getter=isUserInterfaceEnabled) BOOL userInterfaceEnabled;

- (void).cxx_destruct;
- (id)initWithProvider:(id)a0;

@end
