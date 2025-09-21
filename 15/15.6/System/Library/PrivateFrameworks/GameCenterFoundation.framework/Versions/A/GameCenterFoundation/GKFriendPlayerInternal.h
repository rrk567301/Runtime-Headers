@class NSString, GKGameInternal, NSDate;

@interface GKFriendPlayerInternal : GKFamiliarPlayerInternal {
    NSString *_status;
    NSDate *_lastPlayedDate;
    GKGameInternal *_lastPlayedGame;
    char _challengedTogether;
    GKGameInternal *_lastChallengedGame;
    NSDate *_lastChallengedDate;
}

+ (char)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)status;
- (void)setStatus:(id)a0;
- (id)lastPlayedDate;
- (void)setLastPlayedDate:(id)a0;
- (id)lastPlayedGame;
- (char)challengedTogether;
- (int)defaultFamiliarity;
- (char)isFriend;
- (id)lastChallengedDate;
- (id)lastChallengedGame;
- (void)setChallengedTogether:(char)a0;
- (void)setLastChallengedDate:(id)a0;
- (void)setLastChallengedGame:(id)a0;
- (void)setLastPlayedGame:(id)a0;

@end
