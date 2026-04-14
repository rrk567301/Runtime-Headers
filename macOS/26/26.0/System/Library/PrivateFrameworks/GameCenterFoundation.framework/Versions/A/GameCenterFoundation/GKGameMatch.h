@class GKGame, GKPlayer, NSDate, GKRecentMatchInternal;

@interface GKGameMatch : NSObject

@property (retain) GKRecentMatchInternal *internal;
@property (retain, nonatomic) GKPlayer *player;
@property (retain, nonatomic) GKGame *game;
@property (retain, nonatomic) NSDate *date;

+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)instanceMethodSignatureForSelector:(SEL)a0;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)init;
- (id)valueForUndefinedKey:(id)a0;
- (id)description;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithInternalRepresentation:(id)a0 game:(id)a1;

@end
