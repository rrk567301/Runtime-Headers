@class NSNumber, NSDateInterval;

@interface RTStoredTripSegmentFetchOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic, getter=isAscending) char ascending;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) NSNumber *limit;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAscending:(char)a0 dateInterval:(id)a1 limit:(id)a2;
- (char)isEqualToFetchOptions:(id)a0;

@end
