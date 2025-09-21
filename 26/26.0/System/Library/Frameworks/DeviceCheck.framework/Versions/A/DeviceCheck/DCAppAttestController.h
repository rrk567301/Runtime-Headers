@class NSUserDefaults;

@interface DCAppAttestController : NSObject

@property (retain, nonatomic) NSUserDefaults *legacyUserDefaults;
@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (nonatomic) unsigned long long appAttestType;

- (id)initWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isSupported;
- (void)attestKey:(id)a0 keyAttributes:(id)a1 clientDataHash:(id)a2 authData:(id)a3 options:(id)a4 completionHandler:(id /* block */)a5;
- (void)attestKey:(id)a0 teamIdentifier:(id)a1 clientDataHash:(id)a2 completionHandler:(id /* block */)a3;
- (void)dispatchCompletionHandler:(id /* block */)a0 ontoQueue:(id)a1;
- (void)generateAssertion:(id)a0 teamIdentifier:(id)a1 clientDataHash:(id)a2 completionHandler:(id /* block */)a3;
- (void)generateKeyWithTeamIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)getPropertiesForKeyId:(id)a0 teamIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)isSupportedWithError:(id *)a0;
- (id)loadAppUUID;
- (id)rewrapAsDCError:(id)a0;
- (void)saveAppUUID:(id)a0;
- (void)sign:(id)a0 withKey:(id)a1 teamIdentifier:(id)a2 completionHandler:(id /* block */)a3;

@end
