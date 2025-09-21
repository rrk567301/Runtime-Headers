@class NSSet, TUConversationPresentationContext;

@interface TUConversationHandoffContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL prefersToPlayDuringWombat;
@property (copy, nonatomic) NSSet *invitationPreferences;
@property (copy, nonatomic) TUConversationPresentationContext *presentationContext;
@property (nonatomic) BOOL setUplinkMuted;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToHandoffContext:(id)a0;

@end
