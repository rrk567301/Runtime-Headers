@class NSArray, NSTimer, NSString, AXMDataSummary, AXMChartDescriptor, NSObject;
@protocol OS_dispatch_queue;

@interface AXMDataSonificationManager : NSObject <AXMDataSonifierPlaybackObserver, AXMDataSummaryCategoryNameProvider> {
    NSObject<OS_dispatch_queue> *_dataSonifierAccessQueue;
}

@property (nonatomic) double lastScrubbingValueAnnouncementPosition;
@property (retain, nonatomic) NSTimer *scrubbingValueAnnouncementTimer;
@property (retain, nonatomic) AXMChartDescriptor *currentChartDescriptor;
@property (nonatomic) long long currentSeriesIndex;
@property (nonatomic) BOOL hapticsEnabled;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) BOOL isPaused;
@property (readonly, nonatomic) BOOL isScrubbing;
@property (readonly, nonatomic) double currentPlaybackPosition;
@property (nonatomic) double lastPlayheadPosition;
@property (readonly, nonatomic) NSArray *xGridlinePositions;
@property (readonly, nonatomic) NSArray *xCategoryLabels;
@property (retain, nonatomic) AXMDataSummary *dataSeriesSummary;
@property (readonly, nonatomic) BOOL isDataSeriesRegressionModelLoaded;
@property (readonly, nonatomic) unsigned long long playbackStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)pause;
- (void)stopSpeaking;
- (void)play;
- (void)beginLiveModeSession;
- (void)setLiveModeValue:(double)a0;
- (void)endLiveModeSession;
- (void)stopPlaying;
- (void)announceValueForPlayheadPosition;
- (id)categoryNameForXAxisPosition:(double)a0;
- (void)beginScrubbingSession;
- (void)scrubToPosition:(double)a0;
- (void)endScrubbingSession;
- (id)valueDescriptionForPlayheadPosition;

@end
