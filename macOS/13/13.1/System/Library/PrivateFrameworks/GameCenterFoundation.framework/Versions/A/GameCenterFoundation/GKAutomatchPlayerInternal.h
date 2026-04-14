@class NSString;

@interface GKAutomatchPlayerInternal : GKSpecialPlayerInternal

@property (nonatomic) long long automatchPosition;
@property (readonly, nonatomic) NSString *automatchPositionDisplayString;

+ (BOOL)supportsSecureCoding;

- (id)alias;
- (id)playerID;
- (id)gamePlayerID;
- (id)teamPlayerID;
- (BOOL)isAutomatchPlayer;

@end
