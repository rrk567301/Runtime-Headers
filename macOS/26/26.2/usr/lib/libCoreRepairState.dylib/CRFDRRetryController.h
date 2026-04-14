@class NSLock;

@interface CRFDRRetryController : NSObject {
    NSLock *_lock;
    long long _refCount;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)disableRetry;
- (void)enableRetry;

@end
