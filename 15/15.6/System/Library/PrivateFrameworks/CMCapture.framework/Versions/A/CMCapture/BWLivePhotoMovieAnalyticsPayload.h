@class NSString, NSDictionary, NSNumber;

@interface BWLivePhotoMovieAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (copy, nonatomic) NSString *clientApplicationID;
@property (nonatomic) char recordingSucceeded;
@property (nonatomic) int errorStatus;
@property (nonatomic) int sessionStatus;
@property (nonatomic) char longPressMovie;
@property (nonatomic) char originalRecording;
@property (nonatomic) char hasStillImagePTS;
@property (nonatomic) double movieDurationInSeconds;
@property (nonatomic) double stillTimeOffsetInSeconds;
@property (nonatomic) double stillTimeOffsetToVideoPrerollStartInMilliseconds;
@property (nonatomic) double stillTimeOffsetToVideoPrerollStopInMilliseconds;
@property (nonatomic) double stillTimeOffsetToAudioPrerollStartInMilliseconds;
@property (nonatomic) double stillTimeOffsetToAudioPrerollStopInMilliseconds;
@property (nonatomic) char overlappingCapture;
@property (nonatomic) long long stagingNodeOverallNumberOfVideoFramesReceived;
@property (nonatomic) double stagingNodeOverallAverageTimeBetweenVideoFramesInMilliseconds;
@property (nonatomic) double stagingNodeOverallStandardDeviationOfTimeBetweenVideoFramesInMilliseconds;
@property (nonatomic) double stagingNodeOverallMinimumTimeBetweenVideoFramesInMilliseconds;
@property (nonatomic) double stagingNodeOverallMaximumTimeBetweenVideoFramesInMilliseconds;
@property (nonatomic) long long stagingNodeValveActiveNumberOfVideoFramesReceived;
@property (nonatomic) double stagingNodeValveActiveAverageTimeBetweenVideoFramesInMilliseconds;
@property (nonatomic) double stagingNodeValveActiveStandardDeviationOfTimeBetweenVideoFramesInMilliseconds;
@property (nonatomic) double stagingNodeValveActiveMinimumTimeBetweenVideoFramesInMilliseconds;
@property (nonatomic) double stagingNodeValveActiveMaximumTimeBetweenVideoFramesInMilliseconds;
@property (nonatomic) long long fileCoordinatorToWriterMovingWindowLatencyNumberOfSamples;
@property (nonatomic) double fileCoordinatorToWriterMovingWindowLatencyAverageInMilliseconds;
@property (nonatomic) double fileCoordinatorToWriterMovingWindowLatencyStandardDeviationInMilliseconds;
@property (nonatomic) double fileCoordinatorToWriterMovingWindowLatencyMinimumInMilliseconds;
@property (nonatomic) double fileCoordinatorToWriterMovingWindowLatencyMaximumInMilliseconds;
@property (nonatomic) double transitionVitalityScoreV1;
@property (retain, nonatomic) NSDictionary *transitionVitalityFeatures;
@property (nonatomic) unsigned int stillCaptureLuxLevel;
@property (copy, nonatomic) NSString *stillCapturePortType;
@property (nonatomic) int stillCaptureType;
@property (nonatomic) int stillCaptureResolutionFlavor;
@property (nonatomic) int maxSystemPressureLevel;
@property (nonatomic) double targetFrameRate;
@property (nonatomic) unsigned int numberOfFramesDropped;
@property (copy, nonatomic) NSNumber *retimingRecipeIdentifier;
@property (nonatomic) double minVideoFrameDurationInMilliseconds;
@property (nonatomic) double maxVideoFrameDurationInMilliseconds;
@property (nonatomic) double averageVideoFrameDurationInMilliseconds;
@property (nonatomic) double medianVideoFrameDurationInMilliseconds;
@property (nonatomic) double videoFrameDurationStandardDeviationInMilliseconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)reset;
- (id)eventName;
- (id)eventDictionary;

@end
