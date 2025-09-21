@interface TSTimeErrorAnalysis : NSObject

@property (readonly, nonatomic) long long numberOfErrors;
@property (readonly, nonatomic) double *timestamps;
@property (readonly, nonatomic) double *timeErrors;
@property (readonly, nonatomic) double averagePeriod;
@property (readonly, nonatomic) char calculated;
@property (readonly, nonatomic) long long lowestWindowSize;
@property (readonly, nonatomic) long long highestWindowSize;
@property (readonly, nonatomic) long long calculatedStepSize;
@property (readonly, nonatomic) long long analysisLimit;
@property (readonly, nonatomic) long long threadingLimit;
@property (readonly, nonatomic) long long threadingSegment;

+ (id)additionalScriptInitialization;
+ (id)additionalScriptPlots:(id)a0;
+ (id)additionalScriptRecords;
+ (id)generatePythonScriptWithOutputPath:(id)a0 fileName:(id)a1 titleName:(id)a2 plotPath:(id)a3 showPlot:(char)a4;
+ (id)keyPathsForValuesAffectingAnalysisLimit;
+ (id)plotSize;
+ (id)plotTitle;
+ (id)plotYLabel;
+ (id)plotYLimits:(id)a0;
+ (id)variableName;

- (void)dealloc;
- (char)exportTimeErrorsToDirectoryURL:(id)a0;
- (void)performAnalysis;
- (void)_performAnalysisFromWindowSize:(long long)a0 toWindowSize:(long long)a1 stepSize:(long long)a2;
- (long long)analysisLimit;
- (char)exportAnalysisToDirectoryURL:(id)a0;
- (char)exportAnalysisToDirectoryURL:(id)a0 withFilename:(id)a1;
- (char)exportAnalysisToDirectoryURL:(id)a0 withFilename:(id)a1 fromStartWindowSize:(long long)a2 toEndWindowSize:(long long)a3 stepSize:(long long)a4;
- (char)exportTimeErrorsToDirectoryURL:(id)a0 withFilename:(id)a1;
- (id)initWithTimeErrorValues:(id)a0;
- (void)performAnalysisFromStartWindowSize:(long long)a0 toEndWindowSize:(long long)a1 stepSize:(long long)a2;
- (void)performAnalysisFromStartWindowSize:(long long)a0 toEndWindowSize:(long long)a1 stepSize:(long long)a2 withThreadingOption:(long long)a3;
- (void)performAnalysisWithThreadingOption:(long long)a0;
- (long long)threadingLimit;
- (long long)threadingSegment;

@end
