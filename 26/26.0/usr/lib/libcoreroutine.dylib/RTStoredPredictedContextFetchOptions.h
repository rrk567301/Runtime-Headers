@class NSArray, NSNumber, NSDateInterval;

@interface RTStoredPredictedContextFetchOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) unsigned long long filterContextTypeMask;
@property (readonly, nonatomic) NSArray *resultSortDescriptors;
@property (readonly, nonatomic) NSNumber *limit;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDateInterval:(id)a0 filterContextTypeMask:(unsigned long long)a1 resultSortDescriptors:(id)a2 limit:(id)a3;

@end
