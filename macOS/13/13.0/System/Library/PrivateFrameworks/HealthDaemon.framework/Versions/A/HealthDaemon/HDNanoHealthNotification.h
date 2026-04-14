@class HDNotificationManager;

@interface HDNanoHealthNotification : NSObject {
    HDNotificationManager *_notificationManager;
}

+ (id)category;

- (void).cxx_destruct;
- (id)title;
- (unsigned long long)destinations;
- (id)body;
- (id)initWithNotificationManager:(id)a0;
- (void)triggerNotification;

@end
