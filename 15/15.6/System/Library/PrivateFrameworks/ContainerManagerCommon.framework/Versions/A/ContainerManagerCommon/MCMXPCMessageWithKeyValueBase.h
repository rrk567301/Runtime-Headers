@class NSString, MCMConcreteContainerIdentity, NSObject;
@protocol OS_xpc_object;

@interface MCMXPCMessageWithKeyValueBase : MCMXPCMessageWithKeyBase <MCMXPCMessage, MCMParametersWithKeyValue>

@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;
@property (readonly, nonatomic) struct container_client { unsigned long long x0; char *x1; char *x2; unsigned int x3; char *x4; unsigned int x5; unsigned int x6; struct { unsigned int x0[8]; } x7; int x8; BOOL x9; BOOL x10; BOOL x11; id x12; } *proxy;
@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) unsigned int disposition;
@property (readonly, nonatomic) unsigned long long command;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) MCMConcreteContainerIdentity *concreteContainerIdentity;
@property (readonly, nonatomic) char includedPath;
@property (readonly, nonatomic) char includedInfo;
@property (readonly, nonatomic) char includedUserManagedAssetsPath;
@property (readonly, nonatomic) char includedCreator;

- (void).cxx_destruct;
- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;

@end
