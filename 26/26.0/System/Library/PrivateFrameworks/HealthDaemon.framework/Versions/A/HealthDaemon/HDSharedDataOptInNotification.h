@class NSString;

@interface HDSharedDataOptInNotification : HDNanoHealthNotification {
    NSString *_guardianDisplayName;
}

+ (id)category;

- (id)body;
- (unsigned long long)destinations;
- (id)title;
- (void).cxx_destruct;
- (id)initWithNotificationManager:(id)a0 guardianDisplayName:(id)a1;

@end
