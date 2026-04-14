@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SiriAnalyticsLargeMessageStorage : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_applicationIdentifier;
}

- (void).cxx_destruct;
- (id)initWithApplicationIdentifier:(id)a0;
- (void)enqueueLargeMessageObjectFromPath:(id)a0 messageWrapper:(id)a1 completion:(id /* block */)a2;

@end
