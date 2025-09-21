@class NSString, NSTextPhraseAnimationController, NSArray;

@interface NSTextPhraseAttributesProvider_RippleFade : NSObject <NSTextPhraseAttributesProvider> {
    NSTextPhraseAnimationController *_controller;
    double _startTime;
    double _currentTime;
    double _totalElapsedTime;
    long long _phraseCount;
    long long _primaryPhraseIndex;
    long long _secondaryPhraseIndex;
    long long _animationElapsedTimeIndex;
    long long _totalElapsedTimeIndex;
    long long _cycleTimeIndex;
    long long _cycleCount;
    double _scaleFactorArray[255];
    double _opacityFactorArray[255];
    NSArray *_delayArrays;
    NSArray *_animatingAttributedStringPhrases;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (id)initWithController:(id)a0;
- (double)totalElapsedTime;
- (void).cxx_destruct;
- (long long)animationElapsedTimeIndex;
- (id)attributedStringForPhraseIndex:(unsigned long long)a0 atPhraseTimeIndex:(long long)a1;
- (long long)cycleCount;
- (long long)cycleTimeIndex;
- (void)generateDelayValues;
- (void)generateFactorArrayValues;
- (BOOL)isSecondaryPhraseAvailable;
- (double)opacityFactorForGlyphIndex:(long long)a0 phraseIndex:(long long)a1 atTimeIndex:(long long)a2;
- (long long)phraseCount;
- (long long)primaryPhraseIndex;
- (void)renderFrameForTime:(double)a0 usingHandler:(id /* block */)a1;
- (double)scaleFactorForGlyphIndex:(long long)a0 phraseIndex:(long long)a1 atTimeIndex:(long long)a2;
- (long long)secondaryPhraseIndex;
- (void)startAtTime:(double)a0;
- (long long)totalElapsedTimeIndex;

@end
