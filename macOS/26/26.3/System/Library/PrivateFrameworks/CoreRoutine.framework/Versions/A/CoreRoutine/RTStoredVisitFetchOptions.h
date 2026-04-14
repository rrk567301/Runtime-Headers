@class NSNumber, NSSet, NSDateInterval;

@interface RTStoredVisitFetchOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL ascending;
@property (readonly, nonatomic) NSNumber *confidence;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) BOOL labelVisit;
@property (readonly, nonatomic) NSNumber *limit;
@property (readonly, nonatomic) NSSet *sources;
@property (readonly, nonatomic) BOOL redact;
@property (readonly, nonatomic) BOOL filterPairedVisitEntries;

- (BOOL)isEqualToFetchOptions:(id)a0;
- (id)initWithAscending:(BOOL)a0 confidence:(id)a1 dateInterval:(id)a2 labelVisit:(BOOL)a3 limit:(id)a4 sources:(id)a5 redact:(BOOL)a6;
- (id)description;
- (id)init;
- (id)initWithAscending:(BOOL)a0 confidence:(id)a1 dateInterval:(id)a2 labelVisit:(BOOL)a3 limit:(id)a4 sources:(id)a5 redact:(BOOL)a6 filterPairedVisitEntries:(BOOL)a7;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAscending:(BOOL)a0 confidence:(id)a1 dateInterval:(id)a2 labelVisit:(BOOL)a3 limit:(id)a4;
- (BOOL)isEqual:(id)a0;
- (id)initWithAscending:(BOOL)a0 confidence:(id)a1 dateInterval:(id)a2 labelVisit:(BOOL)a3 limit:(id)a4 sources:(id)a5;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAscending:(BOOL)a0 confidence:(id)a1 dateInterval:(id)a2 limit:(id)a3;

@end
