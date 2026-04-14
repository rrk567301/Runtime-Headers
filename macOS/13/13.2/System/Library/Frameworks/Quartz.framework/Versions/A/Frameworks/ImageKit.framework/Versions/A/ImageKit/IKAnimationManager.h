@class NSArray, NSView, NSMutableIndexSet, NSMutableDictionary, NSMutableArray, NSTimer;

@interface IKAnimationManager : NSObject {
    NSView *_view;
    NSMutableArray *_groups;
    int _perspectiveNeededCount;
    float _frameRate;
    NSArray *_channels;
    BOOL _lockRemove;
    NSMutableArray *_groupsToRemove;
    NSMutableIndexSet *_cellsToRenderIndexes;
    NSMutableIndexSet *_cellsRenderedIndexes;
    NSMutableDictionary *_animatedCells;
    NSMutableDictionary *_cellToIndexDictionaryCache;
    unsigned int _datasourceVersionCache;
    NSTimer *_animationTimer;
    NSArray *_animatedCellsArrayCache;
}

@property BOOL allowsSlowMotion;

- (void)dealloc;
- (id)init;
- (void)finalize;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)view;
- (id)groups;
- (void)setView:(id)a0;
- (void)updateTime;
- (void)removeGroup:(id)a0;
- (void)onAnimationTimer;
- (void)declareChannels:(id)a0;
- (void)invalidateAnimatedCellsArrayCache;
- (id)animatedCellsArrayCache:(BOOL)a0;
- (void)_addCells:(id)a0;
- (id)animationDataForCell:(id)a0 forKey:(id)a1;
- (BOOL)cell:(id)a0 needInitialDataForKey:(id)a1;
- (BOOL)cell:(id)a0 needFinalDataForKey:(id)a1;
- (id)initialValueForKey:(id)a0 forCell:(id)a1;
- (id)finalValueForKey:(id)a0 forCell:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1 forCell:(id)a2;
- (void)didUpdateValueForKey:(id)a0 forCell:(id)a1;
- (void)_removeGroup:(id)a0;
- (void)addAnimationGroup:(id)a0;
- (void)didChangeValueForKey:(id)a0 forIndexes:(id)a1;
- (void)willChangeValueForKey:(id)a0 forIndexes:(id)a1;
- (BOOL)isCellAnimated:(id)a0;
- (BOOL)perspectiveIsNeeded;
- (id)animatedCells;
- (id)cellsToRenderIndexes;
- (id)cellsRenderedIndexes;
- (void)updateAnimationTimes;
- (void)removeAnimationsOutOfDate;
- (void)evalPreRenderingAnimations;
- (void)evalPostRenderingAnimations;
- (void)evalRenderTimeAnimations;
- (void)addIndexInRenderList:(int)a0;
- (void)playAnimationsSynchronously;

@end
