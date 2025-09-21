@class TLSystemSound, NSString, TLAlertStoppingOptions, TLAlertPlaybackCompletionContext;
@protocol TLAlertPlaybackObserver;

@interface TLAlertSystemSoundContext : NSObject

@property (retain, nonatomic) TLSystemSound *sound;
@property (retain, nonatomic) TLAlertPlaybackCompletionContext *playbackCompletionContext;
@property (weak, nonatomic) id<TLAlertPlaybackObserver> playbackObserver;
@property (nonatomic, getter=isRequiringBacklightObservation) char requiringBacklightObservation;
@property (nonatomic, getter=isLoadingSound) char loadingSound;
@property (nonatomic) char hasPlaybackStarted;
@property (nonatomic, getter=isBeingInterrupted) char beingInterrupted;
@property (copy, nonatomic) NSString *toneIdentifierForDeemphasizingAlert;
@property (nonatomic, getter=isBeingDeemphasized) char beingDeemphasized;
@property (nonatomic, getter=isDeemphasized) char deemphasized;
@property (nonatomic) char hasDeemphasizedPlaybackStarted;
@property (nonatomic) char shouldBeInterruptedAfterDeemphasizedPlaybackStarts;
@property (copy, nonatomic) TLAlertStoppingOptions *stoppingOptionsForDeferredInterruption;

- (id)description;
- (void).cxx_destruct;

@end
