@class SCROutputSpeechComponent, SCROutputPunctuationSettings, SCROutputAction;

@interface SCROutputPunctuationEnumerator : NSObject

@property (nonatomic) BOOL _stop;
@property (nonatomic) unsigned long long _limit;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } _rangeOfLastNewline;
@property (retain, nonatomic) SCROutputAction *_action;
@property (readonly, weak, nonatomic) SCROutputSpeechComponent *component;
@property (readonly, copy, nonatomic) SCROutputPunctuationSettings *settings;

- (void).cxx_destruct;
- (id)initWithSpeechComponent:(id)a0 punctuationSettings:(id)a1;
- (BOOL)enumeratePunctuationInAction:(id)a0 indexes:(id)a1 block:(id /* block */)a2;
- (unsigned long long)_handleBlock:(id /* block */)a0 kind:(unsigned long long)a1 punctuation:(id)a2 repeatCount:(unsigned long long)a3 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 string:(id)a5;
- (unsigned long long)_untouchableTextLengthForString:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)_macInTalkLengthForString:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)_indentationLengthInString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 block:(id /* block */)a2;
- (unsigned long long)_countIndentationCharactersInString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 block:(id /* block */)a2;
- (BOOL)_isValidZeroIndentationAtPosition:(unsigned long long)a0;
- (unsigned long long)_whitespaceLengthForString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 allowIndentation:(BOOL)a2 block:(id /* block */)a3;
- (unsigned long long)_punctuationLengthForString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 block:(id /* block */)a2;

@end
