@class NSMutableArray, NSArray, NSString, NSMutableSet, NSFont, NSColor;
@protocol SiriUIAccessibilityEditUtteranceDelegate;

@interface SiriUIStreamingTextView : NSTextView <SiriSharedUIStreamingTextViewHosting> {
    NSMutableArray *_words;
    NSMutableArray *_wordsToShow;
    NSMutableSet *_wordsToDelete;
}

@property (nonatomic) BOOL acceptsFirstClick;
@property (weak, nonatomic) id<SiriUIAccessibilityEditUtteranceDelegate> accessibilityEditUtteranceDelegate;
@property (copy, nonatomic) NSColor *startTextColor;
@property (copy, nonatomic) NSColor *endTextColor;
@property (nonatomic) double endTextOpacity;
@property (nonatomic) double animationDuration;
@property (nonatomic) double fadeAnimationDuration;
@property (nonatomic) BOOL showChevron;
@property (nonatomic) BOOL renderEmojisOnly;
@property (nonatomic) BOOL renderEmojis;
@property (nonatomic) double hyphenationFactor;
@property (copy, nonatomic) NSArray *words;
@property (nonatomic) BOOL doneStreaming;
@property (retain, nonatomic) NSFont *font;
@property (nonatomic) BOOL animated;
@property (readonly, nonatomic) NSString *text;

+ (id)defaultAnimationForKey:(id)a0;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityIdentifier;
- (id)accessibilityLinkedUIElements;
- (BOOL)resignFirstResponder;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)becomeFirstResponder;
- (BOOL)isFlipped;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_resetState;
- (void)_sharedInit;
- (void)_updateText:(id)a0;
- (id)hostingView;
- (void)clearDictationResults;
- (void)setDictationResult:(id)a0 withCorrectionIdentifier:(id)a1;
- (void)updateStringForDictationResult:(id)a0;
- (void)_layoutFrames;
- (void)_configureWordAnimateInBegin:(id)a0;
- (void)_configureWordAnimateInEnd:(id)a0;
- (void)_configureWordAnimateOutEnd:(id)a0;
- (id)_createGlyphImage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 glyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 layoutManager:(id)a2;

@end
