@class NSString;

@interface SSRVoiceProfileManagerXPCService : NSObject <SSRVoiceProfileManagerXPCProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)markSATEnrollmentSuccessForVoiceProfile:(id)a0 completion:(id /* block */)a1;
- (void)importVoiceProfile:(id)a0 appDomain:(id)a1 withSharedUserId:(id)a2 withPersonaId:(id)a3 withLocale:(id)a4 withAsset:(id)a5 trainWithPayload:(BOOL)a6 withCompletion:(id /* block */)a7;

@end
