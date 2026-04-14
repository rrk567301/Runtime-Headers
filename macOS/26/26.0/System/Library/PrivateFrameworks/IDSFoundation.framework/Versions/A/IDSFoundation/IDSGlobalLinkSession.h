@class NSObject, NSString, NSDictionary, IDSQuickRelaySessionInfo, IDSGLLinkEngine, NSData, NSMutableArray;
@protocol OS_dispatch_source;

@interface IDSGlobalLinkSession : NSObject {
    NSObject<OS_dispatch_source> *_sessionConvergenceTimer;
    id /* block */ _sessionConvergenceBlock;
    NSObject<OS_dispatch_source> *_sessionGoAwayTimer;
    id /* block */ _sessionGoAwayBlock;
    struct sockaddr_storage { unsigned char ss_len; unsigned char ss_family; char __ss_pad1[6]; long long __ss_align; char __ss_pad2[112]; } _serverAddress;
    struct sockaddr_storage { unsigned char ss_len; unsigned char ss_family; char __ss_pad1[6]; long long __ss_align; char __ss_pad2[112]; } _serverAddressV6;
    NSData *_sessionToken;
}

@property (readonly) IDSQuickRelaySessionInfo *sessionInfo;
@property (readonly) NSDictionary *sessionInfoDict;
@property (readonly) NSString *qrSessionID;
@property (readonly) NSString *idsSessionID;
@property (readonly) IDSGLLinkEngine *linkEngine;
@property BOOL wantsToJoin;
@property BOOL wantsInfo;
@property BOOL isPendingDisconnect;
@property (readonly) BOOL wantsToBeConnected;
@property int localInterfacePreference;
@property (readonly) long long desiredRelayConnectionBehavior;
@property const struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } *serverAddress;
@property const struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } *serverAddressV6;
@property (retain) NSData *sessionToken;
@property BOOL hasReceivedReallocIndication;
@property (readonly) BOOL shouldLinkEngineAllowOngoingTasks;
@property (retain) NSMutableArray *remotePushTokens;
@property long long acceptStatus;

- (void)reset;
- (void)invalidate;
- (void).cxx_destruct;
- (void)setSessionInfo:(id)a0 sessionInfoDict:(id)a1;
- (void)_handleSessionConvergenceTimer;
- (void)_handleSessionGoAwayTimer;
- (id)initWithSessionInfo:(id)a0 sessionInfoDict:(id)a1 linkEngine:(id)a2;
- (void)startSessionConvergenceTimer:(int)a0 block:(id /* block */)a1;
- (void)startSessionGoAwayTimer:(int)a0 block:(id /* block */)a1;
- (void)stopSessionConvergenceTimer;
- (void)stopSessionGoAwayTimer;
- (void)willDisconnect;

@end
