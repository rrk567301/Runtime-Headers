@class NSArray, NSMutableDictionary;

@interface IKAnimationGroup : NSObject {
    NSArray *_cells;
    float _timeValue;
    NSMutableDictionary *_parameters;
    BOOL _finished;
}

- (void)dealloc;
- (id)init;
- (int)level;
- (void)setFinished:(BOOL)a0;
- (BOOL)finished;
- (id)cells;
- (id)parameters;
- (void)setCells:(id)a0;
- (float)timeValue;
- (void)setTimeValue:(float)a0;
- (void)updateTimeValue:(double)a0;
- (BOOL)animationManager:(id)a0 processCell:(id)a1 channel:(id)a2;
- (BOOL)handleChannel:(id)a0;
- (BOOL)needInitialDataForKey:(id)a0;
- (id)initialKeysNeeded;
- (BOOL)needFinalDataForKey:(id)a0;
- (BOOL)animationManager:(id)a0 processStep:(id)a1;
- (void)didFinish:(id)a0;

@end
