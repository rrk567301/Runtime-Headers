@class NSString, NSArray, UNNotification;

@interface SKIAnnounceNotificationDirectInvocationPayload : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) UNNotification *notification;
@property (copy, nonatomic) NSString *appBundleId;
@property (copy, nonatomic) NSString *appBundleIdOfLastAnnouncement;
@property (nonatomic) unsigned long long synchronousBurstIndex;
@property (nonatomic) char isMediaPlaying;
@property (nonatomic) char isSameTypeAsLastAnnouncement;
@property (nonatomic) double timeSinceLastAnnouncement;
@property (nonatomic) long long announcementPlatform;
@property (nonatomic) char isBobbleCapableAnnouncement;
@property (copy, nonatomic) NSArray *summaries;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)notificationIdentifier;
- (id)initWithNotification:(id)a0 appBundleId:(id)a1 appBundleIdOfLastAnnouncement:(id)a2 synchronousBurstIndex:(unsigned long long)a3 isSameTypeAsLastAnnouncement:(char)a4 timeSinceLastAnnouncement:(double)a5 announcementPlatform:(long long)a6 isMediaPlaying:(char)a7;
- (id)initWithNotification:(id)a0 appBundleId:(id)a1 appBundleIdOfLastAnnouncement:(id)a2 synchronousBurstIndex:(unsigned long long)a3 isSameTypeAsLastAnnouncement:(char)a4 timeSinceLastAnnouncement:(double)a5 announcementPlatform:(long long)a6 isMediaPlaying:(char)a7 isBobbleCapableAnnouncement:(char)a8 summaries:(id)a9;

@end
