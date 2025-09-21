@class NSDateInterval;

@interface RTLocationOfInterestEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char ascending;
@property (readonly, nonatomic) unsigned long long batchSize;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) char wrappedVisit;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id /* block */)processingBlock;
- (Class)enumeratedType;
- (id)initWithAscending:(char)a0 batchSize:(unsigned long long)a1 dateInterval:(id)a2 wrappedVisit:(char)a3;

@end
