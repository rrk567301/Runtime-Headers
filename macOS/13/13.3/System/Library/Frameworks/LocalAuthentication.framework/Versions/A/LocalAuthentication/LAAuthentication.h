@class NSXPCConnection, NSString, LAAuthenticationClientTransaction, LAAuthenticationAuthorizationRef, NSArray, LAContext, NSDictionary, NSObject, LAAuthenticationAuthorizationEngine;
@protocol LAAuthenticationProgressDelegate, OS_dispatch_queue, LAAuthenticationServerProtocol;

@interface LAAuthentication : NSObject <LAAuthenticationServerNotificationProtocol> {
    LAAuthenticationClientTransaction *_transaction;
}

@property (readonly, weak, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) id<LAAuthenticationServerProtocol> server;
@property (readonly, nonatomic) LAAuthenticationAuthorizationEngine *authorizationEngineRef;
@property (readonly, nonatomic) LAAuthenticationAuthorizationRef *authorizationRef;
@property (nonatomic) long long state;
@property (retain, nonatomic) LAContext *resultContext;
@property (readonly, nonatomic) LAAuthenticationClientTransaction *transaction;
@property (weak, nonatomic) id<LAAuthenticationProgressDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic) struct __OpaqueAuthorizationEngine { } *authorizationEngine;
@property (nonatomic) const struct AuthorizationCallbacks { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; } *authorizationCallbacks;
@property (nonatomic) const struct AuthorizationOpaqueRef { } *authorization;
@property (retain, nonatomic) NSString *authorizationRight;
@property (retain, nonatomic) NSDictionary *authorizationEnvironment;
@property (nonatomic) int callerPID;
@property (retain, nonatomic) NSString *callerPath;
@property (retain, nonatomic) NSString *callerName;
@property (nonatomic) BOOL continuousAuthentication;
@property (nonatomic) BOOL automaticallyActivateAvailableMethods;
@property (retain, nonatomic) NSArray *availableUsers;
@property (nonatomic) BOOL strictlyObeyAvailableUsers;
@property (retain, nonatomic) NSString *selectedUser;
@property (retain, nonatomic) NSString *requiredUserGroup;
@property (nonatomic) BOOL requirePassword;
@property (retain, nonatomic) NSString *localizedReasonDescriptionForDFR;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)start;
- (void)suspend;
- (void)terminate;
- (void)promptFeedback:(id)a0;
- (void)processODError:(int)a0;
- (void)askForResponse;
- (void)authenticationResultFeedback:(id)a0;
- (void)clearTransaction;
- (void)configureForFastUserSwitchingWithAuthorizationEngine:(struct __OpaqueAuthorizationEngine { } *)a0 authorizationCallbacks:(const struct AuthorizationCallbacks { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; } *)a1;
- (void)configureForLoginWithAuthorizationEngine:(struct __OpaqueAuthorizationEngine { } *)a0 authorizationCallbacks:(const struct AuthorizationCallbacks { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; } *)a1;
- (void)configureForStandardAuthorizationWithAuthorizationEngine:(struct __OpaqueAuthorizationEngine { } *)a0 authorizationCallbacks:(const struct AuthorizationCallbacks { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; } *)a1;
- (void)configureForUnlockWithAuthorization:(struct AuthorizationOpaqueRef { } *)a0 user:(id)a1;
- (void)entryFeedback:(id)a0;
- (void)failureFeedback:(id)a0;
- (void)methodsFeedback:(id)a0;
- (void)usersFeedback:(id)a0;

@end
