@class NSArray, NSTimer, NSString, PXCuratedLibraryAssetCollectionSkimmingModel, PXAssetCollectionReference;
@protocol PXCuratedLibrarySkimmingControllerDelegate;

@interface PXCuratedLibrarySkimmingController : NSObject <PXChangeObserver> {
    double _slideshowTriggerDelay;
    double _slideshowIntervalDelay;
}

@property (retain, nonatomic) PXAssetCollectionReference *preSkimmedAssetCollectionReference;
@property (nonatomic) long long state;
@property (nonatomic) double lastPanningTranslation;
@property (nonatomic) long long currentSkimmingIndex;
@property (retain, nonatomic) NSArray *skimmingIndexes;
@property (nonatomic) long long skimmingDataSourceIdentifier;
@property (retain, nonatomic) NSTimer *slideshowTimer;
@property (readonly, nonatomic) PXCuratedLibraryAssetCollectionSkimmingModel *skimmingModel;
@property (weak, nonatomic) id<PXCuratedLibrarySkimmingControllerDelegate> delegate;
@property (nonatomic) char skimmingSlideshowEnabled;
@property (readonly, nonatomic) char canStartSkimming;
@property (readonly, nonatomic) char isTouching;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_adoptIndexesFromSkimmingModel;
- (void)_cancelEnteringTouchingState;
- (void)_cleanupFeedbackGenerator;
- (void)_ensureFeedbackGenerator;
- (void)_enterIdleStatePersistSkimmingState:(char)a0;
- (void)_enterSlideshowStateForAssetCollectionReference:(id)a0;
- (void)_enterTouchingStateForAssetCollectionReference:(id)a0;
- (void)_generateFeedbackForSkimmingGesture;
- (void)_slideshowTimerTick:(id)a0;
- (void)_startOrResumeSlideshowTouchesEnded:(char)a0;
- (void)_stopSlideshow;
- (void)_updateSlideshow;
- (void)contentViewDidScroll;
- (void)contentViewWillScroll;
- (void)endPanning;
- (char)endTouchingGestureEnded:(char)a0;
- (id)initWithSkimmingModel:(id)a0;
- (void)startPanningForAssetCollectionReference:(id)a0;
- (void)startTouchingForAssetCollectionReference:(id)a0;
- (void)updatePanningWithTranslation:(struct CGPoint { double x0; double x1; })a0;

@end
