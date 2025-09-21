@class NSDateInterval;

@interface RTStoredElevationEnumerationOptions : RTEnumerationOptions <NSCopying> {
    unsigned long long _batchSize;
}

@property (readonly, nonatomic) NSDateInterval *dateInterval;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (unsigned long long)batchSize;
- (id)description;
- (id)initWithCoder:(id)a0;
- (Class)enumeratedType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToOptions:(id)a0;
- (id /* block */)processingBlock;
- (void).cxx_destruct;
- (id)initWithDateInterval:(id)a0 batchSize:(unsigned long long)a1;

@end
