@interface _TtCV26SensitiveContentAnalysisUI9Callbacks14LegacyDelegate : NSObject <SCUIMoreHelpMenuDelegate, SCUIInterventionViewControllerDelegate, SCUIReportToAuthoritiesDelegate> {
    void /* unknown type, empty encoding */ callbacks;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (void)didCancel:(id)a0;
- (id)init;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)didShowContent:(id)a0;
- (void)didUnsubscribe:(id)a0;
- (void)didAskForMoreHelp:(id)a0;
- (void)didBlockContact:(id)a0;
- (void)didBlockContacts:(id)a0;
- (void)didBypassInterventionWithUpdatedAnalyses:(id)a0 container:(id)a1;
- (void)didConfirmForInterventionViewController:(id)a0;
- (void)didContactSomeoneForInterventionViewController:(id)a0;
- (void)didDeleteItem:(id)a0;
- (void)didFinalRejectForInterventionViewController:(id)a0;
- (void)didHidePhoto:(id)a0;
- (void)didLeaveConversation:(id)a0;
- (void)didMessageSomeone:(id)a0;
- (void)didRejectForInterventionViewController:(id)a0;
- (void)didRequestMoreHelpForInterventionViewController:(id)a0;

@end
