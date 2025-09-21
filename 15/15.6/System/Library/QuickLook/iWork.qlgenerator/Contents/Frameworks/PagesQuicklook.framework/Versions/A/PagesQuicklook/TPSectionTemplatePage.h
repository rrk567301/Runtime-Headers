@class NSEnumerator, NSString, NSArray, TSKDocumentRoot, TPSection, NSMutableArray, TSWPStorage, TSUUUIDPath, TPDocumentRoot;

@interface TPSectionTemplatePage : TSPObject <TSWPHeaderFooterProvider, TPSectionTemplateDrawableProvider, TSKDocumentObject, TSKModel, TSPCopying> {
    TPDocumentRoot *_documentRoot;
    TSWPStorage *_headerFooters[2][3];
    NSMutableArray *_sectionTemplateDrawables;
}

@property (weak, nonatomic) TPSection *section;
@property (readonly, nonatomic) NSArray *sectionTemplateDrawables;
@property (readonly, nonatomic) TSUUUIDPath *pageTemplateUUIDPath;
@property (readonly, nonatomic) char usesSingleHeaderFooter;
@property (readonly, nonatomic) NSEnumerator *headerFooterFragmentEnumerator;
@property (readonly, nonatomic) TSKDocumentRoot *documentRoot;
@property (readonly, nonatomic) double bodyWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long countOfSectionTemplateDrawables;

+ (char)needsObjectUUID;
+ (id)sectionTemplatePageForPageTemplate:(id)a0 withSection:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (double)headerHeight;
- (id)initWithSection:(id)a0;
- (id)copyWithContext:(id)a0;
- (double)footerHeight;
- (char)containsInfo:(id)a0;
- (id)childEnumerator;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (void)setParentStorage:(id)a0;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)objectUUIDPath;
- (id)headerFooter:(long long)a0 fragmentAtIndex:(long long)a1;
- (long long)headerFooterTypeForStorage:(id)a0;
- (long long)headerFragmentIndexForStorage:(id)a0;
- (char)isHeaderFooterEmpty:(long long)a0;
- (char)isHeaderFooterEmpty:(long long)a0 fragmentAtIndex:(long long)a1;
- (void)addSectionTemplateDrawables:(id)a0 atIndex:(unsigned long long)a1 insertContext:(id)a2 suppressDOLC:(char)a3;
- (unsigned long long)indexOfSectionTemplateDrawable:(id)a0;
- (void)addSectionTemplateDrawable:(id)a0 atIndex:(unsigned long long)a1 insertContext:(id)a2 suppressDOLC:(char)a3;
- (char)containsModelObject:(id)a0;
- (void)i_addSectionTemplateDrawable:(id)a0;
- (void)i_copyHeadersAndFootersFrom:(id)a0 dolcContext:(id)a1 withBlock:(id /* block */)a2;
- (void)i_createHeadersFooters:(long long)a0 stylesheet:(id)a1 paragraphStyle:(id)a2 context:(id)a3 mayAlreadyExist:(char)a4;
- (void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)a0 paragraphStyle:(id)a1 context:(id)a2;
- (void)i_importHeaderFooter:(id)a0 headerType:(long long)a1 dolcContext:(id)a2 splitHeaders:(char)a3;
- (id)i_pageTemplate;
- (void)i_setDocumentRoot:(id)a0;
- (void)i_setHeaderFooter:(long long)a0 storage:(id)a1 fragmentIndex:(long long)a2;
- (void)i_setPageTemplateUUIDPath:(id)a0;
- (void)i_splitHeaderFooter:(id)a0 storages:(id *)a1 dolcContext:(id)a2 bodyWidth:(double)a3;
- (double)pHeightOfHeaderFooter:(long long)a0;
- (void)p_filterParagraphStylesOnHeaderFooterStorage:(id)a0 stylesheet:(id)a1;
- (id)p_headerAndFooterStorages;
- (long long)p_headerFragmentIndexForTabIndex:(unsigned int)a0 paragraphStyle:(id)a1 bodyWidth:(double)a2;
- (char)p_isInDocument;
- (void)p_makeDrawablesPerformSelector:(SEL)a0 documentRoot:(id)a1;
- (void)p_makeDrawablesPerformSelector:(SEL)a0 documentRoot:(id)a1 context:(id)a2;
- (void)p_makeDrawablesPerformSelector:(SEL)a0 withStylesheet:(id)a1 withMapper:(id)a2;
- (void)p_makeHeadersFootersPerformSelector:(SEL)a0 documentRoot:(id)a1;
- (void)p_makeHeadersFootersPerformSelector:(SEL)a0 documentRoot:(id)a1 context:(id)a2;
- (void)p_makeHeadersFootersPerformSelector:(SEL)a0 withStylesheet:(id)a1 withMapper:(id)a2;
- (void)p_splitHeaderFooterByTabs:(id)a0 storages:(id *)a1 dolcContext:(id)a2 bodyWidth:(double)a3;
- (void)removeSectionTemplateDrawable:(id)a0 suppressDOLC:(char)a1;
- (id)sectionTemplateDrawablesSortedByZOrder:(id)a0;
- (id)topLevelParentInfoForInfo:(id)a0;

@end
