@class NSObject;
@protocol OS_dispatch_queue;

@interface SSRVoiceProfileManagerXPCClient : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedClient;
+ (id)createVoiceProfileManagerXPCConnection;

- (void)importVoiceProfile:(id)a0 appDomain:(id)a1 withSharedUserId:(id)a2 withPersonaId:(id)a3 withLocale:(id)a4 withAsset:(id)a5 trainWithPayload:(BOOL)a6 withCompletion:(id /* block */)a7;
- (void).cxx_destruct;
- (void)markSATEnrollmentSuccessForVoiceProfile:(id)a0 completion:(id /* block */)a1;
- (id)init;

@end
