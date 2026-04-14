@class NSString;

@interface PHAGraphRebuildTask : NSObject <PHATask>

@property (readonly, nonatomic) unsigned long long rebuildTaskMode;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) unsigned long long featureCode;
@property (readonly, nonatomic) BOOL featureAvailable;
@property (readonly, nonatomic) BOOL featureComplete;
@property (readonly, nonatomic) double incrementalWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)timeoutFatal:(BOOL)a0;
- (int)priority;
- (id)initWithMode:(unsigned long long)a0;
- (BOOL)currentPlatformIsSupported;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (id)incrementalKey;
- (id)taskClassDependencies;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (id)init;
- (BOOL)runWithGraphManager:(id)a0 withIncrementalChange:(id)a1 progressReporter:(id)a2 error:(id *)a3;
- (BOOL)shouldRunIncrementallyWithGraphManager:(id)a0 incrementalChange:(id)a1 timeIntervalSinceNonIncrementalRun:(double)a2;

@end
