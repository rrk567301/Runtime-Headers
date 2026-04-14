@class NSObject;
@protocol OS_dispatch_queue;

@interface FSUnaryItem : FSItem {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
