@class NSString, NSData, RTCReporting, NSObject;

@interface PKAnalyticsReporter : NSObject {
    NSData *_archivedSessionToken;
    RTCReporting *_session;
    NSObject *_sessionToken;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lockArchive;
    NSString *_subject;
}

+ (id)archivedSessionTokenForSubject:(id)a0;
+ (void)reportAppleCashSenderErrorPage:(id)a0;
+ (id)_isDTOSupported;
+ (id)pageTagForAppleCashSenderError:(id)a0;
+ (void)_attachFeatureTypeToEvent:(id)a0 forSubject:(id)a1;
+ (id)_authMethodFromResult:(id)a0;
+ (id)_eventTypeFromError:(id)a0;
+ (void)_isDTOPasscodeFallbackAllowed:(id /* block */)a0;
+ (id)_isDTOUserEnabled;
+ (void)_reportAutoFillEvent:(id)a0 pageTag:(id)a1 referralSource:(id)a2 additionalProperties:(id)a3;
+ (id)_stringFromBool:(BOOL)a0;
+ (id)analyticsErrorTextForError:(long long)a0;
+ (void)beginSubjectReporting:(id)a0;
+ (void)beginSubjectReporting:(id)a0 withArchivedParent:(id)a1;
+ (id)bucketValueForGroupSize:(unsigned long long)a0;
+ (id)bucketValueForIneligibleCount:(unsigned long long)a0;
+ (int)clientTypeForSubject:(id)a0;
+ (void)endSubjectReporting:(id)a0;
+ (void)reportAccountRewardsEventIfNecessary:(id)a0;
+ (void)reportAppleCashEvent:(id)a0 withMessagesContext:(id)a1;
+ (void)reportAppleCashSenderErrorPage:(id)a0 buttonTag:(id)a1;
+ (void)reportAutoFillActionEvent:(long long)a0 inView:(long long)a1 isInSettings:(BOOL)a2 additionalProperties:(id)a3;
+ (void)reportAutoFillCardCancelledDeletionInCardDetails:(BOOL)a0;
+ (void)reportAutoFillCardConfirmedDeletionInCardDetails:(BOOL)a0;
+ (void)reportAutoFillCardMarkedForDeletionInCardDetails:(BOOL)a0;
+ (void)reportAutoFillCardSelectedAndSupportsApplePay:(BOOL)a0;
+ (void)reportAutoFillSelectedFromMoreMenu;
+ (void)reportAutoFillViewDidAppear:(long long)a0 inSettings:(BOOL)a1 additionalProperties:(id)a2;
+ (void)reportCampaignIdentifier:(id)a0 eventType:(long long)a1 referralSource:(long long)a2 deepLinkType:(long long)a3 productType:(long long)a4;
+ (void)reportDTOAuthEndedWithResult:(id)a0 error:(id)a1 forSubject:(id)a2;
+ (void)reportDTOAuthEvent:(id)a0 forSubject:(id)a1;
+ (void)reportDashboardEventIfNecessary:(id)a0 forPass:(id)a1;
+ (id)reporterForSubject:(id)a0;
+ (void)sendSingularEvent:(id)a0;
+ (void)subject:(id)a0 category:(long long)a1 sendEvent:(id)a2;
+ (void)subject:(id)a0 sendEvent:(id)a1;
+ (id)subjectDictionary;
+ (id)subjectSessionStateDateDictionary;
+ (id)subjectToReportDashboardAnalyticsForAccount:(id)a0;
+ (id)subjectToReportDashboardAnalyticsForFeature:(unsigned long long)a0;
+ (id)subjectToReportDashboardAnalyticsForPass:(id)a0;
+ (void)subjects:(id)a0 category:(long long)a1 sendEvent:(id)a2;
+ (void)subjects:(id)a0 sendEvent:(id)a1;
+ (id)virtualCardReferralSource:(unsigned long long)a0;

- (void)sendEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithSubject:(id)a0;
- (id)initWithArchivedParent:(id)a0 subject:(id)a1;
- (id)_reportingSessionID;
- (id)archivedSessionToken;
- (double)clampSessionDurationFromMilliseconds:(long long)a0;
- (id)initWithParent:(id)a0 subject:(id)a1;
- (id)initWithParentToken:(id)a0 subject:(id)a1;
- (void)sendEvent:(id)a0 withCategory:(long long)a1;

@end
