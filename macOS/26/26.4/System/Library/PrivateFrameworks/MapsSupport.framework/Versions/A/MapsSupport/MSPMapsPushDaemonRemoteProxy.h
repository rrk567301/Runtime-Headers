@class NSHashTable, NSXPCConnection;

@interface MSPMapsPushDaemonRemoteProxy : NSObject <MSPMapsPushDaemonProxy, MSPMapsPushDaemonProxyObserver> {
    NSXPCConnection *_connection;
    NSHashTable *_observers;
}

+ (id)sharedInstance;

- (void)closeConnection;
- (void)showParkedCarReplacementBulletinForEvent:(id)a0 replacingEvent:(id)a1;
- (void)clearVenueBulletin;
- (void)addSufficientVisitsNotification:(id)a0 message:(id)a1;
- (id)_connection;
- (void)clearTrafficIncidentBulletinWithAlertID:(id)a0;
- (void)resetAnnouncements;
- (void)showTrafficIncidentAlertWithID:(id)a0 withReroute:(BOOL)a1 title:(id)a2 description:(id)a3;
- (void)simulateUGCPhotoSubmissionResolution;
- (void)fetchDevicePushToken:(id /* block */)a0;
- (void)clearPredictedRouteTrafficIncidentBulletin;
- (void)simulateUGCPhotoAttributionClearedNotification;
- (void)clearCurrentAnnouncement;
- (void)clearLowFuelAlertBulletin;
- (void)_clearConnection;
- (void)showLowFuelAlertBulletinForLowFuelDetails:(id)a0;
- (void)simulateProblemResolution;
- (void)simulateRAPStatusChangeNotification;
- (void)_connectToDaemonIfNeeded;
- (void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)a0;
- (void).cxx_destruct;
- (void)handleMapsApplicationRemoval:(id /* block */)a0;
- (void)fetchCurrentAnnouncement:(id /* block */)a0;
- (void)showParkedCarBulletinForEvent:(id)a0;
- (void)addObserver:(id)a0;
- (void)pushDaemonProxyReceivedNotificationData:(id)a0 forType:(id)a1 recordIdentifier:(id)a2;
- (id)init;
- (void)clearMapsSuggestionsBulletin;
- (void)removeObserver:(id)a0;
- (void)clearBulletinWithRecordID:(id)a0;
- (void)showVenueBulletinWithTitle:(id)a0 message:(id)a1 actionURL:(id)a2;
- (id)_remoteObjectProxy;
- (void)clearParkedCarBulletin;
- (void)showMapsSuggestionsBulletinWithTitle:(id)a0 message:(id)a1 actionURL:(id)a2;

@end
