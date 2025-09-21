@class NSString;

@interface GKAutomatchPlayerInternal : GKSpecialPlayerInternal

@property (nonatomic) long long automatchPosition;
@property (readonly, nonatomic) NSString *automatchPositionDisplayString;

+ (char)supportsSecureCoding;

- (id)alias;
- (id)playerID;
- (char)isAutomatchPlayer;

@end
