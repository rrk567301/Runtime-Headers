@interface TSTimeErrorAnalysis : NSObject

@property (readonly, nonatomic) long long numberOfErrors;
@property (readonly, nonatomic) double *timestamps;
@property (readonly, nonatomic) double *timeErrors;
@property (readonly, nonatomic) double averagePeriod;
@property (readonly, nonatomic) BOOL calculated;
@property (readonly, nonatomic) long long lowestWindowSize;
@property (readonly, nonatomic) long long highestWindowSize;
@property (readonly, nonatomic) long long calculatedStepSize;
@property (readonly, nonatomic) long long analysisLimit;
@property (readonly, nonatomic) long long threadingLimit;
@property (readonly, nonatomic) long long threadingSegment;

+ (id)keyPathsForValuesAffectingAnalysisLimit;
+ (id)generatePythonScriptWithOutputPath:(id)a0 fileName:(id)a1 titleName:(id)a2 plotPath:(id)a3 showPlot:(BOOL)a4;
+ (id)variableName;
+ (id)plotYLabel;
+ (id)plotTitle;
+ (id)plotYLimits:(id)a0;
+ (id)plotSize;
+ (id)additionalScriptInitialization;
+ (id)additionalScriptRecords;
+ (id)additionalScriptPlots:(id)a0;

- (void)dealloc;
- (id)initWithTimeErrorValues:(id)a0;
- (long long)analysisLimit;
- (long long)threadingLimit;
- (long long)threadingSegment;
- (void)_performAnalysisFromWindowSize:(long long)a0 toWindowSize:(long long)a1 stepSize:(long long)a2;
- (void)performAnalysis;
- (void)performAnalysisWithThreadingOption:(long long)a0;
- (void)performAnalysisFromStartWindowSize:(long long)a0 toEndWindowSize:(long long)a1 stepSize:(long long)a2;
- (void)performAnalysisFromStartWindowSize:(long long)a0 toEndWindowSize:(long long)a1 stepSize:(long long)a2 withThreadingOption:(long long)a3;
- (BOOL)exportAnalysisToDirectoryURL:(id)a0;
- (BOOL)exportAnalysisToDirectoryURL:(id)a0 withFilename:(id)a1;
- (BOOL)exportAnalysisToDirectoryURL:(id)a0 withFilename:(id)a1 fromStartWindowSize:(long long)a2 toEndWindowSize:(long long)a3 stepSize:(long long)a4;
- (BOOL)exportTimeErrorsToDirectoryURL:(id)a0;
- (BOOL)exportTimeErrorsToDirectoryURL:(id)a0 withFilename:(id)a1;

@end
