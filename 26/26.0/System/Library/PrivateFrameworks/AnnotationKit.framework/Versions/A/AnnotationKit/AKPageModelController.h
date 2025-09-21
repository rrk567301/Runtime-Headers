@class NSMutableSet, AKStatistics, NSArray, AKCropAnnotation, AKInkAnnotation, NSSet, NSMutableOrderedSet;

@interface AKPageModelController : NSObject {
    NSMutableOrderedSet *_mutableAnnotations;
    NSMutableSet *_mutableSelectedAnnotations;
}

@property (retain) AKCropAnnotation *cropAnnotation;
@property (retain) AKInkAnnotation *inkCanvasAnnotation;
@property (weak, nonatomic) AKStatistics *statisticsLogger;
@property (weak) id representedObject;
@property (readonly) NSArray *annotations;
@property (readonly) NSSet *selectedAnnotations;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } appliedCropRect;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)containsAnnotation:(id)a0;
- (void)setSelectedAnnotations:(id)a0;
- (void)addCropToolAnnotation;
- (double)annotationHeadroom;
- (BOOL)hasHDRAnnotation;
- (struct CGImage { } *)renderAnnotationsOnImage:(struct CGImage { } *)a0 wantsHDR:(BOOL)a1 opaque:(BOOL)a2 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 shouldApplyCropRect:(BOOL)a4 forPreview:(BOOL)a5;
- (void)bringSelectedAnnotationsToFront;
- (void)bringSelectedAnnotationsForward;
- (void)sendSelectedAnnotationsBackward;
- (void)_coalescedEnsureInkAnnotationIsInFront:(id)a0;
- (void)_enableEditObservationForAnnotationIfNew:(id)a0;
- (void)_ensureInkAnnotationIsInFrontWhenEditsAreDone;
- (void)_logAnnotationAdded:(id)a0;
- (void)_postSelectedAnnotationsChangedNotification;
- (void)addSelectedAnnotations:(id)a0;
- (void)addSelectedAnnotationsObject:(id)a0;
- (id)archivableRepresentation;
- (BOOL)hasMaskBorderAnnotation;
- (id)initWithArchivableRepresentation:(id)a0;
- (void)insertAnnotations:(id)a0 atIndexes:(id)a1;
- (void)insertObject:(id)a0 inAnnotationsAtIndex:(unsigned long long)a1;
- (void)intersectSelectedAnnotations:(id)a0;
- (void)removeAllAnnotations;
- (void)removeAnnotationsAtIndexes:(id)a0;
- (void)removeCropToolAnnotation;
- (void)removeObjectFromAnnotationsAtIndex:(unsigned long long)a0;
- (void)removeSelectedAnnotations:(id)a0;
- (void)removeSelectedAnnotationsObject:(id)a0;
- (void)replaceAnnotationsAtIndexes:(id)a0 withAnnotations:(id)a1;
- (void)replaceObjectInAnnotationsAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)restoreSelectionStateForUndo:(id)a0;
- (void)selectAllAnnotations;
- (void)selectAnnotation:(id)a0 byExtendingSelection:(BOOL)a1;
- (void)selectAnnotationsAtIndexes:(id)a0 byExtendingSelection:(BOOL)a1;
- (id)selectionStateForUndo;
- (void)sendSelectedAnnotationsToBack;
- (void)setInkCanvasAnnotationOneTime:(id)a0;

@end
