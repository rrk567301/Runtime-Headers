@class NSString, CKVTaskManager, CESRSpeechProfileSiteManager, SEMIndexSiteManager, CCDataSiteManager, NSObject;
@protocol OS_dispatch_queue, CCDonateServiceProvider;

@interface CKVAdminServiceFactory : NSObject <CKVAdminServiceProvider> {
    NSObject<OS_dispatch_queue> *_serviceQueue;
    CCDataSiteManager *_dataSiteManager;
    CESRSpeechProfileSiteManager *_speechProfileSiteManager;
    SEMIndexSiteManager *_indexSiteManager;
    CKVTaskManager *_taskManager;
    NSObject<CCDonateServiceProvider> *_serviceProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)adminService;
- (id)initWithQueue:(id)a0 dataSiteManager:(id)a1 speechProfileSiteManager:(id)a2 indexSiteManager:(id)a3 taskManager:(id)a4 serviceProvider:(id)a5;

@end
