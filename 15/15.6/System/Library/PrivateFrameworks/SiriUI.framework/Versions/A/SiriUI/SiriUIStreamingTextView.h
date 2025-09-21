@class NSMutableArray, NSArray, NSString, NSMutableSet, NSFont, NSColor;
@protocol SiriUIAccessibilityEditUtteranceDelegate;

@interface SiriUIStreamingTextView : NSTextView <SiriSharedUIStreamingTextViewHosting> {
    NSMutableArray *_words;
    NSMutableArray *_wordsToShow;
    NSMutableSet *_wordsToDelete;
}

@property (nonatomic) char acceptsFirstClick;
@property (weak, nonatomic) id<SiriUIAccessibilityEditUtteranceDelegate> accessibilityEditUtteranceDelegate;
@property (copy, nonatomic) NSColor *startTextColor;
@property (copy, nonatomic) NSColor *endTextColor;
@property (nonatomic) double endTextOpacity;
@property (nonatomic) double animationDuration;
@property (nonatomic) double fadeAnimationDuration;
@property (nonatomic) char showChevron;
@property (nonatomic) char renderEmojisOnly;
@property (nonatomic) char renderEmojis;
@property (nonatomic) double hyphenationFactor;
@property (copy, nonatomic) NSArray *words;
@property (nonatomic) char doneStreaming;
@property (retain, nonatomic) NSFont *font;
@property (nonatomic) char animated;
@property (readonly, nonatomic) NSString *text;

+ (id)defaultAnimationForKey:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)accessibilityActionDescription:(id)a0;
- (char)acceptsFirstMouse:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityIdentifier;
- (id)accessibilityLinkedUIElements;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityRole;
- (char)becomeFirstResponder;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isAccessibilityElement;
- (char)isFlipped;
- (char)resignFirstResponder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_resetState;
- (void)_sharedInit;
- (void)_updateText:(id)a0;
- (id)hostingView;
- (void)updateStringForDictationResult:(id)a0;
- (void)_configureWordAnimateInBegin:(id)a0;
- (void)_configureWordAnimateInEnd:(id)a0;
- (void)_configureWordAnimateOutEnd:(id)a0;
- (id)_createGlyphImage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 glyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 layoutManager:(id)a2;
- (void)_layoutFrames;
- (void)clearDictationResults;
- (void)setDictationResult:(id)a0 withCorrectionIdentifier:(id)a1;

@end
