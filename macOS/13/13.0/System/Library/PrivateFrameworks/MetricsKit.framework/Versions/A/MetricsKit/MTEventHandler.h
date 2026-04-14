@class NSString, NSArray;
@protocol MTEventHandlerDelegate;

@interface MTEventHandler : MTEventDataProvider

@property (retain) NSString *registeredName;
@property (retain) NSArray *registeredEventData;
@property (retain) NSArray *postProcessingBlocks;
@property (weak) id<MTEventHandlerDelegate> delegate;

+ (id)currentEventContextCache;
+ (void)createEventContextCache;
+ (void)clearEventContextCache;
+ (id)cachableWithKey:(id)a0 onBackgroundThread:(BOOL)a1 block:(id /* block */)a2;

- (void).cxx_destruct;
- (id)eventType;
- (id)knownFields;
- (BOOL)mtIncludeBaseFields;
- (id)eventVersion:(id)a0;
- (id)metricsDataWithFields:(id)a0;
- (id)metricsDataWithEventData:(id)a0;
- (id)metricsDataWithCallerSuppliedFields:(id)a0;
- (void)didCreateMetricsData:(id)a0;
- (void)addPostProcessingBlock:(id /* block */)a0;

@end
