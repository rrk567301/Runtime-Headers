@class SMSystem_Daemon, NSArray, NSDictionary, NSMutableDictionary, SMSystem_Daemon_Windows, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SMWindowsAnalyzer : NSObject

@property (readonly, nonatomic) NSDictionary *longTermSourceSystemIdentifier;
@property (readonly, nonatomic) NSDictionary *longTermComparisonSystemIdentifier;
@property (retain) NSObject<OS_dispatch_queue> *analysisQueue;
@property BOOL finished;
@property BOOL cancelled;
@property (retain) NSArray *customPaths;
@property unsigned long long customSystemPathsSize;
@property unsigned long long customSystemToUserPathsSize;
@property (retain) NSMutableDictionary *customUserToUserPathSizes;
@property (retain) NSMutableDictionary *customUserToSystemPathSizes;
@property (retain) NSMutableDictionary *preliminaryComponentSizeDelegates;
@property (retain) NSMutableArray *preliminaryCustomPathsSizeDelegates;
@property (readonly) SMSystem_Daemon_Windows *system;
@property (readonly) SMSystem_Daemon *comparisonSystem;

+ (id)customPathsFromProfile:(id)a0;
+ (id)loadCustomPathsFromProfile;
+ (BOOL)hasCustomPaths;

- (void).cxx_destruct;
- (void)cancelAnalysis;
- (id)initWithSystem:(id)a0 comparisonSystem:(id)a1;
- (void)analyzeSystem;
- (void)doAnalysis;
- (void)ensureSystemIsAnalyzed;
- (BOOL)isSystemAnalyzed;
- (void)sizeOfComponent:(id)a0 callbackBlock:(id /* block */)a1;
- (void)sizeOfCustomPathsType:(unsigned long long)a0 user:(id)a1 callbackBlock:(id /* block */)a2;
- (id)customPathsFromProfile;
- (void)notifyPreliminarySizeDelegatesForComponent:(id)a0 preliminarySize:(unsigned long long)a1;
- (void)addPreliminarySizeDelegate:(id)a0 forComponent:(id)a1;
- (void)removePreliminarySizeDelegate:(id)a0 forComponent:(id)a1;
- (void)notifyPreliminarySizeDelegatesForCustomPaths:(unsigned long long)a0 type:(unsigned long long)a1 user:(id)a2;
- (void)addPreliminaryCustomPathsSizeDelegate:(id)a0;
- (void)removePreliminaryCustomPathsSizeDelegate:(id)a0;
- (void)traceAnalysis;

@end
