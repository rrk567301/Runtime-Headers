@class IASignalAnalyticsObject, NSObject;
@protocol OS_dispatch_source;

@interface IASSafariAnalyzer : IASDailyGarbageCollectionAnalyzer

@property (retain, nonatomic) NSObject<OS_dispatch_source> *pendingTerminationTimer;
@property (nonatomic) BOOL sessionHasEnded;
@property (retain, nonatomic) IASignalAnalyticsObject *searchEnteredSignal;

- (void).cxx_destruct;
- (void)terminateSession;
- (void)consumeAction:(id)a0;
- (void)cancelTerminationTimer;
- (unsigned long long)countOccurrencesOfString:(id)a0 inString:(id)a1;
- (void)handleSignal:(id)a0;
- (void)handleSignalKeyPressed:(id)a0;
- (void)handleSignalSearchEntered:(id)a0;
- (void)handleSignalTextInputActionsDidSessionBegin:(id)a0;
- (void)handleSignalTextInputActionsDidSessionEnd:(id)a0;
- (void)pendingTerminationTimerExpired;
- (void)publishSearchSummaryEvent;
- (long long)scaleMaybeNumber:(id)a0 by:(id)a1;
- (BOOL)string:(id)a0 containsAnyOf:(id)a1;
- (unsigned long long)translateMatchType:(unsigned long long)a0;

@end
