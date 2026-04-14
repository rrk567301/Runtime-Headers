@class NSArray;

@interface PPTripEvent : PPScoredEvent

@property (readonly, nonatomic) NSArray *tripParts;

+ (BOOL)supportsSecureCoding;

- (id)destinations;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)destinationsBasedTitle;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 tripParts:(id)a2;

@end
