@class OITSUProgressContext;

@interface OITSUProgressStage : NSObject {
    double m_currentPosition;
    double m_totalSteps;
    double m_stepsInParent;
    double m_startInParent;
    double m_nextSubStageParentSize;
    OITSUProgressStage *m_parentStage;
    OITSUProgressContext *m_context;
}

- (void)dealloc;
- (id)description;
- (void)end;
- (void)setProgress:(double)a0;
- (double)currentPosition;
- (void)advanceProgress:(double)a0;
- (double)overallProgress;
- (id)initRootStageInContext:(id)a0;
- (id)initWithSteps:(double)a0 takingSteps:(double)a1 inContext:(id)a2;
- (void)setProgressPercentage:(double)a0;
- (id)parentStage;
- (double)nextSubStageParentSize;
- (void)setNextSubStageParentSize:(double)a0;

@end
