@class NSSet, MCMUserIdentity;
@protocol MCMContainerConfiguration;

@interface MCMCommandAuthorize : MCMCommand {
    void /* function */ identifiers;
    void /* function */ groupIdentifiers;
    void /* unknown type, empty encoding */ $__lazy_storage_$_amfi;
    void /* unknown type, empty encoding */ targetClientCodeSignInfo;
    void /* unknown type, empty encoding */ targetClientIdentifier;
    void /* unknown type, empty encoding */ targetClientEntitlements;
    void /* unknown type, empty encoding */ targetPlatform;
}

@property (nonatomic, retain) id<MCMContainerConfiguration> containerConfig;
@property (nonatomic) struct { unsigned int x0[8]; } auditToken;
@property (nonatomic) BOOL onBehalfOfSelf;
@property (nonatomic, copy) NSSet *identifiers;
@property (nonatomic, copy) NSSet *groupIdentifiers;
@property (nonatomic, retain) MCMUserIdentity *userIdentity;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (BOOL)preflightClientAllowed;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 resultPromise:(id)a1;

@end
