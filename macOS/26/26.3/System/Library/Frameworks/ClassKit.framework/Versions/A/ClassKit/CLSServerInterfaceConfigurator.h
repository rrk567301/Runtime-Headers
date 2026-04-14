@class NSSet, NSXPCInterface;

@interface CLSServerInterfaceConfigurator : NSObject {
    NSXPCInterface *_interface;
    NSSet *_contextsSet;
    NSSet *_arraySet;
}

- (void)configureAssetSupportAPI;
- (void)configureAppsAPI;
- (void)configureHandoutAPI;
- (void)configureAuthorizationStatusAPI;
- (void)configureUserNotificationAPI;
- (void)configureStudentActivityAPI;
- (void)configureClassAPI;
- (void)configureUtilityServerAPI;
- (id)init;
- (void)configureRelayRequestAPI;
- (void)configureAdminRequestAPI;
- (void)configureContextAPI;
- (void)configureDashboardAppAPI;
- (void)configureFeatureAvailabilityAPI;
- (id)configureServerInterface;
- (void).cxx_destruct;
- (void)configureInsightEventsAPI;
- (void)configureDataObserverAPI;
- (void)configureSurveyAnswerAPI;
- (void)configureSaveAPI;
- (void)configureCollaborationStateAPI;
- (void)configureCollectionsAPI;
- (void)configureProgressReportingAPI;
- (void)configureRosterQueryAPI;
- (void)configureQueryAPI;

@end
