@class NSString;

@interface PHAMemoriesEnrichmentTask : NSObject <PHATask> {
    unsigned long long _numberOfMemoriesToEnrich;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) unsigned long long featureCode;
@property (readonly, nonatomic) char featureAvailable;
@property (readonly, nonatomic) char featureComplete;
@property (readonly, nonatomic) double incrementalWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOptions:(id)a0;
- (int)priority;
- (char)currentPlatformIsSupported;
- (id)incrementalKey;
- (id)memoriesEnrichmentProcessor;
- (char)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (char)runWithGraphManager:(id)a0 withIncrementalChange:(id)a1 progressReporter:(id)a2 error:(id *)a3;
- (char)shouldRunWithGraphManager:(id)a0;
- (id)taskClassDependencies;
- (void)timeoutFatal:(char)a0;

@end
