@class NSArray, NSMutableDictionary;

@interface IKAnimationGroup : NSObject {
    NSArray *_cells;
    float _timeValue;
    NSMutableDictionary *_parameters;
    char _finished;
}

- (void)dealloc;
- (id)init;
- (int)level;
- (char)finished;
- (void)setFinished:(char)a0;
- (id)parameters;
- (id)cells;
- (void)setCells:(id)a0;
- (void)setTimeValue:(float)a0;
- (float)timeValue;
- (void)updateTimeValue:(double)a0;
- (char)animationManager:(id)a0 processCell:(id)a1 channel:(id)a2;
- (char)animationManager:(id)a0 processStep:(id)a1;
- (void)didFinish:(id)a0;
- (char)handleChannel:(id)a0;
- (id)initialKeysNeeded;
- (char)needFinalDataForKey:(id)a0;
- (char)needInitialDataForKey:(id)a0;

@end
