@class NSNumber;

@interface _MPCPrivateListeningStateStaticSource : MPCPrivateListeningStateSource {
    NSNumber *_value;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)currentValue;
- (long long)sourceType;
- (id)_initWithValue:(id)a0;

@end
