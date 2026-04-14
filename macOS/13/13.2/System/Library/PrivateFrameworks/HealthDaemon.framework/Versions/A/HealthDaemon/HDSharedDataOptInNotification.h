@class NSString;

@interface HDSharedDataOptInNotification : HDNanoHealthNotification {
    NSString *_guardianDisplayName;
}

+ (id)category;

- (void).cxx_destruct;
- (id)title;
- (unsigned long long)destinations;
- (id)body;
- (id)initWithNotificationManager:(id)a0 guardianDisplayName:(id)a1;

@end
