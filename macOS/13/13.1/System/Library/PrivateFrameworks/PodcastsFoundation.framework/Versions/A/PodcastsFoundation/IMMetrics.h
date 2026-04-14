@interface IMMetrics : NSObject

+ (void)initialize;
+ (void)disable;
+ (void)enable;
+ (id)flushImmediately;
+ (void)setLogLevel:(int)a0;
+ (void)startTimer:(id)a0;
+ (void)recordEvent:(id)a0;
+ (void)recordUserAction:(id)a0;
+ (void)cancelFlush;
+ (BOOL)canRecordEvent;
+ (void)setDefaultMetricsController:(id)a0;
+ (void)addMetricsController:(id)a0;
+ (void)removeMetricsController:(id)a0;
+ (id)defaultMetricsController;
+ (id)metricsControllerForTopic:(id)a0;
+ (void)recordUserAction:(id)a0 dataSource:(id)a1;
+ (void)recordUserAction:(id)a0 dataSource:(id)a1 withData:(id)a2;
+ (void)startTimer:(id)a0 dataSource:(id)a1;
+ (double)endTimer:(id)a0;
+ (double)endTimer:(id)a0 dataSource:(id)a1;
+ (double)endTimer:(id)a0 dataSource:(id)a1 withData:(id)a2;
+ (id)keyForTimerName:(id)a0 dataSource:(id)a1;
+ (void)setupEvent:(id)a0 forDataSource:(id)a1;
+ (void)recordMemory:(id)a0;
+ (void)recordEvent:(id)a0 topic:(id)a1;
+ (void)recordEvent:(id)a0 with:(id)a1;
+ (void)recordEvent:(id)a0 dataSource:(id)a1 data:(id)a2;
+ (void)recordEvent:(id)a0 dataSource:(id)a1 data:(id)a2 topic:(id)a3;

@end
