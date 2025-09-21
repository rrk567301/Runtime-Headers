@class NSDateInterval;

@interface RTStoredElevationEnumerationOptions : RTEnumerationOptions <NSCopying> {
    unsigned long long _batchSize;
}

@property (readonly, nonatomic) NSDateInterval *dateInterval;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)batchSize;
- (id)initWithDateInterval:(id)a0 batchSize:(unsigned long long)a1;
- (id /* block */)processingBlock;
- (Class)enumeratedType;
- (char)isEqualToOptions:(id)a0;

@end
