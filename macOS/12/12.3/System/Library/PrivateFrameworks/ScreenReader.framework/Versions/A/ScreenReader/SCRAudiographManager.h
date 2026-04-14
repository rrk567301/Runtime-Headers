@class NSString, SCRElement;

@interface SCRAudiographManager : NSObject <AXMDataSonifierPlaybackObserver>

@property (nonatomic) unsigned long long _currentPlaybackStatus;
@property (nonatomic) double _currentPlaybackPosition;
@property (readonly, nonatomic) BOOL isScrubbing;
@property (readonly, nonatomic) BOOL isPlaying;
@property (retain, nonatomic) SCRElement *currentChartElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)pause;
- (void)stop;
- (void)play;
- (void)dataSonifierPlaybackDidBeginAtPosition:(double)a0;
- (double)currentPlaybackPosition;
- (void)dataSonifierPlaybackDidResumeAtPosition:(double)a0;
- (void)dataSonifierPlaybackProgressDidChange:(double)a0;
- (void)dataSonifierPlaybackDidPauseAtPosition:(double)a0;
- (void)dataSonifierPlaybackDidEndAtPosition:(double)a0;
- (void)dataSonifierScrubbingDidBeginAtPosition:(double)a0;
- (void)dataSonifierScrubbingDidEndAtPosition:(double)a0;
- (void)dataSonifierScrubbingPositionDidChange:(double)a0;
- (void)setCurrentChartDescriptor:(id)a0;
- (void)setCurrentSeriesIndex:(id)a0;
- (void)announceValueForPlayheadPosition;
- (void)beginScrubbingSession;
- (void)scrubToPosition:(double)a0;
- (void)endScrubbingSession;
- (id)dataSeriesSummary;
- (void)notifyElementOfPlaybackProgress:(double)a0;
- (void)notifyElementOfPlaybackStatusChange;
- (void)dataSonifierAnnouncePlaybackDidEndAtPosition:(double)a0;

@end
