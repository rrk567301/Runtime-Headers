@class NSSet, NSXPCInterface;

@interface CLSServerInterfaceConfigurator : NSObject {
    NSXPCInterface *_interface;
    NSSet *_contextsSet;
    NSSet *_arraySet;
    NSSet *_sortDescriptorsSet;
}

- (id)init;
- (void).cxx_destruct;
- (id)configureServerInterface;
- (void)configureQueryAPI;
- (void)configureSaveAPI;
- (void)configureDataObserverAPI;
- (void)configureContextAPI;
- (void)configureProgressReportingAPI;
- (void)configureDashboardAppAPI;
- (void)configureAppsAPI;
- (void)configureUserNotificationAPI;
- (void)configureUtilityServerAPI;
- (void)configureAuthorizationStatusAPI;
- (void)configureHandoutAPI;
- (void)configureCollectionsAPI;
- (void)configureCollaborationStateAPI;
- (void)configureClassAPI;
- (void)configureStudentActivityAPI;
- (void)configureFeatureAvailabilityAPI;
- (void)configureAssetSupportAPI;
- (void)configureAdminRequestAPI;
- (void)configureSurveyAnswerAPI;
- (void)configureRelayRequestAPI;
- (void)configureInsightEventsAPI;

@end
