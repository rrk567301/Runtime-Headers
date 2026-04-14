@interface RTWorkoutDistanceEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding> {
    unsigned long long _batchSize;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL ascending;

- (unsigned long long)batchSize;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (Class)enumeratedType;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithBatchSize:(unsigned long long)a0 ascending:(BOOL)a1;

@end
