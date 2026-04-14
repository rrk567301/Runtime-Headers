@class NSDateInterval;

@interface RTStoredElevationEnumerationOptions : RTEnumerationOptions <NSCopying> {
    unsigned long long _batchSize;
}

@property (readonly, nonatomic) NSDateInterval *dateInterval;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)batchSize;
- (id /* block */)processingBlock;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToOptions:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (Class)enumeratedType;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithDateInterval:(id)a0 batchSize:(unsigned long long)a1;

@end
