@class NSString, GKInviteInternal, NSData, GKPlayer;

@interface GKInvite : NSObject

@property (retain) GKInviteInternal *internal;
@property (readonly, nonatomic) NSString *inviteID;
@property (readonly, nonatomic) NSData *sessionToken;
@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) BOOL isNearby;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, retain) GKPlayer *sender;
@property (readonly, getter=isHosted) BOOL hosted;
@property (readonly) unsigned long long playerGroup;
@property (readonly) unsigned int playerAttributes;
@property (readonly, retain) NSString *inviter;

+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)instanceMethodSignatureForSelector:(SEL)a0;

- (id)valueForUndefinedKey:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithInternalRepresentation:(id)a0;
- (id)inviter;

@end
