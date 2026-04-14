@class TSACaptionPlacement;

@interface TSACaptionInfo : TSWPShapeInfo <TSDTitlePlacementProviding>

@property (retain, nonatomic) TSACaptionPlacement *placement;
@property (nonatomic) long long childInfoKind;
@property (readonly, nonatomic) BOOL isHidden;
@property (readonly, nonatomic) long long titleAnchorLocation;

+ (BOOL)isCaption;
+ (BOOL)wantsTitleAndCaptionUUIDs;

- (void).cxx_destruct;
- (void)setLocked:(BOOL)a0;
- (BOOL)isLocked;
- (id)copyWithContext:(id)a0;
- (id)objectForProperty:(int)a0;
- (Class)layoutClass;
- (BOOL)isLockable;
- (id)exteriorTextWrap;
- (Class)repClass;
- (id)owningAttachment;
- (void)setOwningAttachment:(id)a0;
- (id)owningAttachmentNoRecurse;
- (id)initWithContext:(id)a0 geometry:(id)a1;
- (BOOL)supportsHyperlinks;
- (BOOL)canAnchor;
- (BOOL)supportsAttachedComments;
- (BOOL)canChangeWrapType;
- (BOOL)displaysInstructionalText;
- (id)instructionalText;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (BOOL)isAllowedToAddCaptionToChildInfo:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (BOOL)isAllowedInGroups;
- (BOOL)preventsChangeTracking;
- (BOOL)supportsMultipleColumns;
- (BOOL)storageChangesInvalidateWrap;
- (BOOL)supportsVerticalTextLayoutInChildStorages;
- (BOOL)supportsDropCapsInChildStorages;
- (BOOL)allowsCaption;
- (BOOL)allowsTitle;
- (long long)nestedTextboxDepth;
- (BOOL)canBeAnnotatedWithPencil;
- (BOOL)shouldShowOnCanvas:(id)a0;
- (id)copyDowngradedToShapeWithContext:(id)a0;
- (long long)getChildInfoKind;
- (BOOL)isAllowedInFreehandDrawings;
- (BOOL)allowedToBeDragAndDropped;
- (id)infoForAlignAndDistribute;
- (BOOL)textStorageAllowsCommentsDisregardingParent;
- (void)setTitleAnchorLocation;
- (long long)p_anchorLocationForCaptionPlacement;
- (id)p_captionPlacementForAnchorLocation:(long long)a0;

@end
