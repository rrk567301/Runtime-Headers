@class AVSmartSubtitlesController, AVObservationController, NSTimer, NSString, NSMutableArray, NSDateComponentsFormatter;
@protocol AVPlayerTextualFeedbackPublisherDelegate;

@interface AVPlayerTextualFeedbackPublisher : NSObject <AVSmartSubtitlesControllerDelegate>

@property (retain, nonatomic) NSMutableArray *messageQueue;
@property (retain, nonatomic) NSTimer *messageQueueTimer;
@property (nonatomic, getter=isPublishing) BOOL publishing;
@property (retain, nonatomic) NSDateComponentsFormatter *secondsFormatter;
@property (retain, nonatomic) AVSmartSubtitlesController *smartSubtitlesController;
@property (retain, nonatomic) AVObservationController *textualFeedbackKVO;
@property (nonatomic) double timeOfLastPublishedMessage;
@property (nonatomic) double timeOfLastSubtitlesOnMuteMessage;
@property (weak, nonatomic) id<AVPlayerTextualFeedbackPublisherDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)stopPublishing;
- (void)startPublishing;
- (void)_invalidateQueue;
- (void)_publishFromQueue;
- (void)_publishMessage:(id)a0;
- (void)_publishSubtitlesOnMuteMessageIfNeeded;
- (id)initWithSmartSubtitlesController:(id)a0;
- (void)smartSubtitlesController:(id)a0 didToggleSubtitlesOnSkipBackForTimeInterval:(double)a1;

@end
