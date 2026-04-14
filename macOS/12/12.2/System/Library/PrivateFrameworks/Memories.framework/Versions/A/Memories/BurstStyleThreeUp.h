@class NSColor;

@interface BurstStyleThreeUp : BurstClipStylePhoto

@property (retain, nonatomic) NSColor *gapColor;
@property (retain, nonatomic) NSColor *popBackgroundColor;
@property (nonatomic) int transitionFrameDuration;

- (void).cxx_destruct;
- (double)maximumDuration;
- (BOOL)isSupported;
- (double)idealDuration;
- (id)transitionName;
- (unsigned long long)numberOfAvailableClips;
- (unsigned long long)_minimumNumberOfContainedClips;
- (unsigned long long)_idealNumberOfContainedClips;
- (double)idealContainedClipDuration;
- (double)maximumContainedClipDuration;
- (unsigned long long)numberOfPossibleClips;
- (id)containedClipsWithoutTransitions;
- (unsigned long long)_maximumNumberOfContainedClips;
- (double)minimumContainedClipDuration;
- (id)containedClipsWithInTransition:(id)a0 outTransition:(id)a1;

@end
