@interface RTWorkoutDistanceEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding> {
    unsigned long long _batchSize;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL ascending;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)batchSize;
- (id)description;
- (id)initWithCoder:(id)a0;
- (Class)enumeratedType;
- (id)initWithBatchSize:(unsigned long long)a0 ascending:(BOOL)a1;

@end
