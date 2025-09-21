@class NSError, NSObject;
@protocol OS_dispatch_semaphore;

@interface PPSocialHighlightStoreHandler : NSObject {
    char _successful;
    NSError *_error;
    id /* block */ _block;
    NSObject<OS_dispatch_semaphore> *_sem;
}

- (void).cxx_destruct;

@end
