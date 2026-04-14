@class NSHashTable, NSXPCConnection;

@interface MSPMapsPushDaemonRemoteProxy : NSObject <MSPMapsPushDaemonProxyObserver, MSPMapsPushDaemonProxy> {
    NSXPCConnection *_connection;
    NSHashTable *_observers;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)_connection;
- (void)showParkedCarBulletinForEvent:(id)a0;
- (void)showParkedCarReplacementBulletinForEvent:(id)a0 replacingEvent:(id)a1;
- (void)clearParkedCarBulletin;
- (id)_remoteObjectProxy;
- (void)closeConnection;
- (void)_clearConnection;
- (void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)a0;
- (void)simulateProblemResolution;
- (void)simulateUGCPhotoSubmissionResolution;
- (void)simulateUGCPhotoAttributionClearedNotification;
- (void)fetchDevicePushToken:(id /* block */)a0;
- (void)clearCurrentAnnouncement;
- (void)resetAnnouncements;
- (void)fetchCurrentAnnouncement:(id /* block */)a0;
- (void)clearBulletinWithRecordID:(id)a0;
- (void)showMapsSuggestionsBulletinWithTitle:(id)a0 message:(id)a1 actionURL:(id)a2;
- (void)clearMapsSuggestionsBulletin;
- (void)showVenueBulletinWithTitle:(id)a0 message:(id)a1 actionURL:(id)a2;
- (void)clearVenueBulletin;
- (void)showTrafficIncidentAlertWithID:(id)a0 withReroute:(BOOL)a1 title:(id)a2 description:(id)a3;
- (void)clearTrafficIncidentBulletinWithAlertID:(id)a0;
- (void)clearPredictedRouteTrafficIncidentBulletin;
- (void)showLowFuelAlertBulletinForLowFuelDetails:(id)a0;
- (void)clearLowFuelAlertBulletin;
- (void)handleMapsApplicationRemoval:(id /* block */)a0;
- (void)pushDaemonProxyReceivedNotificationData:(id)a0 forType:(id)a1 recordIdentifier:(id)a2;
- (void)_connectToDaemonIfNeeded;

@end
