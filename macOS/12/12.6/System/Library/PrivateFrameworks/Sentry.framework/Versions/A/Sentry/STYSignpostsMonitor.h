@class STYAbcHelper, NSDate, NSObject, SignpostSupportObjectExtractor;
@protocol OS_dispatch_queue;

@interface STYSignpostsMonitor : NSObject

@property (retain) SignpostSupportObjectExtractor *notificationExtractor;
@property (retain) NSObject<OS_dispatch_queue> *spObjectProcessingQueue;
@property (retain) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain) NSDate *lastTailspinRequestForDelayedNotifications;
@property (retain) NSDate *lastTailspinRequest;
@property unsigned int timeToReconnectWithDiagnosticd;
@property unsigned int eventCount;
@property BOOL autoUploadThroughAbc;
@property BOOL seedUserMode;
@property (retain) STYAbcHelper *abcHelper;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (id)initPrivate;
- (void)processEmittedEvent:(id)a0;
- (void)reportLatencyToReceiveSignposts:(id)a0;
- (id)tailspinFilenamePrefixForInterval:(id)a0;
- (void)perfProblemDetectedOnMac:(id)a0;
- (void)processInterval:(id)a0;
- (void)notificationStreamTerminated:(id)a0 unmatchedIntervalStarts:(id)a1;
- (BOOL)startListeningForNotifications;
- (void)setupNotificationPipeline;
- (void)perfProblemDetected:(id)a0 tailspinFilenamePrefix:(id)a1;
- (BOOL)monitorSignposts:(BOOL)a0;
- (void)stopMonitoringSignposts;

@end
