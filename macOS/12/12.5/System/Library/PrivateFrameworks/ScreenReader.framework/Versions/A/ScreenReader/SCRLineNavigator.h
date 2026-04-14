@class SCRElement, NSAttributedString, SCRTextMarkerRange;
@protocol SCRText;

@interface SCRLineNavigator : NSObject

@property (copy, nonatomic) NSAttributedString *currentVisualLine;
@property (nonatomic) BOOL movingForward;
@property (retain, nonatomic) SCRTextMarkerRange *currentLineRange;
@property (retain, nonatomic) SCRElement<SCRText> *textProvider;
@property (retain, nonatomic) SCRElement<SCRText> *_originalTextProvider;
@property (readonly, nonatomic) long long currentLineNumber;

+ (id)voiceoverCursorRangeForText:(id)a0;
+ (BOOL)isSelectedTextRangeSettableForText:(id)a0;
+ (BOOL)setVoiceOverCursorRange:(id)a0 text:(id)a1 request:(id)a2;
+ (void)setSelectedTextMarkerRange:(id)a0 text:(id)a1;
+ (id)selectedTextMarkerRangeForText:(id)a0;
+ (id)textProviderForText:(id)a0;
+ (id)lineAfterLineRange:(id)a0 movingForward:(BOOL)a1 text:(id)a2;
+ (id)refetchLineAfterLineRange:(id)a0 movingForward:(BOOL)a1 text:(id)a2;
+ (id)attributedSubstringWithRange:(id)a0 text:(id)a1;
+ (id)lineForRange:(id)a0 movingForward:(BOOL)a1 text:(id)a2 innerText:(id)a3;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })localRangeOfTextMarkerRange:(id)a0 insideTextMarkerRange:(id)a1 element:(id)a2;
+ (id)elementRangeForLineRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 insideTextMarkerRange:(id)a1 text:(id)a2;
+ (id)convertTextMarkerRange:(id)a0 fromTextField:(id)a1 toTextArea:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTextProvider:(id)a0;
- (BOOL)providerMatchesElement:(id)a0;
- (BOOL)isRangeCompatibleWithCurrentLineRange:(id)a0;
- (BOOL)moveToRange:(id)a0 movingForward:(BOOL)a1 includingFullLine:(BOOL)a2;
- (id)fallbackRangeMovingForward:(BOOL)a0;
- (BOOL)moveToNextVisualLine;
- (BOOL)moveToPreviousVisualLine;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })lineRangeForElementRange:(id)a0;
- (id)elementRangeForLineRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)_moveByLineGoingForward:(BOOL)a0;

@end
