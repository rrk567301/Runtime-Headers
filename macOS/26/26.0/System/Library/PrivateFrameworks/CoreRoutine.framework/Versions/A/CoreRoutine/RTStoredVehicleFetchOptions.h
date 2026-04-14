@class NSNumber, NSDateInterval;

@interface RTStoredVehicleFetchOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) NSNumber *limit;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToFetchOptions:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDateInterval:(id)a0 limit:(id)a1;

@end
