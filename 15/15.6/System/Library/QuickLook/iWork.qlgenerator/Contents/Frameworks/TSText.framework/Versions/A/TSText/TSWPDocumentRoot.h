@class NSUUID, EQKitEnvironment, TSULocale;
@protocol TSWPTOCController;

@interface TSWPDocumentRoot : TSCKDocumentRoot <TSWPObjectIndex> {
    NSUUID *_uuid;
}

@property (readonly, nonatomic) double stickyCommentScaleMultiplier;
@property (readonly, nonatomic, getter=isChangeTrackingEnabled) char changeTrackingEnabled;
@property (readonly, nonatomic) char supportHeaderFooterParagraphAlignmentInInspectors;
@property (readonly, nonatomic) EQKitEnvironment *equationEnvironment;
@property (nonatomic) char didRemoveMissingAttachments;
@property (readonly, nonatomic) TSULocale *typesettingLocale;
@property (readonly, nonatomic) id<TSWPTOCController> tocInfoController;
@property (nonatomic) char laysOutBodyVertically;

+ (id)STIXFonts;

- (void).cxx_destruct;
- (id)documentId;
- (double)bodyWidth;
- (void)willClose;
- (void)documentDidLoad;
- (char)shouldHyphenate;
- (struct __CFLocale { } *)hyphenationLocale;
- (id)changeSessionManagerForModel:(id)a0;
- (id)changeVisibility;
- (id)documentFonts;
- (id)unavailableDocumentFonts;
- (char)useLigatures;
- (int)naturalAlignmentAtCharIndex:(unsigned long long)a0 inTextStorage:(id)a1;
- (int)verticalAlignmentForTextStorage:(id)a0;
- (char)isSectionModel:(id)a0;
- (char)cellCommentsAllowedOnInfo:(id)a0;
- (char)containsVerticalText;
- (id)flowInfoContainer;
- (char)isDrawableOnSectionTemplatePage:(id)a0;
- (char)isSectionInfo:(id)a0;
- (char)isSectionTemplateInfo:(id)a0;
- (char)textIsVerticalInStorage:(id)a0 atCharIndex:(unsigned long long)a1;
- (void)fontUpdatedForStyleClient:(id)a0;
- (char)validatedLoadFromUnarchiver:(id)a0;
- (char)containsEquation;
- (id)documentTSWPFontObjects;
- (int)fullyJustifiedAlignmentAtCharIndex:(unsigned long long)a0 inTextStorage:(id)a1;
- (char)has_30356142_build;
- (id)p_fontsInStylesheetUsingBlock:(id /* block */)a0;

@end
