@class NSString;

@interface LACXPCClientInfo : NSObject <LACXPCClientInfo>

@property (nonatomic) int processId;
@property (nonatomic) struct { unsigned int val[8]; } auditToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConnection:(id)a0;

@end
