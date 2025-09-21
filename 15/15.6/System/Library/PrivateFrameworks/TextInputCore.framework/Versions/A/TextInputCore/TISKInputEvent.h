@class TIKeyboardInput;

@interface TISKInputEvent : TISKEvent {
    double _downErrorDistance;
    double _upErrorDistance;
    char _canComputeErrorDistance;
}

@property (retain, nonatomic) TIKeyboardInput *input;
@property (nonatomic) char ignoreTapData;

+ (id)makeInputEvent:(id)a0 emojiSearchMode:(char)a1 order:(long long)a2 wordSeparator:(id)a3 accentedLanguage:(char)a4;

- (void).cxx_destruct;
- (double)downUpTimeDelta;
- (char)isMissingATouch;
- (void)_computeErrorDistance;
- (id)init:(id)a0 type:(int)a1 emojiSearchMode:(char)a2 order:(long long)a3;
- (void)reportInterKeyTiming:(id)a0 previousEvent:(id)a1;
- (void)reportToSession:(id)a0;
- (double)touchDownErrorDistance;
- (double)touchUpErrorDistance;
- (id)upTouchEvent;

@end
