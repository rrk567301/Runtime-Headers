@class NSView, SiriUITranscriptItem;

@interface SVSTranscriptAnimation : NSObject

@property (nonatomic) long long updateAnimationType;
@property (readonly, nonatomic) double creationTime;
@property (readonly, nonatomic) SiriUITranscriptItem *transcriptItem;
@property (readonly, nonatomic) NSView *replacedView;
@property (readonly, nonatomic) long long updateType;
@property (readonly, nonatomic) long long insertionAnimationType;
@property (readonly, nonatomic) long long replacementAnimationType;
@property (readonly, nonatomic) long long pinAnimationType;

+ (id)animationForTranscriptItem:(id)a0 updateType:(long long)a1;
+ (id)confirmationAnimationForTranscriptItem:(id)a0;
+ (id)animationForTranscriptItem:(id)a0 updateType:(long long)a1 replacedView:(id)a2;
+ (id)cancellationAnimationForTranscriptItem:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (double)animationDelay;
- (id)initWithTranscriptItem:(id)a0 replacedView:(id)a1 updateType:(long long)a2;
- (id)_aceViewControllerIfExists;
- (id)_snippetViewControllerIfExists;
- (id)_animationTypeString;

@end
