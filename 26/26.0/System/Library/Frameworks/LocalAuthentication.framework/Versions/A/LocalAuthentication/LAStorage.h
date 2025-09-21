@class LAContext, NSXPCConnection;
@protocol LACSecureStorageService;

@interface LAStorage : NSObject

@property (class, readonly) unsigned int newInstanceId;

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) id<LACSecureStorageService> remoteObjectProxy;
@property (readonly, nonatomic) unsigned int instanceId;
@property (readonly, nonatomic) long long domain;
@property (nonatomic) struct __SecAccessControl { } *accessControl;
@property (readonly, nonatomic) LAContext *authenticationContext;

+ (id)secureDomainStorage;
+ (id)objectDescription:(id)a0;

- (id)dictionaryForKey:(long long)a0;
- (BOOL)boolForKey:(long long)a0;
- (void)dealloc;
- (id)dataForKey:(long long)a0;
- (id)numberForKey:(long long)a0;
- (id)description;
- (id)dataForKey:(long long)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithDomain:(long long)a0 authenticationContext:(id)a1;
- (BOOL)setData:(id)a0 forKey:(long long)a1 error:(id *)a2;
- (id)numberForKey:(long long)a0 error:(id *)a1;
- (void)numberForKey:(long long)a0 completionHandler:(id /* block */)a1;
- (void)objectForKey:(long long)a0 completionHandler:(id /* block */)a1;
- (void)processError:(id)a0 completionHandler:(id /* block */)a1;
- (void)_bootstrapServiceType:(id)a0 completionHandler:(id /* block */)a1;
- (void)_bootstrapServiceWithAuthenticationPolicy:(long long)a0 proxyBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)_callProxyBlock:(id /* block */)a0 authenticationPolicy:(long long)a1 completionHandler:(id /* block */)a2;
- (void)_class:(Class)a0 forKey:(long long)a1 completionHandler:(id /* block */)a2;
- (void)_connectToEndpoint:(id)a0;
- (void)_resetConnection;
- (struct __SecAccessControl { } *)accessControlForKey:(long long)a0 error:(id *)a1;
- (void)boolForKey:(long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)boolForKey:(long long)a0 error:(id *)a1;
- (void)dataForKey:(long long)a0 completionHandler:(id /* block */)a1;
- (void)dictionaryForKey:(long long)a0 completionHandler:(id /* block */)a1;
- (id)dictionaryForKey:(long long)a0 error:(id *)a1;
- (void)exchangeData:(id)a0 forKey:(long long)a1 completionHandler:(id /* block */)a2;
- (id)exchangeData:(id)a0 forKey:(long long)a1 error:(id *)a2;
- (void)removeObjectForKey:(long long)a0 completionHandler:(id /* block */)a1;
- (void)setBool:(BOOL)a0 forKey:(long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)setBool:(BOOL)a0 forKey:(long long)a1 error:(id *)a2;
- (void)setData:(id)a0 forKey:(long long)a1 completionHandler:(id /* block */)a2;
- (void)setDictionary:(id)a0 forKey:(long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)setDictionary:(id)a0 forKey:(long long)a1 error:(id *)a2;
- (void)setObject:(id)a0 forKey:(long long)a1 completionHandler:(id /* block */)a2;
- (void)setObject:(id)a0 forKey:(long long)a1 withOptions:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)setObject:(id)a0 forKey:(long long)a1 withOptions:(id)a2 error:(id *)a3;

@end
