@class TSDInfoGeometry, NSArray, TSPObject, NSString, NSObject, TNPageController;
@protocol TSDInfo, TSDOwningAttachment;

@interface TNPageInfoContainer : NSObject <TSDContainerInfo>

@property (readonly, weak, nonatomic) TNPageController *pageController;
@property (readonly, nonatomic) unsigned long long pageIndex;
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

- (void).cxx_destruct;
- (char)isSelectable;
- (Class)layoutClass;
- (void)clearBackPointerToParentInfoIfNeeded:(id)a0;
- (char)isThemeContent;
- (Class)repClass;
- (id)infoForSelectionPath:(id)a0;
- (void)setPrimitiveGeometry:(id)a0;
- (id)initWithPageIndex:(unsigned long long)a0 pageController:(id)a1;

@end
