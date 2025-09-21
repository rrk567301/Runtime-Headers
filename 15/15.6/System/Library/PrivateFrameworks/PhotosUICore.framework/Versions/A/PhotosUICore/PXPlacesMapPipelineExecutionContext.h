@class NSArray, NSMapTable, NSMutableSet, PXPlacesMapViewPort, NSDate, NSMutableDictionary;

@interface PXPlacesMapPipelineExecutionContext : NSObject {
    NSDate *_start;
    NSMutableSet *_dataSources;
    NSMutableDictionary *_timerStartDataSource;
    NSMutableDictionary *_timerStopDataSource;
    NSMutableDictionary *_timerStartPipeline;
    NSMutableDictionary *_timerStopPipeline;
    NSDate *_timerStartPlanResultsExecution;
    NSDate *_timerStopPlanResultsExecution;
    id /* block */ _completionHandler;
    char _stopped;
    NSArray *_callstack;
}

@property (readonly) NSArray *dataSources;
@property (readonly) NSMapTable *changesForDataSources;
@property (readonly) double duration;
@property (retain) NSArray *updatePlanResults;
@property (retain) PXPlacesMapViewPort *viewPort;

- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)addDataSources:(id)a0 changesForDataSources:(id)a1;
- (id)durationForDataSources;
- (id)durationForPipelines;
- (id)initWithViewPort:(id)a0 completionHandler:(id /* block */)a1;
- (void)startTimerForDataSource:(id)a0;
- (void)startTimerForPipeline:(id)a0;
- (void)stopTimerForDataSource:(id)a0;
- (void)stopTimerForPipeline:(id)a0;

@end
