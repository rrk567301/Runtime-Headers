@class MADFiniteObjectPool;

@interface MADSharedTextEncoder : NSObject {
    unsigned long long _version;
    MADFiniteObjectPool *_textEncoderPool;
    BOOL _extendedContextLength;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _isWarm;
}

@property (readonly, nonatomic) BOOL isWarm;

+ (unsigned long long)contextLength:(BOOL)a0;
+ (long long)csuComputeUnitsFromMADComputeUnits:(unsigned long long)a0;
+ (long long)revisionForVersion:(unsigned long long)a0;
+ (unsigned long long)textEncoderLimit;
+ (id)textEncoderWithVersion:(unsigned long long)a0 extendedContextLength:(BOOL)a1 computeUnits:(unsigned long long)a2;

- (void).cxx_destruct;
- (BOOL)loadResources:(id *)a0;
- (BOOL)_runOnInput:(id)a0 allowTruncation:(BOOL)a1 output:(id *)a2 truncated:(BOOL *)a3 error:(id *)a4;
- (id)initWithTextEncoderWithVersion:(unsigned long long)a0 extendedContextLength:(BOOL)a1 computeUnits:(unsigned long long)a2;
- (BOOL)runOnInput:(id)a0 allowTruncation:(BOOL)a1 output:(id *)a2 truncated:(BOOL *)a3 error:(id *)a4;

@end
