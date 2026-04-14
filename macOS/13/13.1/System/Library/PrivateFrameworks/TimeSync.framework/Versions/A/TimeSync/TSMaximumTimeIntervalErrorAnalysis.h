@class NSArray;

@interface TSMaximumTimeIntervalErrorAnalysis : TSTimeErrorAnalysis {
    double *_negativeTimeErrors;
    double *_mtie;
}

@property (readonly, copy, nonatomic) NSArray *mtie;

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
- (void)_performAnalysisFromWindowSize:(long long)a0 toWindowSize:(long long)a1 stepSize:(long long)a2;
- (BOOL)exportAnalysisToDirectoryURL:(id)a0;
- (BOOL)exportAnalysisToDirectoryURL:(id)a0 withFilename:(id)a1 fromStartWindowSize:(long long)a2 toEndWindowSize:(long long)a3 stepSize:(long long)a4;
- (BOOL)exportTimeErrorsToDirectoryURL:(id)a0;
- (id)mtie;
- (id)mtieFromStartWindowSize:(long long)a0 toEndWindowSize:(long long)a1 stepSize:(long long)a2;

@end
