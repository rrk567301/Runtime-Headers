@class KNLiveVideoSource, NSString, NSUUID, TSDInfoGeometry, TSDFill, TSDMediaStyle, NSObject, TSPData, TSPObject;
@protocol TSDInfo, TSDOwningAttachment;

@interface KNLiveVideoInfo : TSDStyledInfo <TSDDrawableInfoCustomUnarchivingSubclassProviding, TSDMixing, TSAPdfTaggerIgnorable> {
    TSDMediaStyle *_style;
    double _scale;
    struct CGPoint { double x; double y; } _normalizedOffset;
    long long _maskKind;
    double _maskCornerRadius;
    long long _backgroundKind;
    TSDFill *_backgroundFill;
    TSPData *_archivedMoviePosterImageData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSUUID *i_sourceId;
@property (nonatomic) long long i_archivedMaskKind;
@property (nonatomic) long long i_archivedBackgroundKind;
@property (retain, nonatomic) KNLiveVideoSource *source;
@property (nonatomic) double scale;
@property (nonatomic) struct CGPoint { double x0; double x1; } normalizedOffset;
@property (nonatomic) long long maskKind;
@property (readonly, nonatomic) long long effectiveMaskKind;
@property (nonatomic) double maskCornerRadius;
@property (nonatomic) long long backgroundKind;
@property (readonly, nonatomic) long long effectiveBackgroundKind;
@property (copy, nonatomic) TSDFill *backgroundFill;
@property (nonatomic) BOOL isPlaceholder;
@property (readonly, nonatomic) BOOL shouldBeIgnoredByPDFTagger;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (nonatomic) NSObject<TSDInfo> *parentInfo;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;

+ (Class)drawableInfoSubclassForClass:(Class)a0 unarchiver:(id)a1;
+ (long long)i_backgroundKindForArchivedBackgroundKind:(long long)a0;
+ (id)i_makeArchivedMoviePosterImageDataWithContext:(id)a0;

- (void).cxx_destruct;
- (id)style;
- (void)setStyle:(id)a0;
- (unsigned int)elementKind;
- (id)typeName;
- (void)acceptVisitor:(id)a0;
- (id)copyWithContext:(id)a0;
- (id)objectForProperty:(int)a0;
- (Class)layoutClass;
- (BOOL)containsProperty:(int)a0;
- (Class)repClass;
- (int)intValueForProperty:(int)a0;
- (double)doubleValueForProperty:(int)a0;
- (id)presetKind;
- (id)animationFilters;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (id)initWithContext:(id)a0 geometry:(id)a1 style:(id)a2;
- (Class)styleClass;
- (id)styleIdentifierTemplateForNewPreset;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (BOOL)isAllowedInGroups;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (long long)effectiveMaskKindForGeometry:(id)a0;
- (void)p_updateSlideNodeLiveVideoSourceUsage;
- (BOOL)allowsCaption;
- (BOOL)allowsTitle;
- (BOOL)shouldShowInPrint;
- (id)defaultDescriptiveName;
- (BOOL)supportsUserInteractionWhenVisibleInAnimation;
- (id)pastedPropertyMapForStyle:(id)a0 tailLineEndInfo:(int)a1;

@end
