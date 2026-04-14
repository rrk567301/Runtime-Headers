@class NSString, NSArray;

@interface TFDataAggregationTask : NSObject

@property (copy, nonatomic) id /* block */ loadDataBlock;
@property (copy, nonatomic) id /* block */ extractValuesBlock;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *logKey;
@property (readonly, copy, nonatomic) NSArray *providedEntryIdentifiers;

+ (id)deviceType;
+ (id)networkType;
+ (double)batteryLevel;
+ (id)networkInfoTask;
+ (id)cellularServiceInfo;
+ (id)sessionInfoTaskForIdentifier:(id)a0;
+ (id)snapshotTasksForSession:(id)a0;
+ (id)anytimeTasksForSession:(id)a0;
+ (struct CGSize { double x0; double x1; })screenDimensions;
+ (id)deviceInfoTask;
+ (id)regionInfoTask;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 providedEntryIdentifiers:(id)a1;
- (void)loadDataOnQueue:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)extractDataPropertiesFromData:(id)a0 intoDataContainer:(id)a1;

@end
