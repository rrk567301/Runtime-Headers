@class TITypologyTimer;

@interface TITypologyStatisticTimeElapsed : TITypologyStatistic

@property (retain, nonatomic) TITypologyTimer *timer;
@property (retain, nonatomic) TITypologyTimer *adjustedTimer;
@property (readonly, nonatomic) double elapsedTime;
@property (readonly, nonatomic) double adjustedElapsedTime;

- (id)aggregateReport;
- (void).cxx_destruct;
- (id)structuredReport;
- (void)visitRecordKeyboardInput:(id)a0;
- (id)init;

@end
