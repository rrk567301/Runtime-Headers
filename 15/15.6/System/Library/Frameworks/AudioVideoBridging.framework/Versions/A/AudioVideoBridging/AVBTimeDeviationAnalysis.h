@class NSArray;

@interface AVBTimeDeviationAnalysis : AVBTimeErrorAnalysis {
    double *_tdev;
}

@property (readonly, copy, nonatomic) NSArray *tdev;

- (void)dealloc;
- (char)exportTimeErrorsToDirectoryURL:(id)a0;
- (void)_performAnalysisFromWindowSize:(long long)a0 toWindowSize:(long long)a1 stepSize:(long long)a2;
- (long long)analysisLimit;
- (char)exportAnalysisToDirectoryURL:(id)a0;
- (char)exportAnalysisToDirectoryURL:(id)a0 withFilename:(id)a1 fromStartWindowSize:(long long)a2 toEndWindowSize:(long long)a3 stepSize:(long long)a4;
- (id)plotSize;
- (id)plotTitle;
- (id)plotYLabel;
- (id)tdev;
- (id)tdevFromStartWindowSize:(long long)a0 toEndWindowSize:(long long)a1 stepSize:(long long)a2;
- (long long)threadingLimit;
- (long long)threadingSegment;
- (id)variableName;
- (id)initWithTimeErrorSequence:(id)a0;

@end
