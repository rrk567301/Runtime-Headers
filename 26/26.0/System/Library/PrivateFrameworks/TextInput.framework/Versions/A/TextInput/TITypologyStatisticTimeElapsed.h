@class TITypologyTimer;

@interface TITypologyStatisticTimeElapsed : TITypologyStatistic

@property (retain, nonatomic) TITypologyTimer *timer;
@property (retain, nonatomic) TITypologyTimer *adjustedTimer;
@property (readonly, nonatomic) double elapsedTime;
@property (readonly, nonatomic) double adjustedElapsedTime;

- (void)visitRecordKeyboardInput:(id)a0;
- (id)init;
- (id)aggregateReport;
- (id)structuredReport;
- (void).cxx_destruct;

@end
