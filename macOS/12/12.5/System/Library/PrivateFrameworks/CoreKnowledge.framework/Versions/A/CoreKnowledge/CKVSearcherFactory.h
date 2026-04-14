@class NSObject;
@protocol OS_dispatch_queue, CKVSearchServiceProvider;

@interface CKVSearcherFactory : NSObject <CKVSearcherProvider> {
    NSObject<OS_dispatch_queue> *_searcherQueue;
    NSObject<CKVSearchServiceProvider> *_serviceProvider;
}

+ (id)sharedSearcherFactory;

- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 serviceProvider:(id)a1;
- (id)makeSearcherForUserId:(id)a0 prewarm:(BOOL)a1;

@end
