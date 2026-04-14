@class GKAchievementInternal;

@interface GKAchievementChallengeInternal : GKChallengeInternal

@property (copy, nonatomic) GKAchievementInternal *achievement;

+ (id)internalRepresentation;
+ (id)secureCodedPropertyKeys;

- (unsigned long long)type;
- (void).cxx_destruct;
- (id)titleText;
- (id)serverRepresentationForReceivingPlayer:(id)a0;

@end
