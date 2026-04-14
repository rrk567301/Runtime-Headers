@class NSDateInterval;

@interface RTStoredElevationEnumerationOptions : RTEnumerationOptions <NSCopying> {
    unsigned long long _batchSize;
}

@property (readonly, nonatomic) NSDateInterval *dateInterval;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqualToOptions:(id)a0;
- (id /* block */)processingBlock;
- (id)initWithCoder:(id)a0;
- (unsigned long long)batchSize;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)enumeratedType;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithDateInterval:(id)a0 batchSize:(unsigned long long)a1;

@end
