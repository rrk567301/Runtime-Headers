@class NSObject;
@protocol OS_dispatch_semaphore;

@interface GTDisplayRequestToken : NSObject {
    NSObject<OS_dispatch_semaphore> *_sem;
}

@property (readonly, nonatomic) unsigned long long requestID;

- (void)waitUntilCompleted;
- (id)initWithID:(unsigned long long)a0;
- (void)completed;
- (void).cxx_destruct;

@end
