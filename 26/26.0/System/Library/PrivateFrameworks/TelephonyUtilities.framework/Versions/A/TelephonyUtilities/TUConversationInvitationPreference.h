@class NSSet;

@interface TUConversationInvitationPreference : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) NSSet *standardInvitationPreferencesForLink;
@property (class, readonly, nonatomic) NSSet *letMeInResponseInvitationPreferences;
@property (class, readonly, nonatomic) NSSet *noNotificationInvitationPreferences;
@property (class, readonly, nonatomic) NSSet *incomingCallInvitationPreferences;
@property (class, readonly, nonatomic) NSSet *incomingCallAndNotificationInvitationPreferences;
@property (class, readonly, nonatomic) NSSet *screenShareRequestInvitationPreferences;
@property (class, readonly, nonatomic) NSSet *shareMyScreenInvitationPreferences;
@property (class, readonly, nonatomic) NSSet *nearbyInvitationPreferences;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long handleType;
@property (readonly, nonatomic) long long notificationStyles;

+ (id)invitationPreferencesForAllHandlesWithStyles:(long long)a0;
+ (long long)validateNotificationStyles:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithHandleType:(long long)a0 notificationStyles:(long long)a1;
- (BOOL)isEqualToInvitationPreference:(id)a0;

@end
