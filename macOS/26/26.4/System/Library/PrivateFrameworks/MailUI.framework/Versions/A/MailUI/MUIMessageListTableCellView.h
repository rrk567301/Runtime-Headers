@class NSButton, NSColor, EMCategory, NSLayoutConstraint, ToCCIndicator, MUIMessageListObjectProxy;
@protocol ECMessage;

@interface MUIMessageListTableCellView : NSTableCellView {
    NSColor *_textColor;
}

@property (retain) MUIMessageListObjectProxy *objectValue;
@property (retain, nonatomic) ToCCIndicator *toCCIndicator;
@property (retain, nonatomic) NSLayoutConstraint *subjectLeadingToIndicatorConstraint;
@property (weak, nonatomic) NSButton *replyButton;
@property (readonly, nonatomic) id<ECMessage> message;
@property (retain, nonatomic) NSColor *textColor;
@property (nonatomic) BOOL showToCc;
@property (nonatomic) BOOL hasGeneratedSummary;
@property (nonatomic, getter=isSenderSpecificCell) BOOL senderSpecificCell;
@property (retain, nonatomic) EMCategory *category;
@property (nonatomic) BOOL showSnippetHighlighting;

+ (double)_calculateRowHeightUsingTextField:(id)a0;
+ (id)changeAttributedStringHighlighting:(id)a0 useSelectedStyle:(BOOL)a1;
+ (id)keyPathsForValuesAffectingMessage;
+ (id)keyPathsForValuesAffectingTextColor;
+ (id)reusableIdentifier;
+ (unsigned long long)rowGroupingStyleFromCellGrouping:(long long)a0;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)setBackgroundStyle:(long long)a0;
- (void)awakeFromNib;
- (void)_setSymbolFonts;
- (void)_updateToCCIndicatorWithString:(id)a0;
- (void)_preserveContentTintForImageViews:(id)a0;
- (void)updateFontsUsingBold:(BOOL)a0;

@end
