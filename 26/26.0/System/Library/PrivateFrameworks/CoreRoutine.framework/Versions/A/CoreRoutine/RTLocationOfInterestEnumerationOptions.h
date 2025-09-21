@class NSDateInterval;

@interface RTLocationOfInterestEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL ascending;
@property (readonly, nonatomic) unsigned long long batchSize;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) BOOL wrappedVisit;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (Class)enumeratedType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id /* block */)processingBlock;
- (void).cxx_destruct;
- (id)initWithAscending:(BOOL)a0 batchSize:(unsigned long long)a1 dateInterval:(id)a2 wrappedVisit:(BOOL)a3;

@end
