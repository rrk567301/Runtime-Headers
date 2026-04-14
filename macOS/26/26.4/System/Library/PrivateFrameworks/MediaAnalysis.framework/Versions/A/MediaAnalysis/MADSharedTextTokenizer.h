@class CSUTokenizer, NSObject;
@protocol OS_dispatch_queue;

@interface MADSharedTextTokenizer : NSObject {
    unsigned long long _version;
    CSUTokenizer *_textTokenizer;
    NSObject<OS_dispatch_queue> *_queue;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _isWarm;
}

@property (readonly, nonatomic) BOOL isWarm;

+ (long long)revisionForVersion:(unsigned long long)a0;
+ (id)textTokenizerWithVersion:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)tokenIDsForText:(id)a0;
- (id)initWithWithEmbeddingVersion:(unsigned long long)a0;

@end
