@class GKGame, GKPlayer, NSDate, GKRecentMatchInternal;

@interface GKGameMatch : NSObject

@property (retain) GKRecentMatchInternal *internal;
@property (retain, nonatomic) GKPlayer *player;
@property (retain, nonatomic) GKGame *game;
@property (retain, nonatomic) NSDate *date;

+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (char)instancesRespondToSelector:(SEL)a0;

- (id)description;
- (id)forwardingTargetForSelector:(SEL)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)initWithInternalRepresentation:(id)a0 game:(id)a1;

@end
