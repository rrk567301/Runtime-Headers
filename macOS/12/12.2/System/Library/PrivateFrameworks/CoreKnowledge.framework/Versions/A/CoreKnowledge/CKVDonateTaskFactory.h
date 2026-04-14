@class NSString, NSObject;
@protocol OS_dispatch_queue, CKVDonatorProvider;

@interface CKVDonateTaskFactory : NSObject <CKVDonateTaskProvider> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<CKVDonatorProvider> *_donatorProvider;
}

@property BOOL useSimulatedProviderBridge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 serviceProvider:(id)a1;
- (void)enableSimulatedTasks:(BOOL)a0;
- (id)intentVocabularyDonateTask;
- (id)contactsDonateTask;
- (id)appInfoDonateTaskWithLanguageCode:(id)a0;
- (id)homeKitDonateTask;
- (id)mediaDonateTask;

@end
