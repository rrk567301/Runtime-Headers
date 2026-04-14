@class NSDictionary;

@interface AUGenericView : NSView <AUCustomViewPersistentData> {
    void *_reserved[32];
}

@property (readonly) struct OpaqueAudioComponentInstance { } *audioUnit;
@property BOOL showsExpertParameters;
@property (nonatomic) NSDictionary *customViewPersistentData;

+ (id)getTextFieldWithText:(id)a0;

- (void)finalize;
- (void)dealloc;
- (id)init;
- (void)cleanup;
- (BOOL)isFlipped;
- (void)mouseDown:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)mouseDownCanMoveWindow;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)rebuildUI;
- (void)setShowsExpertParameters;
- (void)showExpertParamsHelper;
- (void)privUpdateColumnWidths;
- (float)addPropertyTitleAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (unsigned int)parameterCountForScope:(unsigned int)a0 element:(unsigned int)a1;
- (void)showExpertParams:(id)a0;
- (id)nameForScope:(unsigned int)a0 element:(unsigned int)a1;
- (void)scopeSelectionButtonPressed:(id)a0;
- (void)periodicUpdates:(id)a0;
- (void)refreshHistory:(id)a0;
- (void)showExpertParamsDisclosureTriangle;
- (void)removeScheduledUpdatesTimer;
- (void)createScheduledUpdatesTimer;
- (void)removeHistoryUpdatesTimer;
- (void)createHistoryUpdatesTimer;
- (void)adjustClumpHeights:(id)a0;
- (float)displayParameterClumpsForSegment:(int)a0 fromSegmentChangeEvent:(BOOL)a1;
- (void)sizeViewForAllParameters:(struct CGSize { double x0; double x1; })a0;
- (void)createParameterStripsIsThreaded:(BOOL)a0;
- (void)setProgressIndicatorIndeterminate;
- (void)createParameterClumpsIsThreaded:(BOOL)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)workhorseAssemblyFinalViewUpdates;
- (float)addAUTitleAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (float)addPropertiesAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (unsigned int)assessScopedElementsWithParametersAndReturnTotalNumberOfParameters;
- (float)addParameterTitleAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (float)addScopeSelectorAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)sizeHeaderComponentsToSize:(struct CGSize { double x0; double x1; })a0 andHeader:(BOOL)a1;
- (void)workhorseAssembly:(id)a0;
- (void)assembleView;
- (id)initWithAudioUnit:(struct OpaqueAudioComponentInstance { } *)a0 size:(struct CGSize { double x0; double x1; })a1 displayFlags:(unsigned int)a2 displayData:(id)a3;
- (void)destroyView;
- (void)eventListenerPropertyCallbackWithEvent:(const struct AudioUnitEvent { unsigned int x0; union { struct AudioUnitParameter { struct OpaqueAudioComponentInstance *x0; unsigned int x1; unsigned int x2; unsigned int x3; } x0; struct AudioUnitProperty { struct OpaqueAudioComponentInstance *x0; unsigned int x1; unsigned int x2; unsigned int x3; } x1; } x1; } *)a0;
- (float)addThreadedLoadingWidgetsAtPoint:(struct CGPoint { double x0; double x1; })a0 withParameterCount:(unsigned int)a1;
- (void)performCommonInitialization;
- (id)initWithAudioUnit:(struct OpaqueAudioComponentInstance { } *)a0 displayFlags:(unsigned int)a1;
- (id)initWithAudioUnit:(struct OpaqueAudioComponentInstance { } *)a0;
- (void)setViewAppearanceProperties:(id)a0;
- (void)setFilteredParameterList:(id)a0 exclude:(BOOL)a1;

@end
