@class NSDateInterval;

@interface RTStoredElevationEnumerationOptions : RTEnumerationOptions <NSCopying> {
    unsigned long long _batchSize;
}

@property (readonly, nonatomic) NSDateInterval *dateInterval;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqualToOptions:(id)a0;
- (unsigned long long)batchSize;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)enumeratedType;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id /* block */)processingBlock;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDateInterval:(id)a0 batchSize:(unsigned long long)a1;

@end
