@interface ICMusicSubscriptionFairPlayKeyStatus : NSObject <NSCopying>

@property (nonatomic) unsigned long long accountUniqueIdentifier;
@property (nonatomic) BOOL hasOnlinePlaybackKeys;
@property (nonatomic) BOOL hasOfflinePlaybackKeys;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
