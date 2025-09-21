@class NSString, DOMTimeRanges, DOMMediaError;

@interface DOMHTMLMediaElement : DOMHTMLElement

@property (readonly) DOMMediaError *error;
@property (copy) NSString *src;
@property (readonly, copy) NSString *currentSrc;
@property (copy) NSString *crossOrigin;
@property (readonly) unsigned short networkState;
@property (copy) NSString *preload;
@property (readonly) DOMTimeRanges *buffered;
@property (readonly) unsigned short readyState;
@property (readonly) char seeking;
@property double currentTime;
@property (readonly) double duration;
@property (readonly) char paused;
@property double defaultPlaybackRate;
@property double playbackRate;
@property (readonly) DOMTimeRanges *played;
@property (readonly) DOMTimeRanges *seekable;
@property (readonly) char ended;
@property char autoplay;
@property char loop;
@property char controls;
@property double volume;
@property char muted;
@property char defaultMuted;
@property char webkitPreservesPitch;
@property (readonly) char webkitHasClosedCaptions;
@property char webkitClosedCaptionsVisible;
@property (copy) NSString *mediaGroup;

- (void)load;
- (void)pause;
- (void)play;
- (id)canPlayType:(id)a0;
- (void)fastSeek:(double)a0;
- (double)getStartDate;

@end
