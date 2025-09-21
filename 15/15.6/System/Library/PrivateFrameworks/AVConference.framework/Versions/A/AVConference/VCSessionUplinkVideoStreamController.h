@class NSMutableDictionary, NSDictionary, NSArray, NSMutableSet, VCIDRScheduler, NSMutableArray;

@interface VCSessionUplinkVideoStreamController : NSObject {
    float _startTime;
    id _delegate;
    NSMutableDictionary *_videoStreams;
    NSMutableDictionary *_streamInfoMap;
    NSMutableDictionary *_activeVideoStreams;
    NSMutableSet *_streamToPause;
    NSMutableSet *_streamToResume;
    NSMutableDictionary *_streamScheduleWifi;
    NSMutableDictionary *_streamScheduleCell;
    NSMutableDictionary *_currentStreamSchedule;
    VCIDRScheduler *_schedulerWifi;
    VCIDRScheduler *_schedulerCell;
    char _pendingStreamsUpdated;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    double _pendingKeyFrameGenerationStartTime;
    NSMutableArray *_streamsPendingKeyFrameGeneration;
    NSMutableArray *_streamResetIDR;
    char _streamsUseRTCP;
    NSDictionary *_cachedActiveVideoStreams;
    struct opaqueRTCReporting { } *_reportingAgent;
}

@property (readonly) NSDictionary *activeVideoStreams;
@property (copy, nonatomic) NSMutableDictionary *pendingVideoStreams;
@property unsigned int captureFrameRate;
@property (copy, nonatomic) NSArray *streamIDsWifi;
@property (copy, nonatomic) NSArray *streamIDsCell;
@property (nonatomic) float currentFrameTime;
@property (nonatomic) char dynamicVideoPriorityEnabled;
@property (nonatomic) char shouldSkipIDRScheduler;

- (void)dealloc;
- (id)delegate;
- (void)lock;
- (void)unlock;
- (void)restart;
- (id)schedulerStreamWithVideoStream:(id)a0;
- (void)setPendingVideoStreamsInternal:(id)a0;
- (id)anchorStreamIDWithCappedVideoStreamIDs:(id)a0;
- (char)filterPendingTemporalStreams;
- (void)generateKeyFrameWithStreamID:(id)a0 firType:(int)a1;
- (id)getMultiwayConfigForStreamID:(id)a0;
- (void)handleStreamsPendingKeyFrameGeneration;
- (void)handleStreamsResetIDR;
- (id)initWithVideoStreams:(id)a0 streamInfos:(id)a1 reportingAgent:(struct opaqueRTCReporting { } *)a2 delegate:(id)a3;
- (void)initilizeStreamInfoMapWithStreamInfos:(id)a0;
- (id)newVideoStreamKeyFrameScheduleWithStreamIDs:(id)a0;
- (char)pauseStreams;
- (void)printPendingKeyFrameWarningOnThresholdTimeElapsedWithCurrentFrameTime:(float)a0;
- (char)resumeStreams;
- (void)selectVideoStreamForVideoPriority;
- (void)setCachedActiveVideoStreams:(id)a0;
- (void)setIsLocalOnCellular:(char)a0 cappedVideoStreamIDs:(id)a1;
- (char)setStreamsUseRTCPWithStreamInfos:(id)a0;
- (char)shouldGenerateIDRWithStreamSchedule:(id)a0;
- (id)videoStreamPendingKeyFrameGenerationWithStreamID:(id)a0 shouldRemoveFromPendingArray:(char *)a1;

@end
