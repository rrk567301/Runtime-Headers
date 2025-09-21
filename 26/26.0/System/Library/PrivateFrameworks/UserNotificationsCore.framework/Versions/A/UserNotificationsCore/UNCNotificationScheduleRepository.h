@class UNCKeyedDictionaryRepository, NSObject;
@protocol OS_dispatch_queue;

@interface UNCNotificationScheduleRepository : NSObject {
    UNCKeyedDictionaryRepository *_repository;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)_dateFormatter;
- (void)notificationSourcesDidUninstall:(id)a0;
- (void).cxx_destruct;
- (id)allBundleIdentifiers;
- (void)_queue_removeScheduleForBundleIdentifier:(id)a0;
- (id)_queue_scheduleForBundleIdentifier:(id)a0;
- (void)_queue_setSchedule:(id)a0 forBundleIdentifier:(id)a1;
- (id)initWithDirectory:(id)a0 librarian:(id)a1;
- (void)removeScheduleForBundleIdentifier:(id)a0;
- (id)scheduleForBundleIdentifier:(id)a0;
- (void)setSchedule:(id)a0 forBundleIdentifier:(id)a1;

@end
