@class NSSet;

@interface TUConversationInvitationPreference : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) NSSet *standardInvitationPreferencesForLink;
@property (class, readonly, nonatomic) NSSet *letMeInResponseInvitationPreferences;
@property (class, readonly, nonatomic) NSSet *noNotificationInvitationPreferences;
@property (class, readonly, nonatomic) NSSet *incomingCallInvitationPreferences;
@property (class, readonly, nonatomic) NSSet *incomingCallAndNotificationInvitationPreferences;
@property (class, readonly, nonatomic) NSSet *screenShareRequestInvitationPreferences;
@property (class, readonly, nonatomic) NSSet *shareMyScreenInvitationPreferences;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long handleType;
@property (readonly, nonatomic) long long notificationStyles;

+ (id)invitationPreferencesForAllHandlesWithStyles:(long long)a0;
+ (long long)validateNotificationStyles:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHandleType:(long long)a0 notificationStyles:(long long)a1;
- (char)isEqualToInvitationPreference:(id)a0;

@end
