@class TSACaptionPlacement;

@interface TSACaptionInfo : TSWPShapeInfo

@property (retain, nonatomic) TSACaptionPlacement *placement;
@property (nonatomic) long long childInfoKind;
@property (readonly, nonatomic) BOOL isHidden;

+ (BOOL)isCaption;
+ (BOOL)wantsTitleAndCaptionUUIDs;

- (void).cxx_destruct;
- (BOOL)isLocked;
- (void)setLocked:(BOOL)a0;
- (id)copyWithContext:(id)a0;
- (Class)layoutClass;
- (BOOL)isLockable;
- (Class)repClass;
- (id)owningAttachment;
- (void)setOwningAttachment:(id)a0;
- (id)owningAttachmentNoRecurse;
- (id)initWithContext:(id)a0 geometry:(id)a1;
- (id)exteriorTextWrap;
- (BOOL)supportsAttachedComments;
- (BOOL)supportsHyperlinks;
- (BOOL)canAnchor;
- (BOOL)canChangeWrapType;
- (BOOL)displaysInstructionalText;
- (id)instructionalText;
- (BOOL)allowsTitle;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (BOOL)isAllowedInGroups;
- (BOOL)preventsChangeTracking;
- (BOOL)supportsMultipleColumns;
- (BOOL)storageChangesInvalidateWrap;
- (BOOL)supportsVerticalTextLayoutInChildStorages;
- (BOOL)supportsDropCapsInChildStorages;
- (BOOL)allowsCaption;
- (BOOL)canBeAnnotatedWithPencil;
- (id)infoForAlignAndDistribute;
- (BOOL)shouldShowOnCanvas:(id)a0;
- (id)copyDowngradedToShapeWithContext:(id)a0;
- (long long)getChildInfoKind;
- (BOOL)isAllowedInFreehandDrawings;
- (BOOL)allowedToBeDragAndDropped;
- (BOOL)textStorageAllowsCommentsDisregardingParent;

@end
