@class SHSignature, NSArray, NSNumber, NSObject;
@protocol OS_dispatch_source, SHMediaTimelineDelegate;

@interface SHMediaTimeline : NSObject

@property (readonly) NSNumber *timeToNextMediaItemScopeChange;
@property (readonly) NSArray *mediaItems;
@property (retain) NSObject<OS_dispatch_source> *timerDispatchSource;
@property (readonly, getter=isFinished) char finished;
@property (weak) id<SHMediaTimelineDelegate> delegate;
@property (readonly) NSArray *inScopeMediaItems;
@property (readonly) SHSignature *querySignature;

+ (id)blankMediaItemWhenNothingIsInScope:(id)a0;
+ (double)countdownForMatchedMediaItem:(id)a0;
+ (double)nextEventForRange:(id)a0 atMatchOffset:(double)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (char)finished;
- (void)startGenerating;
- (id)sortMediaItems:(id)a0;
- (void)cancelTimerSource;
- (id)earliestInscopeRangeForMatchedMediaItem:(id)a0;
- (id)initWithMatch:(id)a0;
- (void)startTimerForNextEvent;
- (void)stopGenerating;

@end
