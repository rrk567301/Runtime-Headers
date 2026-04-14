@class NSHashTable, NSXPCConnection;

@interface MSPMapsPushDaemonRemoteProxy : NSObject <MSPMapsPushDaemonProxy, MSPMapsPushDaemonProxyObserver> {
    NSXPCConnection *_connection;
    NSHashTable *_observers;
}

+ (id)sharedInstance;

- (id)_connection;
- (void)simulateUGCPhotoSubmissionResolution;
- (void)clearBulletinWithRecordID:(id)a0;
- (void)clearLowFuelAlertBulletin;
- (id)_remoteObjectProxy;
- (id)init;
- (void)clearMapsSuggestionsBulletin;
- (void)clearPredictedRouteTrafficIncidentBulletin;
- (void)addObserver:(id)a0;
- (void)closeConnection;
- (void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)a0;
- (void)handleMapsApplicationRemoval:(id /* block */)a0;
- (void)fetchCurrentAnnouncement:(id /* block */)a0;
- (void)clearParkedCarBulletin;
- (void).cxx_destruct;
- (void)clearCurrentAnnouncement;
- (void)showLowFuelAlertBulletinForLowFuelDetails:(id)a0;
- (void)showVenueBulletinWithTitle:(id)a0 message:(id)a1 actionURL:(id)a2;
- (void)showMapsSuggestionsBulletinWithTitle:(id)a0 message:(id)a1 actionURL:(id)a2;
- (void)showTrafficIncidentAlertWithID:(id)a0 withReroute:(BOOL)a1 title:(id)a2 description:(id)a3;
- (void)_clearConnection;
- (void)showParkedCarBulletinForEvent:(id)a0;
- (void)resetAnnouncements;
- (void)removeObserver:(id)a0;
- (void)fetchDevicePushToken:(id /* block */)a0;
- (void)simulateRAPStatusChangeNotification;
- (void)clearVenueBulletin;
- (void)simulateProblemResolution;
- (void)addSufficientVisitsNotification:(id)a0 message:(id)a1;
- (void)_connectToDaemonIfNeeded;
- (void)clearTrafficIncidentBulletinWithAlertID:(id)a0;
- (void)simulateUGCPhotoAttributionClearedNotification;
- (void)pushDaemonProxyReceivedNotificationData:(id)a0 forType:(id)a1 recordIdentifier:(id)a2;
- (void)showParkedCarReplacementBulletinForEvent:(id)a0 replacingEvent:(id)a1;

@end
