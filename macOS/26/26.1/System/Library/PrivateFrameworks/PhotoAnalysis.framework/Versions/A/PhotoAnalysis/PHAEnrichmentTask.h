@class NSString;
@protocol PGGraphDataModelEnrichmentProcessor;

@interface PHAEnrichmentTask : NSObject <PHATask>

@property (readonly, nonatomic) id<PGGraphDataModelEnrichmentProcessor> enrichmentProcessor;
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
- (BOOL)currentPlatformIsSupported;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (id)incrementalKey;
- (id)taskClassDependencies;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (BOOL)runWithGraphManager:(id)a0 withIncrementalChange:(id)a1 progressReporter:(id)a2 error:(id *)a3;

@end
