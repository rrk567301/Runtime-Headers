@class NSString, TSACaptionPlacement;

@interface TSACaptionInfo : TSWPShapeInfo <TSDTitlePlacementProviding, TSDDrawableInfoActivityProviding>

@property (retain, nonatomic) TSACaptionPlacement *placement;
@property (nonatomic) long long childInfoKind;
@property (readonly, nonatomic) char isHidden;
@property (readonly, nonatomic) long long titleAnchorLocation;
@property (readonly) char infoAllowsSelectionActivityToBeAggregated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)isCaption;
+ (char)wantsTitleAndCaptionUUIDs;

- (void).cxx_destruct;
- (char)isLocked;
- (void)setLocked:(char)a0;
- (id)objectForProperty:(int)a0;
- (Class)layoutClass;
- (char)isLockable;
- (id)exteriorTextWrap;
- (id)initWithContext:(id)a0 geometry:(id)a1;
- (id)owningAttachment;
- (id)owningAttachmentNoRecurse;
- (Class)repClass;
- (void)setOwningAttachment:(id)a0;
- (char)canAnchor;
- (char)canChangeWrapType;
- (char)displaysInstructionalText;
- (id)instructionalText;
- (char)supportsAttachedComments;
- (char)supportsHyperlinks;
- (char)supportsDropCapsInChildStorages;
- (void)saveToArchiver:(id)a0;
- (char)allowsCaption;
- (char)allowsTitle;
- (char)isAllowedInGroups;
- (char)isAllowedToAddCaptionToChildInfo:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (char)preventsChangeTracking;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (char)storageChangesInvalidateWrap;
- (char)supportsMultipleColumns;
- (char)supportsVerticalTextLayoutInChildStorages;
- (long long)nestedTextboxDepth;
- (char)allowedToBeDragAndDropped;
- (char)canBeAnnotatedWithPencil;
- (id)copyDowngradedToShapeWithContext:(id)a0;
- (long long)getChildInfoKind;
- (id)infoForAlignAndDistribute;
- (char)isAllowedInFreehandDrawings;
- (long long)p_anchorLocationForCaptionPlacement;
- (id)p_captionPlacementForAnchorLocation:(long long)a0;
- (void)setTitleAnchorLocation;
- (char)shouldShowOnCanvas:(id)a0;
- (char)textStorageAllowsCommentsDisregardingParent;

@end
