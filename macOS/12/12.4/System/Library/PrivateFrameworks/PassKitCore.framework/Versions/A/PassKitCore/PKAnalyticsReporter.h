@class NSString, NSData, RTCReporting, RTCSecureHierarchyToken;

@interface PKAnalyticsReporter : NSObject {
    NSData *_archivedSessionToken;
    RTCReporting *_session;
    RTCSecureHierarchyToken *_sessionToken;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lockArchive;
    NSString *_subject;
}

+ (id)subjectToReportDashboardAnalyticsForFeature:(unsigned long long)a0;
+ (id)subjectToReportDashboardAnalyticsForPass:(id)a0;
+ (void)subject:(id)a0 sendEvent:(id)a1;
+ (id)subjectToReportDashboardAnalyticsForAccount:(id)a0;
+ (void)reportDashboardEventIfNecessary:(id)a0 forPass:(id)a1;
+ (void)endSubjectReporting:(id)a0;
+ (id)reporterForSubject:(id)a0;
+ (void)beginSubjectReporting:(id)a0;
+ (id)subjectDictionary;
+ (id)subjectSessionStateDateDictionary;
+ (void)subject:(id)a0 category:(long long)a1 sendEvent:(id)a2;
+ (void)subjects:(id)a0 category:(long long)a1 sendEvent:(id)a2;
+ (void)beginSubjectReporting:(id)a0 withArchivedParent:(id)a1;
+ (void)subjects:(id)a0 sendEvent:(id)a1;
+ (void)sendSingularEvent:(id)a0;
+ (id)archivedSessionTokenForSubject:(id)a0;

- (void).cxx_destruct;
- (void)sendEvent:(id)a0;
- (id)initWithSubject:(id)a0;
- (id)initWithArchivedParent:(id)a0 subject:(id)a1;
- (void)sendEvent:(id)a0 withCategory:(long long)a1;
- (id)archivedSessionToken;
- (id)initWithParentToken:(id)a0 subject:(id)a1;
- (id)initWithParent:(id)a0 subject:(id)a1;

@end
