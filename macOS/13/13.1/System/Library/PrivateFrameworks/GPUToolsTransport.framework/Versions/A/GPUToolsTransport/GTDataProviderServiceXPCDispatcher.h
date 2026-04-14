@class NSObject;
@protocol OS_os_log, GTDataProviderService;

@interface GTDataProviderServiceXPCDispatcher : GTXPCDispatcher <GTDataProviderServiceXPCDispatcher> {
    NSObject<OS_os_log> *_log;
    id<GTDataProviderService> _implInstance;
}

- (void).cxx_destruct;
- (id)initWithService:(id)a0;
- (void)uploadFragment_forHandle_completionHandler_:(id)a0 replyConnection:(id)a1;
- (void)getData_:(id)a0 replyConnection:(id)a1;

@end
