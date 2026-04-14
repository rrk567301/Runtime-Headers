@class NSArray;

@interface PPTripEvent : PPScoredEvent

@property (readonly, nonatomic) NSArray *tripParts;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)destinations;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 tripParts:(id)a2;
- (id)destinationsBasedTitle;

@end
