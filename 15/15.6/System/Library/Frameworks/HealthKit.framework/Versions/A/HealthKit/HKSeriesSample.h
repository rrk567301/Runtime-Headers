@interface HKSeriesSample : HKSample {
    _Atomic unsigned int _count;
}

@property (nonatomic, getter=_isFrozen, setter=_setFrozen:) char frozen;
@property (readonly) unsigned long long count;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_setCount:(unsigned long long)a0;
- (id)_validateSample;
- (char)_shouldNotifyOnInsert;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned long long x1; })a0;
- (id)_valueDescription;

@end
