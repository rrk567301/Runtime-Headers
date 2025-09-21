@class NSString, SCRElement, NSAttributedString, AXFTextMarkerRange;
@protocol SCRText;

@interface _SCRTextLineNavigator : NSObject <SCRBrailleLineNavigator_Internal, SCRBrailleLineNavigator>

@property (retain, nonatomic) SCRElement<SCRText> *_textProvider;
@property (retain, nonatomic) SCRElement<SCRText> *_topLevelTextProvider;
@property (copy, nonatomic) NSAttributedString *currentAttributedLine;
@property (retain, nonatomic) AXFTextMarkerRange *currentLineRange;
@property (nonatomic) long long affinity;
@property (readonly, nonatomic) SCRElement<SCRText> *textProvider;
@property (readonly, nonatomic) long long currentLineNumber;
@property (nonatomic) long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)canCreateNavigatorForElement:(id)a0;
+ (id)lineNavigatorForElement:(id)a0;

- (void).cxx_destruct;
- (id)initWithTextProvider:(id)a0;
- (id)_fallbackLineRangeAfterRange:(id)a0 withInvalidrange:(id)a1;
- (id)_fallbackRange;
- (char)_isNextLineRangeValid:(id)a0;
- (id)_lineRangeAfterRange:(id)a0;
- (char)_moveByLine;
- (void)_setupTextProvider:(id)a0;
- (char)_shouldIncludeFullLine;
- (void)addLineToRequest:(id)a0 lineFocus:(int)a1;
- (char)currentLineContainsUIElement:(id)a0;
- (id)fallbackAttributedDescription;
- (char)moveToLineForElement:(id)a0 withInfo:(id)a1;
- (char)moveToLineWithRange:(id)a0 affinity:(long long)a1;
- (char)moveToNextLine;
- (char)moveToPreviousLine;
- (id)navigationProvider;
- (char)navigationProviderMatchesElement:(id)a0;
- (char)panLineWithDirection:(long long)a0;
- (char)providerMatchesElement:(id)a0;

@end
