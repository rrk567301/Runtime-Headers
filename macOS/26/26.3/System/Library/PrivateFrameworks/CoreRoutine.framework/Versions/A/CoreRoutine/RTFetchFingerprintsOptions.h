@class NSDateInterval;

@interface RTFetchFingerprintsOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (nonatomic) unsigned long long settledState;

- (BOOL)isEqualToOptions:(id)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDateInterval:(id)a0 settledState:(unsigned long long)a1;

@end
