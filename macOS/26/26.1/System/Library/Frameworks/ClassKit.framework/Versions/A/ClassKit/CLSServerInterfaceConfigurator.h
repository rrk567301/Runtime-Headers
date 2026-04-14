@class NSSet, NSXPCInterface;

@interface CLSServerInterfaceConfigurator : NSObject {
    NSXPCInterface *_interface;
    NSSet *_contextsSet;
    NSSet *_arraySet;
}

- (void)configureAuthorizationStatusAPI;
- (void)configureCollaborationStateAPI;
- (void)configureHandoutAPI;
- (void)configureQueryAPI;
- (void)configureRelayRequestAPI;
- (void)configureSaveAPI;
- (void)configureCollectionsAPI;
- (void)configureInsightEventsAPI;
- (void)configureSurveyAnswerAPI;
- (void)configureDataObserverAPI;
- (void)configureAppsAPI;
- (void)configureUserNotificationAPI;
- (void)configureDashboardAppAPI;
- (void)configureFeatureAvailabilityAPI;
- (void)configureContextAPI;
- (void)configureAssetSupportAPI;
- (void).cxx_destruct;
- (void)configureStudentActivityAPI;
- (void)configureUtilityServerAPI;
- (void)configureProgressReportingAPI;
- (void)configureClassAPI;
- (void)configureAdminRequestAPI;
- (id)configureServerInterface;
- (id)init;
- (void)configureRosterQueryAPI;

@end
