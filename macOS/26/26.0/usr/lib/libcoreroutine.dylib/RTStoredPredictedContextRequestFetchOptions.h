@class NSArray, NSNumber, NSDateInterval;

@interface RTStoredPredictedContextRequestFetchOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) long long inferenceTriggerReason;
@property (readonly, nonatomic) NSArray *resultSortDescriptors;
@property (readonly, nonatomic) NSNumber *limit;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDateInterval:(id)a0 inferenceTriggerReason:(long long)a1 resultSortDescriptors:(id)a2 limit:(id)a3;

@end
