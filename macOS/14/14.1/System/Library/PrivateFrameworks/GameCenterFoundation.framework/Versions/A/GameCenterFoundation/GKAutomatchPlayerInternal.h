@class NSString;

@interface GKAutomatchPlayerInternal : GKSpecialPlayerInternal

@property (nonatomic) long long automatchPosition;
@property (readonly, nonatomic) NSString *automatchPositionDisplayString;

+ (BOOL)supportsSecureCoding;

- (id)alias;
- (id)playerID;
- (id)gamePlayerIDForBundleID:(id)a0;
- (BOOL)isAutomatchPlayer;
- (id)teamPlayerIDForBundleID:(id)a0;

@end
