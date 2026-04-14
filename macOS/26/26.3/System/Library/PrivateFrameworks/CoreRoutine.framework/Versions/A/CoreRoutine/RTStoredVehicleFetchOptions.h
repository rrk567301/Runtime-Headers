@class NSNumber, NSDateInterval;

@interface RTStoredVehicleFetchOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) NSNumber *limit;

- (BOOL)isEqualToFetchOptions:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDateInterval:(id)a0 limit:(id)a1;

@end
