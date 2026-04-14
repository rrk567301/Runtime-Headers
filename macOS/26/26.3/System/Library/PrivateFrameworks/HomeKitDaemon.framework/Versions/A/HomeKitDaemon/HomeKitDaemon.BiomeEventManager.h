@interface HomeKitDaemon.BiomeEventManager : NSObject {
    void /* unknown type, empty encoding */ actionSetStream;
    void /* unknown type, empty encoding */ mediaAccessoryStream;
    void /* unknown type, empty encoding */ hapAccessoryStream;
    void /* unknown type, empty encoding */ notificationCenter;
    void /* unknown type, empty encoding */ workQueue;
    void /* unknown type, empty encoding */ prunerProvider;
}

- (id)init;
- (void)_handleAccessoryRemovedNotification:(id)a0;
- (void).cxx_destruct;
- (void)deleteAllEvents;
- (void)_handleHomeRemovedNotification:(id)a0;
- (void)_handleActionSetEmptiedNotification:(id)a0;
- (void)_handleServiceRemovedNotification:(id)a0;
- (void)submitWithAccessoryEvent:(id)a0;
- (void)submitWithActionSetEvent:(id)a0;
- (void)submitWithMediaAccessoryEvent:(id)a0;

@end
