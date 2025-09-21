@class TSDInfoGeometry, NSArray, TSWPStorage, NSString, TSUColor, NSObject, TSPObject;
@protocol TSDInfo, TSDOwningAttachment;

@interface TSWPFlowInfo : TSPObject <TSWPFlowInfo, TSDContainerInfo, TSDLockableInfo, TSWPStorageParent, TSDSelectionStatisticsContributor>

@property (retain, nonatomic) TSWPStorage *textStorage;
@property (retain, nonatomic) NSArray *textboxes;
@property (nonatomic) unsigned long long userInterfaceIdentifier;
@property (readonly, nonatomic) TSUColor *userInterfaceFillColor;
@property (readonly, nonatomic) TSUColor *userInterfaceStrokeColor;
@property (readonly, nonatomic) char isLocked;
@property (readonly, nonatomic) unsigned long long textOrientation;
@property (readonly, nonatomic) char containsRotatedOrFlippedTextBox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (nonatomic) NSObject<TSDInfo> *parentInfo;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (readonly, nonatomic, getter=isFloatingAboveText) char floatingAboveText;
@property (readonly, nonatomic, getter=isAnchoredToText) char anchoredToText;
@property (readonly, nonatomic, getter=isInlineWithText) char inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) char inlineWithTextWithWrap;
@property (readonly, nonatomic, getter=isAttachedToBodyText) char attachedToBodyText;
@property (nonatomic) char matchesObjectPlaceholderGeometry;
@property (readonly, nonatomic) long long nestedTextboxDepth;
@property (readonly, nonatomic) char autoListRecognition;
@property (readonly, nonatomic) char autoListTermination;
@property (readonly, nonatomic) char textIsLinked;
@property (readonly, nonatomic) char preventsComments;
@property (readonly, nonatomic) char preventsChangeTracking;
@property (readonly, nonatomic) char supportsMultipleColumns;
@property (readonly, nonatomic) long long contentWritingDirection;
@property (readonly, nonatomic) char storageChangesInvalidateWrap;
@property (readonly, nonatomic) char supportsVerticalTextLayoutInChildStorages;
@property (readonly, nonatomic) char supportsDropCapsInChildStorages;
@property (readonly, copy, nonatomic) NSArray *childInfos;
@property (readonly, nonatomic) char isMaster;
@property (readonly, nonatomic, getter=isLocked) char locked;

+ (char)needsObjectUUID;
+ (id)fillColorForUserInterfaceIdentifier:(unsigned long long)a0;
+ (id)strokeColorForUserInterfaceIdentifier:(unsigned long long)a0;
+ (id)p_colorForIndex:(unsigned long long)a0;
+ (id)p_darkColorForColor:(id)a0;
+ (id)p_darkColorForIndex:(unsigned long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (char)isSelectable;
- (id)copyWithContext:(id)a0;
- (Class)layoutClass;
- (id)childEnumerator;
- (void)clearBackPointerToParentInfoIfNeeded:(id)a0;
- (char)isThemeContent;
- (Class)repClass;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (void)processSelectedStoragesWithStatisticsController:(id)a0;
- (char)textIsVerticalAtCharIndex:(unsigned long long)a0;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)infoForSelectionPath:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)setPrimitiveGeometry:(id)a0;
- (unsigned long long)indexOfTextBox:(id)a0;
- (id)displayNameOfMaxLength:(unsigned long long)a0 usesEllipsis:(char)a1;
- (id)extractTextStorage;
- (void)i_uncheckedSetTextboxes:(id)a0;
- (id)initWithStorage:(id)a0 context:(id)a1;
- (void)loadFromFlowInfoArchive:(const void *)a0 unarchiver:(id)a1;
- (void)pSaveToFlowInfoArchive:(void *)a0 archiver:(id)a1 textBoxes:(id)a2;
- (void)saveWithOnlyLinkedTextBoxes:(id)a0 archiver:(id)a1;

@end
