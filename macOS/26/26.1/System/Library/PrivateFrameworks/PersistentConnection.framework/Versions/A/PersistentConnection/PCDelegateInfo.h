@class NSObject;
@protocol OS_dispatch_queue;

@interface PCDelegateInfo : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)queue;
- (void)setQueue:(id)a0;
- (void).cxx_destruct;

@end
