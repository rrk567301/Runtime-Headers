@class NSNumber, NSSet, NSDateInterval;

@interface RTStoredVisitFetchOptions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char ascending;
@property (readonly, nonatomic) NSNumber *confidence;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) char labelVisit;
@property (readonly, nonatomic) NSNumber *limit;
@property (readonly, nonatomic) NSSet *sources;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAscending:(char)a0 confidence:(id)a1 dateInterval:(id)a2 labelVisit:(char)a3 limit:(id)a4;
- (id)initWithAscending:(char)a0 confidence:(id)a1 dateInterval:(id)a2 labelVisit:(char)a3 limit:(id)a4 sources:(id)a5;
- (char)isEqualToFetchOptions:(id)a0;
- (id)initWithAscending:(char)a0 confidence:(id)a1 dateInterval:(id)a2 limit:(id)a3;

@end
