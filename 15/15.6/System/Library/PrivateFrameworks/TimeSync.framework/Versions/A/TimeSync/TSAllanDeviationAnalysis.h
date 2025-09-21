@class NSArray;

@interface TSAllanDeviationAnalysis : TSTimeErrorAnalysis {
    double *_adev;
}

@property (readonly, copy, nonatomic) NSArray *adev;

+ (id)plotSize;
+ (id)plotTitle;
+ (id)plotYLabel;
+ (id)variableName;

- (void)dealloc;
- (char)exportTimeErrorsToDirectoryURL:(id)a0;
- (void)_performAnalysisFromWindowSize:(long long)a0 toWindowSize:(long long)a1 stepSize:(long long)a2;
- (id)adev;
- (id)adevFromStartWindowSize:(long long)a0 toEndWindowSize:(long long)a1 stepSize:(long long)a2;
- (long long)analysisLimit;
- (char)exportAnalysisToDirectoryURL:(id)a0;
- (char)exportAnalysisToDirectoryURL:(id)a0 withFilename:(id)a1 fromStartWindowSize:(long long)a2 toEndWindowSize:(long long)a3 stepSize:(long long)a4;
- (id)initWithTimeErrorValues:(id)a0;

@end
