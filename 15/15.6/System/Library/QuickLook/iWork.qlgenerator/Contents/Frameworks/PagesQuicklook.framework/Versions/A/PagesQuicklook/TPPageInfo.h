@class NSString, NSArray, TSDInfoGeometry, TPBodyInfo, NSObject, TSPObject, TPPageController, TPDocumentRoot;
@protocol TSDInfo, TSDOwningAttachment;

@interface TPPageInfo : NSObject <TSDContainerInfo>

@property (class, readonly, nonatomic) unsigned long long documentSetupPageIndex;
@property (class, readonly, nonatomic) unsigned long long documentSetupRightSidePageIndex;
@property (class, readonly, nonatomic) unsigned long long documentSetupLeftSidePageIndex;

@property (readonly, weak, nonatomic) TPPageController *pageController;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pageFrame;
@property (readonly, nonatomic) unsigned long long pageIndex;
@property (readonly, nonatomic) TPBodyInfo *bodyInfo;
@property (readonly, weak, nonatomic) TPDocumentRoot *documentRoot;
@property (readonly, copy, nonatomic) NSArray *childInfos;
@property (readonly, nonatomic) char isMaster;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (nonatomic) NSObject<TSDInfo> *parentInfo;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (readonly, nonatomic, getter=isFloatingAboveText) char floatingAboveText;
@property (readonly, nonatomic, getter=isAnchoredToText) char anchoredToText;
@property (readonly, nonatomic, getter=isInlineWithText) char inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) char inlineWithTextWithWrap;
@property (readonly, nonatomic, getter=isAttachedToBodyText) char attachedToBodyText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) char matchesObjectPlaceholderGeometry;

+ (unsigned long long)pageIndexFromPageTemplateIndex:(unsigned long long)a0;
+ (Class)bodyInfoClass;
+ (char)hasBodyInfo;
+ (char)isAlternativePageIndex:(unsigned long long)a0 documentRoot:(id)a1;
+ (char)isDocSetupPageIndex:(unsigned long long)a0;
+ (char)isPageTemplatePageIndex:(unsigned long long)a0 documentRoot:(id)a1;
+ (unsigned long long)pageTemplateIndexFromPageIndex:(unsigned long long)a0 documentRoot:(id)a1;

- (void)dealloc;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isSelectable;
- (Class)layoutClass;
- (void)clearBackPointerToParentInfoIfNeeded:(id)a0;
- (char)isThemeContent;
- (Class)repClass;
- (id)infoForSelectionPath:(id)a0;
- (void)setPrimitiveGeometry:(id)a0;
- (id)initWithPageIndex:(unsigned long long)a0 documentRoot:(id)a1;

@end
