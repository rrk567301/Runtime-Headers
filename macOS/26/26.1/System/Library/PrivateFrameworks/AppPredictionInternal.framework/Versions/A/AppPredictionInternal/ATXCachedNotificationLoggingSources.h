@class BMSource, ATXStableContactRepresentationDatastore, ATXUserNotificationBiomeStream;

@interface ATXCachedNotificationLoggingSources : NSObject

@property (readonly) ATXUserNotificationBiomeStream *userNotificationBiomeStream;
@property (readonly) BMSource *notificationUsageSource;
@property (readonly) ATXStableContactRepresentationDatastore *contactRepresentationDatastore;

- (void).cxx_destruct;
- (id)init;

@end
