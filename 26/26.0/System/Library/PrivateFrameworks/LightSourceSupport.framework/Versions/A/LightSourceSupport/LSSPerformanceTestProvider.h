@class NSString, NSObject;
@protocol OS_dispatch_queue, LSSProviderDelegate, OS_dispatch_source;

@interface LSSPerformanceTestProvider : NSObject <LSSProvider> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
}

@property (weak, nonatomic) id<LSSProviderDelegate> delegate;
@property (nonatomic) long long features;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;

@end
