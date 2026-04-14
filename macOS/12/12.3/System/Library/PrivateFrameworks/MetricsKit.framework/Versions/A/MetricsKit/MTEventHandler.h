@class NSString, NSArray;
@protocol MTEventHandlerDelegate;

@interface MTEventHandler : MTEventDataProvider

@property (retain) NSString *registeredName;
@property (retain) NSArray *registeredEventData;
@property (retain) NSArray *postProcessingBlocks;
@property (weak) id<MTEventHandlerDelegate> delegate;

+ (id)cachableWithKey:(id)a0 onBackgroundThread:(BOOL)a1 block:(id /* block */)a2;
+ (void)createEventContextCache;
+ (void)clearEventContextCache;
+ (id)currentEventContextCache;

- (void).cxx_destruct;
- (id)eventType;
- (id)metricsDataWithFields:(id)a0;
- (id)knownFields;
- (BOOL)mtIncludeBaseFields;
- (id)metricsDataWithCallerSuppliedFields:(id)a0;
- (void)addPostProcessingBlock:(id /* block */)a0;
- (id)eventVersion:(id)a0;
- (id)metricsDataWithEventData:(id)a0;
- (void)didCreateMetricsData:(id)a0;

@end
