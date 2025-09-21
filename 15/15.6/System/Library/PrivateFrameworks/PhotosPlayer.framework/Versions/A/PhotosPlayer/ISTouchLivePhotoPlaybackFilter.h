@class ISDisplayLink, NSDate;

@interface ISTouchLivePhotoPlaybackFilter : ISLivePhotoPlaybackFilter

@property (nonatomic, setter=_setPlaybackReaquestID:) long long _playbackRequestID;
@property (nonatomic, setter=_setDisplayLink:) ISDisplayLink *_displayLink;
@property (retain, nonatomic, setter=_setPlaybackStartDate:) NSDate *_playbackStartDate;
@property (nonatomic, getter=isTouchActive) char touchActive;

- (void).cxx_destruct;
- (void)reset;
- (void)_handleDisplayLink;
- (long long)_nextPlaybackRequestID;
- (void)didPerformChanges;

@end
