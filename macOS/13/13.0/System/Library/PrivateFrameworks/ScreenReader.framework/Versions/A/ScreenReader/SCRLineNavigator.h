@class NSString, SCRElement, SCRTextMarkerRange, NSAttributedString;
@protocol SCRText;

@interface SCRLineNavigator : NSObject <SCRBrailleLineNavigator>

@property (retain, nonatomic) SCRElement<SCRText> *_textProvider;
@property (retain, nonatomic) SCRElement<SCRText> *_topLevelTextProvider;
@property (copy, nonatomic) NSAttributedString *currentAttributedLine;
@property (retain, nonatomic) SCRTextMarkerRange *currentLineRange;
@property (nonatomic) long long affinity;
@property (readonly, nonatomic) SCRElement<SCRText> *textProvider;
@property (readonly, nonatomic) long long currentLineNumber;
@property (nonatomic) long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateNavigatorForElement:(id)a0;
+ (id)lineNavigatorForElement:(id)a0;

- (void).cxx_destruct;
- (id)initWithTextProvider:(id)a0;
- (BOOL)moveToLineForElement:(id)a0 WithInfo:(id)a1;
- (BOOL)panLineWithDirection:(unsigned long long)a0;
- (BOOL)navigationProviderMatchesElement:(id)a0;
- (BOOL)currentLineContainsUIElement:(id)a0;
- (id)navigationProvider;
- (void)addLineToRequest:(id)a0 lineFocus:(int)a1;
- (BOOL)moveToNextLine;
- (BOOL)moveToPreviousLine;
- (BOOL)moveToLineWithRange:(id)a0 affinity:(long long)a1;
- (BOOL)providerMatchesElement:(id)a0;
- (void)_setupTextProvider:(id)a0;
- (BOOL)_moveByLine;
- (id)_lineRangeAfterRange:(id)a0;
- (BOOL)_isNextLineRangeValid:(id)a0;
- (id)_fallbackLineRangeAfterRange:(id)a0 withInvalidrange:(id)a1;
- (BOOL)_shouldIncludeFullLine;
- (id)_fallbackRange;
- (id)fallbackAttributedDescription;

@end
