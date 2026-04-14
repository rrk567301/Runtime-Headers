@class STYAbcHelper, NSDate, NSObject, SignpostSupportObjectExtractor;
@protocol OS_dispatch_queue;

@interface STYSignpostsMonitor : NSObject

@property (retain) SignpostSupportObjectExtractor *notificationExtractor;
@property (retain) SignpostSupportObjectExtractor *appLaunchNotificationExtractor;
@property (retain) NSObject<OS_dispatch_queue> *spObjectProcessingQueue;
@property (retain) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain) NSDate *lastTailspinRequestForDelayedNotifications;
@property (retain) NSDate *lastTailspinRequest;
@property unsigned int timeToReconnectWithDiagnosticd;
@property unsigned int eventCount;
@property BOOL autoUploadThroughAbc;
@property BOOL seedUserMode;
@property (retain) STYAbcHelper *abcHelper;
@property unsigned int backOffTimetoReconnectWithDiagnosticd;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (id)initPrivate;
- (void)processEmittedEvent:(id)a0;
- (void)appLaunchNotificationStreamTerminated:(id)a0 unmatchedIntervalStarts:(id)a1;
- (BOOL)monitorAppLaunchSignposts;
- (BOOL)monitorSignposts:(BOOL)a0;
- (void)notificationStreamTerminated:(id)a0 unmatchedIntervalStarts:(id)a1;
- (void)perfProblemDetected:(id)a0 tailspinFilenamePrefix:(id)a1;
- (void)perfProblemDetectedOnMac:(id)a0;
- (void)processAppLaunch:(id)a0 tailspinFilenamePrefix:(id)a1 duration:(id)a2 andPID:(id)a3;
- (void)processAppLaunchInterval:(id)a0;
- (void)processInterval:(id)a0;
- (void)reportLatencyToReceiveSignposts:(id)a0;
- (void)setupNotificationPipeline;
- (void)setupSignpostPipeline;
- (BOOL)startListeningForNotifications;
- (BOOL)startStreamingSignposts;
- (void)stopMonitoringAppLaunchSignposts;
- (void)stopMonitoringSignposts;
- (id)tailspinFilenamePrefixForInterval:(id)a0;

@end
