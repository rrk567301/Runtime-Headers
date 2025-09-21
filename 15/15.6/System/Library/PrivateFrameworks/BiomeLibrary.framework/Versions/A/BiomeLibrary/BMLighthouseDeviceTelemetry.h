@class NSString, NSDate;

@interface BMLighthouseDeviceTelemetry : BMEventBase <BMStoreData> {
    char _hasRaw_bucketStart;
    double _raw_bucketStart;
    char _hasRaw_bucketEnd;
    double _raw_bucketEnd;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int version;
@property (nonatomic) char hasVersion;
@property (readonly, nonatomic) NSDate *bucketStart;
@property (readonly, nonatomic) NSDate *bucketEnd;
@property (readonly, nonatomic) int tasksCount;
@property (nonatomic) char hasTasksCount;
@property (readonly, nonatomic) int tasksRun;
@property (nonatomic) char hasTasksRun;
@property (readonly, nonatomic) int tasksDeferred;
@property (nonatomic) char hasTasksDeferred;
@property (readonly, nonatomic) int tasksFailed;
@property (nonatomic) char hasTasksFailed;
@property (readonly, nonatomic) int tasksCompleted;
@property (nonatomic) char hasTasksCompleted;
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
- (id)initWithVersion:(id)a0 bucketStart:(id)a1 bucketEnd:(id)a2 tasksCount:(id)a3 tasksRun:(id)a4 tasksDeferred:(id)a5 tasksFailed:(id)a6 tasksCompleted:(id)a7;

@end
