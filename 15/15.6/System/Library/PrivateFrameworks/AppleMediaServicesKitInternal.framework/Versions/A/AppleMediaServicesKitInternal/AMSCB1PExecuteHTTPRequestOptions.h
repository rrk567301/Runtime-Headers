@class NSNumber;

@interface AMSCB1PExecuteHTTPRequestOptions : NSObject {
    struct shared_ptr<AMSCore::IBag> { struct IBag *__ptr_; struct __shared_weak_count *__cntrl_; } _bag;
    struct shared_ptr<const AMSCore::IBundleInfo> { struct IBundleInfo *__ptr_; struct __shared_weak_count *__cntrl_; } _bundleInfo;
    unsigned char _maxRetryCount;
    char _shouldSendURLMetrics;
    char _URLKnownToBeTrusted;
    NSNumber *_timeoutInterval;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithMaxRetryCount:(unsigned char)a0 shouldSendURLMetrics:(char)a1 timeoutInterval:(id)a2 URLKnownToBeTrusted:(char)a3 bag:(id)a4 bundleInfo:(id)a5;
- (id)initWithParentBridge:(id)a0;

@end
