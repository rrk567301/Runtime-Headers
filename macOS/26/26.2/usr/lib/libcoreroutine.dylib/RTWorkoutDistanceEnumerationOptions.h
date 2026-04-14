@interface RTWorkoutDistanceEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding> {
    unsigned long long _batchSize;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL ascending;

- (id)initWithCoder:(id)a0;
- (unsigned long long)batchSize;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)enumeratedType;
- (id)description;
- (id)initWithBatchSize:(unsigned long long)a0 ascending:(BOOL)a1;

@end
