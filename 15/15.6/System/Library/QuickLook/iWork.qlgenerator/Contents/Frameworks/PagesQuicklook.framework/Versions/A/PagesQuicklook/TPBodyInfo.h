@class TPPageHint, NSArray, TSWPStorage, TSDInfoGeometry, TSPObject, NSObject, NSString;
@protocol TSWPOffscreenColumn, TSDInfo, TSWPTopicNumberHints, TSDHint, TSDOwningAttachment;

@interface TPBodyInfo : NSObject <TSDContainerInfo, TSKModelRootIndexProvider>

@property (weak, nonatomic) NSObject<TSDInfo> *parentInfo;
@property (readonly, nonatomic) id<TSWPOffscreenColumn> previousTargetLastColumn;
@property (readonly, nonatomic) id<TSWPOffscreenColumn> nextTargetFirstColumn;
@property (readonly, nonatomic) NSObject<TSWPTopicNumberHints> *nextTargetTopicNumberHints;
@property (readonly, nonatomic) id<TSDHint> nextTargetFirstChildHint;
@property (readonly, nonatomic) TSWPStorage *bodyStorage;
@property (readonly, nonatomic) TSWPStorage *storage;
@property (readonly, nonatomic) TPPageHint *pageHint;
@property (readonly, nonatomic) char laysOutVertically;
@property (readonly, copy, nonatomic) NSArray *childInfos;
@property (readonly, nonatomic) char isMaster;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
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
- (void)inflateBodyLayout:(id)a0;
- (id)initWithBodyStorage:(id)a0;
- (long long)modelRootIndex;

@end
