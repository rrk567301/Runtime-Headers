@class NSString, NSMutableArray, NSObject;
@protocol MCMCommandContext, OS_xpc_object;

@interface MCMXPCMessageBase : NSObject <MCMXPCMessage>

@property (readonly, nonatomic) id<MCMCommandContext> context;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;
@property (readonly, nonatomic) struct container_client { unsigned long long x0; char *x1; char *x2; unsigned int x3; char *x4; unsigned int x5; unsigned int x6; struct { unsigned int x0[8]; } x7; int x8; BOOL x9; BOOL x10; BOOL x11; id x12; } *proxy;
@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) unsigned int disposition;
@property (readonly, nonatomic) NSMutableArray *warnings;
@property (readonly, nonatomic) unsigned long long command;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_userIdentityDisambiguatedFromUserIdentities:(id)a0 error:(id *)a1;
+ (id)legacySetOfUserIdentitiesForIdentifiers:(id)a0 targetUserIdentity:(id)a1 containerConfig:(id)a2 clientIdentity:(id)a3 userIdentityCache:(id)a4 warnings:(id)a5 error:(id *)a6;
+ (id)legacyUserIdentityForIdentifier:(id)a0 targetUserIdentity:(id)a1 containerConfig:(id)a2 clientIdentity:(id)a3 userIdentityCache:(id)a4 warnings:(id)a5 error:(id *)a6;
+ (id)userIdentitiesAssociatedWithContainerIdentifier:(id)a0 containerConfig:(id)a1 userIdentityCache:(id)a2 error:(id *)a3;
+ (id)xpcMessageFromXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;

- (id)initWithContext:(id)a0;
- (void)dealloc;
- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;
- (void).cxx_destruct;
- (id)userIdentityFromClientPersonaUniqueString:(id)a0 clientIdentity:(id)a1 error:(id *)a2;
- (id)nsStringValueFromXPCObject:(id)a0 key:(const char *)a1;
- (id)identifierFromXPCObject:(id)a0 elseClientIdentifier:(id)a1;
- (id)nsObjectFromXPCObject:(id)a0 key:(const char *)a1 error:(unsigned long long *)a2;
- (id)nsUUIDValueFromXPCObject:(id)a0 key:(const char *)a1;

@end
