@class NSString, KNMotionBackground, TSDInfoGeometry, TSDFill, NSObject, KNAbstractSlide, TSPObject, TSSPropertySetChangeDetails;
@protocol TSDInfo, TSDOwningAttachment;

@interface KNSlideBackgroundInfo : NSObject <TSDChangeableInfo, TSKDocumentObject, TSKTransformableObject> {
    TSSPropertySetChangeDetails *_changes;
}

@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly, nonatomic) TSDFill *fill;
@property (readonly, weak, nonatomic) KNAbstractSlide *slide;
@property (readonly, nonatomic) KNMotionBackground *motionBackground;
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

+ (id)backgroundWithSlide:(id)a0 andGeometry:(id)a1;

- (void).cxx_destruct;
- (char)isSelectable;
- (struct CGSize { double x0; double x1; })minimumSize;
- (Class)layoutClass;
- (void)clearBackPointerToParentInfoIfNeeded:(id)a0;
- (char)isThemeContent;
- (Class)repClass;
- (void)beginCollectingChanges;
- (id)commandForTransformingByTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 context:(id)a1 transformedObjects:(id)a2 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)endCollectingChanges;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)willChangeProperty:(int)a0;
- (id)initWithSlide:(id)a0 andGeometry:(id)a1;
- (id)originalPDFDataForCopy;
- (void)setPrimitiveGeometry:(id)a0;

@end
