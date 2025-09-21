@class NSDate, GKPlayerInternal;

@interface GKAchievementThatAFriendHasInternal : GKInternalRepresentation

@property (retain, nonatomic) GKPlayerInternal *friendPlayer;
@property (retain, nonatomic) NSDate *timestamp;

+ (char)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;

@end
