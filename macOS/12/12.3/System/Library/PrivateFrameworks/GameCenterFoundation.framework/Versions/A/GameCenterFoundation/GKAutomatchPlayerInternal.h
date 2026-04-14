@class NSString;

@interface GKAutomatchPlayerInternal : GKSpecialPlayerInternal

@property (nonatomic) long long automatchPosition;
@property (readonly, nonatomic) NSString *automatchPositionDisplayString;

+ (BOOL)supportsSecureCoding;

- (id)alias;
- (id)playerID;
- (id)teamPlayerID;
- (id)gamePlayerID;
- (BOOL)isAutomatchPlayer;

@end
