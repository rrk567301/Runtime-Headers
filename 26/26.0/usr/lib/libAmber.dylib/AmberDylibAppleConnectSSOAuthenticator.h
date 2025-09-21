@class NSError, NSString;

@interface AmberDylibAppleConnectSSOAuthenticator : NSObject <ASAuthorizationControllerDelegate>

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSString *token;
@property BOOL done;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
