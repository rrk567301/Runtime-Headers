@class GKAchievementInternal;

@interface GKAchievementChallengeInternal : GKChallengeInternal

@property (copy, nonatomic) GKAchievementInternal *achievement;

+ (id)secureCodedPropertyKeys;
+ (id)internalRepresentation;

- (id)titleText;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)serverRepresentationForReceivingPlayer:(id)a0;

@end
