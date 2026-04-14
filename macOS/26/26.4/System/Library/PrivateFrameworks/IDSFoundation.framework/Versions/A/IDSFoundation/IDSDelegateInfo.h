@class NSObject;
@protocol OS_dispatch_queue;

@interface IDSDelegateInfo : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)queue;
- (void).cxx_destruct;
- (void)setQueue:(id)a0;

@end
