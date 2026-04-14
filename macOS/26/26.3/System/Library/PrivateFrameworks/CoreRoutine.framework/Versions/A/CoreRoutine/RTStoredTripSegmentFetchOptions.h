@class NSNumber, NSDateInterval;

@interface RTStoredTripSegmentFetchOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isAscending) BOOL ascending;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) NSNumber *limit;

- (BOOL)isEqualToFetchOptions:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAscending:(BOOL)a0 dateInterval:(id)a1 limit:(id)a2;

@end
