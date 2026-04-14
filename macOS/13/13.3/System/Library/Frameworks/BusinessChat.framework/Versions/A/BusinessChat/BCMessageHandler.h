@class NSString, BCApplePayManager, BCInternalAuthenticationManager, BCAuthenticationManager, BCMessage;
@protocol BCMessageHandlerDelegate;

@interface BCMessageHandler : NSObject <BCApplePayManagerDelegate, BCAuthenticationViewControllerDelegate>

@property (retain, nonatomic) BCAuthenticationManager *authManager;
@property (retain, nonatomic) BCInternalAuthenticationManager *internalAuthManager;
@property (retain, nonatomic) BCApplePayManager *applePayManager;
@property (retain, nonatomic) BCMessage *message;
@property (retain, nonatomic) NSString *recipientID;
@property (weak, nonatomic) id<BCMessageHandlerDelegate> delegate;

+ (id)appIcon;
+ (id)appIconForWindow:(id)a0;

- (void).cxx_destruct;
- (id)presentationProperties;
- (void)handleActionWithWindow:(id)a0;
- (id)initWithMessage:(id)a0 andDelegate:(id)a1;
- (id)initWithMessage:(id)a0 recipientID:(id)a1 andDelegate:(id)a2;
- (void)initializeManagers;
- (void)paymentRequestDidUpdate:(id)a0;
- (void)performAuthenticationWithWindow:(id)a0;
- (void)performInternalAuthentication;
- (BOOL)recipientIsAllowedForInternalAuthentication;
- (void)sendAuthenticationMessage:(id)a0;
- (void)showHandoffAlert:(id)a0;

@end
