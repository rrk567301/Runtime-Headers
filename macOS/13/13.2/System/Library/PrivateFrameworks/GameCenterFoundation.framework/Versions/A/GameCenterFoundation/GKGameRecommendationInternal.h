@class NSString;

@interface GKGameRecommendationInternal : GKGameInternal

@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSString *engineID;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)serverRepresentation;
- (id)initWithGame:(id)a0;

@end
