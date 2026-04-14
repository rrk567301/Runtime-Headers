@interface RTWorkoutDistanceEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding> {
    unsigned long long _batchSize;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL ascending;

- (unsigned long long)batchSize;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)enumeratedType;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBatchSize:(unsigned long long)a0 ascending:(BOOL)a1;

@end
