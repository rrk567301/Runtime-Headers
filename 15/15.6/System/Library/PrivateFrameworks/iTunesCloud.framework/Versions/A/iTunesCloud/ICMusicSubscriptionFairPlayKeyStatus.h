@interface ICMusicSubscriptionFairPlayKeyStatus : NSObject <NSCopying>

@property (nonatomic) unsigned long long accountUniqueIdentifier;
@property (nonatomic) char hasOnlinePlaybackKeys;
@property (nonatomic) char hasOfflinePlaybackKeys;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (id)initWithFairPlaySubscriptionInfo:(struct FPSubscriptionInfo_ { unsigned long long x0; int x1; })a0;

@end
