@class NSLock;

@interface CRFDRRetryController : NSObject {
    NSLock *_lock;
    long long _refCount;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)disableRetry;
- (void)enableRetry;

@end
