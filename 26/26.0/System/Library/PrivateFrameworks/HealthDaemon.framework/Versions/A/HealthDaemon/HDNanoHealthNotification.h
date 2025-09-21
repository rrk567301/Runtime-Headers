@class HDNotificationManager;

@interface HDNanoHealthNotification : NSObject {
    HDNotificationManager *_notificationManager;
}

+ (id)category;

- (id)body;
- (unsigned long long)destinations;
- (id)title;
- (void).cxx_destruct;
- (id)initWithNotificationManager:(id)a0;
- (void)triggerNotification;

@end
