@class _HKFactorization;

@interface _HKDimension : NSObject {
    _HKFactorization *_reduction;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _reductionLock;
}

+ (id)dimensionFromString:(id)a0;

- (id)_baseDimensions;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)reduction;

@end
