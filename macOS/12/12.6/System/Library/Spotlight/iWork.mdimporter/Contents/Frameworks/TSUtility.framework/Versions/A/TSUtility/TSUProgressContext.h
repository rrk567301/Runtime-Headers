@class NSDate, TSUProgressStage;

@interface TSUProgressContext : NSObject {
    TSUProgressStage *m_currentStage;
    NSDate *m_lastReportTime;
    double m_lastProgressReport;
    double m_lastOverallProgress;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (void)setMessage:(id)a0;
- (void)reset;
- (void)setProgress:(double)a0;
- (double)currentPosition;
- (void)createStageWithSteps:(double)a0 takingSteps:(double)a1;
- (id)currentStage;
- (void)advanceProgress:(double)a0;
- (double)overallProgress;
- (void)addProgressObserver:(id)a0 selector:(SEL)a1;
- (id)addProgressObserverBlock:(id /* block */)a0;
- (void)removeProgressObserver:(id)a0;
- (void)createStageWithSteps:(double)a0;
- (void)nextSubStageWillTakeThisManyOfMySteps:(double)a0;
- (void)endStage;
- (void)setPercentageProgressFromTCProgressContext:(double)a0;
- (void)reportProgress:(double)a0 overallProgress:(double)a1;

@end
