@class CSUTextEncoder, NSObject;
@protocol OS_dispatch_queue;

@interface MADSharedTextEncoder : NSObject {
    unsigned long long _version;
    CSUTextEncoder *_textEncoder;
    NSObject<OS_dispatch_queue> *_queue;
    char _extendedContextLength;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _isWarm;
}

@property (readonly, nonatomic) char isWarm;

+ (unsigned long long)contextLength:(char)a0;
+ (long long)revisionForVersion:(unsigned long long)a0;
+ (id)textEncoderWithVersion:(unsigned long long)a0 extendedContextLength:(char)a1;

- (void).cxx_destruct;
- (char)loadResources:(id *)a0;
- (char)_runOnInput:(id)a0 output:(id *)a1 error:(id *)a2;
- (id)initWithTextEncoderWithVersion:(unsigned long long)a0 extendedContextLength:(char)a1;
- (char)runOnInput:(id)a0 output:(id *)a1 error:(id *)a2;

@end
