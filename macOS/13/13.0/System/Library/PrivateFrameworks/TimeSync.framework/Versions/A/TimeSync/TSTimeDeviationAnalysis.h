@class NSArray;

@interface TSTimeDeviationAnalysis : TSTimeErrorAnalysis {
    double *_tdev;
}

@property (readonly, copy, nonatomic) NSArray *tdev;

+ (id)variableName;
+ (id)plotYLabel;
+ (id)plotTitle;
+ (id)plotSize;

- (void)dealloc;
- (id)initWithTimeErrorValues:(id)a0;
- (long long)analysisLimit;
- (long long)threadingLimit;
- (long long)threadingSegment;
- (void)_performAnalysisFromWindowSize:(long long)a0 toWindowSize:(long long)a1 stepSize:(long long)a2;
- (BOOL)exportAnalysisToDirectoryURL:(id)a0;
- (BOOL)exportAnalysisToDirectoryURL:(id)a0 withFilename:(id)a1 fromStartWindowSize:(long long)a2 toEndWindowSize:(long long)a3 stepSize:(long long)a4;
- (BOOL)exportTimeErrorsToDirectoryURL:(id)a0;
- (id)tdev;
- (id)tdevFromStartWindowSize:(long long)a0 toEndWindowSize:(long long)a1 stepSize:(long long)a2;

@end
