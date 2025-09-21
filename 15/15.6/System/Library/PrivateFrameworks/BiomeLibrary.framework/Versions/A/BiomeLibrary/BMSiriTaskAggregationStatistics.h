@class NSString;

@interface BMSiriTaskAggregationStatistics : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) unsigned int completedSystemTasks;
@property (nonatomic) char hasCompletedSystemTasks;
@property (readonly, nonatomic) unsigned int failedSystemTasks;
@property (nonatomic) char hasFailedSystemTasks;
@property (readonly, nonatomic) unsigned int cancelledSystemTasks;
@property (nonatomic) char hasCancelledSystemTasks;
@property (readonly, nonatomic) unsigned int tasksPerformedWithUI;
@property (nonatomic) char hasTasksPerformedWithUI;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (char)isEqual:(id)a0;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithCompletedSystemTasks:(id)a0 failedSystemTasks:(id)a1 cancelledSystemTasks:(id)a2 tasksPerformedWithUI:(id)a3;

@end
