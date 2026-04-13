@class NSString, SUCoreConnectClientProxy, SUMacControllerDescriptor, SUMacControllerOverrides, SUMacControllerProgressManager, SUMacControllerAccessControlContext;

@interface SUMacControllerClientRequest : NSObject

@property (readonly, retain, nonatomic) NSString *clientID;
@property (readonly, retain, nonatomic) NSString *cookie;
@property (readonly, retain, nonatomic) NSString *command;
@property (readonly, retain, nonatomic) SUCoreConnectClientProxy *proxyObject;
@property (readonly, retain, nonatomic) SUMacControllerProgressManager *progressManager;
@property (readonly, retain, nonatomic) id /* block */ completion;
@property (retain, nonatomic) SUMacControllerDescriptor *descriptor;
@property (readonly, retain, nonatomic) SUMacControllerOverrides *overrides;
@property (retain, nonatomic) SUMacControllerAccessControlContext *accessControlContext;
@property (readonly, retain, nonatomic) id /* block */ scanCompletion;
@property (readonly, retain, nonatomic) id /* block */ sfrScanCompletion;

+ (BOOL)_shouldFetchSSOTokenForCommand:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)summary;
- (id)initFromMessage:(id)a0 proxyObject:(id)a1 scanCompletion:(id /* block */)a2;
- (id)initFromMessage:(id)a0 proxyObject:(id)a1 sfrScanCompletion:(id /* block */)a2;
- (id)initFromMessage:(id)a0 proxyObject:(id)a1 completion:(id /* block */)a2;
- (id)_initFromMessage:(id)a0 proxyObject:(id)a1 scanCompletion:(id /* block */)a2 sfrScanCompletion:(id /* block */)a3;
- (id)initFromPersistedDescriptor:(id)a0 accessControlContext:(id)a1 overrides:(id)a2 scanCompletion:(id /* block */)a3;

@end
