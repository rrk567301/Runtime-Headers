@class NSString, ICSearchIndexProgress;

@interface ICSearchIndexProgressCoordinator : NSObject

@property (class, nonatomic, readonly) NSString *contextName;

@property (nonatomic, weak) void /* function */ dataSource;
@property (nonatomic, retain) ICSearchIndexProgress *progress;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)init;
- (long long)willIndexItems:(id)a0;
- (void)didIndexItems:(id)a0 willIndexState:(long long)a1;
- (void)finishBatch;
- (void)revertStaging:(id)a0;
- (void)stageForProcessing:(id)a0;
- (void)stageForReindex:(id)a0;
- (void)willDeleteItems:(id)a0;

@end
