@class NSXPCConnection, NSString, LACAuditToken;

@interface LACXPCClient : NSObject <LACXPCClient>

@property (nonatomic) BOOL bypassEntitlement;
@property (nonatomic) int auditSessionId;
@property (retain, nonatomic) LACAuditToken *token;
@property (nonatomic) int processId;
@property (nonatomic) unsigned int userId;
@property (weak, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) struct { unsigned int x0[8]; } auditToken;
@property (readonly, nonatomic) NSString *signingID;
@property (readonly, nonatomic) BOOL isFirstPartyClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
