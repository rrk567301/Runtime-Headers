@class NSDictionary, ICTTZoomController, NSString;

@interface ICTTTextController : NSObject <ICTTTextStorageStyler>

@property (nonatomic) char showsEditorDebugTooltips;
@property (nonatomic) double bodyStyleFontSizeThreshold;
@property (nonatomic) double headingStyleFontSizeThreshold;
@property (nonatomic) unsigned long long defaultTabInterval;
@property (retain, nonatomic) NSDictionary *indentForHeadIndent;
@property (retain, nonatomic) ICTTZoomController *zoomController;
@property (nonatomic) char keepNSTextTableAttributes;
@property (nonatomic) char disableSingleLineA;
@property (nonatomic, getter=isInPreviewMode) char inPreviewMode;
@property (nonatomic) char isForPrint;
@property (nonatomic) char isForSiri;
@property (nonatomic) char disableAddingExtraLinesIfNeeded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)attachmentParagraphSpacing;
+ (double)attachmentParagraphSpacingBefore;
+ (double)bodyParagraphSpacing;
+ (double)bodyParagraphSpacingBefore;
+ (id)preferredFontForICTTTextStyle:(unsigned int)a0;
+ (double)superscriptScaleFactor;

- (id)init;
- (void).cxx_destruct;
- (id)defaultParagraphStyle;
- (id)titleAttributes;
- (void)styleFontInTextStorage:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)addBIToStyle:(id)a0;
- (id)bodyAttributes;
- (id)bodyAttributesWithContentSizeCategory:(id)a0;
- (id)captionAttributes;
- (id)captionAttributesWithContentSizeCategory:(id)a0;
- (id)checklistAttributes;
- (id)checklistAttributesWithContentSizeCategory:(id)a0;
- (id)copyAttribute:(id)a0 fromAttributes:(id)a1 toAttributes:(id)a2;
- (id)copyNSParagraphStylefromAttributes:(id)a0 toAttributes:(id)a1;
- (id)defaultListAttributes;
- (id)defaultListAttributesWithContentSizeCategory:(id)a0;
- (unsigned long long)defaultTabIntervalInAttributedString:(id)a0;
- (id)defaultTypingAttributesForEmptyDocument;
- (id)filterStyleAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)fixModelAttributesInTextStorage:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)fixedWidthAttributes;
- (id)fixedWidthAttributesWithContentSizeCategory:(id)a0;
- (void)guessFontSizeThresholdsForTTStylesInAttributedString:(id)a0;
- (id)headingAttributes;
- (id)headingAttributesWithContentSizeCategory:(id)a0;
- (id)indentsForIndividualParagraphHeadIndentsInAttributedString:(id)a0;
- (id)modelForStyleAttributes:(id)a0 filterAttributes:(char)a1;
- (id)modelForStyleAttributes:(id)a0 filterAttributes:(char)a1 pasteboardAttributedString:(id)a2;
- (id)preferredAttributesForICTTTextStyle:(unsigned int)a0;
- (void)prepareIndentInformationInAttributedString:(id)a0;
- (id)referenceAttributesForLocation:(unsigned long long)a0 textStorage:(id)a1 currentParagraphStart:(unsigned long long)a2;
- (id)removeAttribute:(id)a0 ifInconsistentAtLocation:(unsigned long long)a1 inTextStorage:(id)a2 forNewTypingAttributes:(id)a3;
- (void)resetGuessedFontSizes;
- (void)resetIndentInformation;
- (id)strippedTypingAttributesAtStartOfParagraph:(id)a0 atTheEndOfDocument:(char)a1 isTyping:(char)a2;
- (void)styleFontInAttributedString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 contentSizeCategory:(id)a2;
- (id)styleForModelAttributes:(id)a0;
- (id)styleForModelAttributes:(id)a0 contentSizeCategory:(id)a1;
- (void)styleListsAndIndentsInAttributedString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)styleText:(id)a0 inExactRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 fixModelAttributes:(char)a2;
- (void)styleText:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 fixModelAttributes:(char)a2;
- (id)subheadingAttributes;
- (id)subheadingAttributesWithContentSizeCategory:(id)a0;
- (id)titleAttributesWithContentSizeCategory:(id)a0;
- (id)typingAttributesForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forSelectionChange:(char)a1 currentTypingAttributes:(id)a2 inTextStorage:(id)a3;
- (id)typingAttributesForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forSelectionChange:(char)a1 forSettingTextStyle:(char)a2 currentTypingAttributes:(id)a3 inTextStorage:(id)a4;
- (id)typingAttributesForSettingTextStyleForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 currentTypingAttributes:(id)a1 inTextStorage:(id)a2;
- (id)writingToolsIgnoredRangesForTextStorage:(id)a0 inEnclosingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 note:(id)a2;

@end
