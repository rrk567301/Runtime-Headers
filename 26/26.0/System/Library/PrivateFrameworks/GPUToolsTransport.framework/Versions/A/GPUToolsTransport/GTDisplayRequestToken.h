@class NSObject;
@protocol OS_dispatch_semaphore;

@interface GTDisplayRequestToken : NSObject {
    NSObject<OS_dispatch_semaphore> *_sem;
}

@property (readonly, nonatomic) unsigned long long requestID;

- (void)completed;
- (void)waitUntilCompleted;
- (id)initWithID:(unsigned long long)a0;
- (void).cxx_destruct;

@end
