@class HMDCameraClipUploader, HMDDataStreamFragment, NSUUID, HMDCameraRecordingSessionTimelineManager, NSObject, HMBLocalZone, HMIVideoFragment, HMFActivity, HMDCameraProfile, NSDictionary, NSString, HMDCameraRecordingSessionVariantFragmentManager, NSNumber, NSData, HMDCameraRecordingSessionSignificantEventManager, HMIVideoAnalyzerFragmentResult;
@protocol HMDCameraRecordingSessionVideoAnalyzer, HMDCameraRecordingSessionDelegate, OS_dispatch_queue, HMDCameraRecordingSessionFactory;

@interface HMDCameraRecordingSession : HMFObject <HMFLogging, HMDCameraRecordingSessionVideoAnalyzerDelegate, HMDCameraClipUploaderDelegate, HMDCameraRecordingSessionVariantFragmentManagerDelegate>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMDCameraProfile *camera;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) HMBLocalZone *localZone;
@property (readonly) id<HMDCameraRecordingSessionFactory> factory;
@property (readonly) id<HMDCameraRecordingSessionVideoAnalyzer> videoAnalyzer;
@property (readonly) HMFActivity *sessionActivity;
@property (readonly) HMDCameraRecordingSessionSignificantEventManager *significantEventManager;
@property (readonly) HMDCameraRecordingSessionVariantFragmentManager *timelapseFragmentManager;
@property (readonly) unsigned long long recordingEventTriggers;
@property char noMoreFragmentsAvailable;
@property (getter=isActive) char active;
@property unsigned long long currentFragmentNumber;
@property unsigned long long pendingFragmentsCount;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } clipStartTime;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } timelapseClipStartTime;
@property (retain) HMDCameraClipUploader *clipUploader;
@property (retain) HMDCameraClipUploader *timelapseClipUploader;
@property (retain) HMDDataStreamFragment *cameraVideoInitFragment;
@property (retain) HMIVideoFragment *introFragment;
@property (retain) HMIVideoAnalyzerFragmentResult *introAnalyzerResult;
@property (retain) NSData *analysisVideoInitData;
@property (retain) NSData *analysisTimelapseVideoInitData;
@property (copy) NSNumber *remainingRecordingExtensionDuration;
@property (copy) NSString *sessionDirectoryPath;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) double configuredFragmentDuration;
@property (readonly) HMDCameraRecordingSessionTimelineManager *timelineManager;
@property (weak) id<HMDCameraRecordingSessionDelegate> delegate;
@property (readonly, copy) NSDictionary *stateDump;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (void)configure;
- (id)attributeDescriptions;
- (id)activityZones;
- (void)_writeEvent:(id)a0;
- (char)_shouldEndSessionAfterFragment:(id)a0;
- (void)handleFragment:(id)a0;
- (void)_writeFragment:(id)a0;
- (char)_createSessionDirectory;
- (void)_endSessionWithError:(id)a0;
- (void)_finishCurrentClipUploader;
- (void)_finishCurrentTimelapseClipUploader;
- (void)_handleDidFailAnalysisWithError:(id)a0;
- (void)_handleFragmentResult:(id)a0;
- (char)_isValidFirstSessionFragment:(id)a0;
- (char)_isValidNonFirstSessionFragment:(id)a0;
- (void)_notifyForAnalyzerResult:(id)a0 fragment:(id)a1 timeOffsetWithinClip:(double)a2 recordingEventTriggers:(unsigned long long)a3;
- (void)_notifyForSignificantEvent:(id)a0 recordingEventTriggers:(unsigned long long)a1 fragmentNumber:(unsigned long long)a2;
- (char)_shouldRecordFragmentWithAnalyzerResult:(id)a0 sequenceNumber:(unsigned long long)a1 recordingEventTriggers:(unsigned long long)a2 fragmentAnalyzedEvent:(id)a3;
- (char)_shouldWriteSessionLogToDisk;
- (void)_submitNotificationSuccessMetricWithRecordingEventTriggers:(unsigned long long)a0 fragmentNumber:(unsigned long long)a1;
- (void)_uploadFragment:(id)a0 withDuration:(double)a1 clipFinalizedBecauseMaxDurationExceeded:(char)a2;
- (void)_uploadTimelapseFragment:(id)a0;
- (char)activityZonesIncludedForSignificantEventDetection;
- (void)analyzer:(id)a0 didAnalyzeFragmentWithResult:(id)a1;
- (void)analyzer:(id)a0 didAnalyzeFrameWithResult:(id)a1;
- (void)analyzer:(id)a0 didCreateTimelapseFragment:(id)a1;
- (void)analyzer:(id)a0 didFailWithError:(id)a1;
- (void)handleMotionActive:(char)a0;
- (void)handleNoMoreFragmentsAvailable;
- (id)initWithWorkQueue:(id)a0 camera:(id)a1 hapAccessory:(id)a2 home:(id)a3 localZone:(id)a4 configuredFragmentDuration:(double)a5 timelineManager:(id)a6;
- (id)initWithWorkQueue:(id)a0 camera:(id)a1 hapAccessory:(id)a2 home:(id)a3 localZone:(id)a4 configuredFragmentDuration:(double)a5 timelineManager:(id)a6 factory:(id)a7;
- (void)uploaderDidFailUpload:(id)a0;
- (void)variantFragmentManager:(id)a0 didSelectVariantFragment:(id)a1 overlapsFullFragment:(char)a2;

@end
