@interface VMUDuplicatesAnalyzer : VMUAnalyzerBase

@property (nonatomic) char invertCallTrees;
@property (nonatomic) char showRawClassNames;
@property (nonatomic) char stringsOnly;
@property (nonatomic) unsigned long long minimumLabelCount;
@property (nonatomic) char showStacks;
@property (nonatomic) char fullStacks;
@property (nonatomic) char showCallTrees;
@property (nonatomic) char quiet;
@property (nonatomic) unsigned int objectContentLevel;

- (const char *)analyzerName;
- (id)_analysisSummaryWithGraphOrScanner:(id)a0;
- (id)analysisSummaryWithError:(id *)a0;
- (char)findStringDupsByStack:(id)a0 stackLogReader:(id)a1 block:(id /* block */)a2;
- (char)findStringDupsByStack:(id)a0 stackLogReader:(id)a1 fieldBlock:(id /* block */)a2;
- (char)findStringDupsInGraph:(id)a0 symbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a1 stackLogReader:(id)a2 block:(id /* block */)a3;
- (char)findStringDupsInGraph:(id)a0 symbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a1 stackLogReader:(id)a2 fieldBlock:(id /* block */)a3;
- (void)fullAnalysisWithBlock:(id /* block */)a0;
- (void)summaryWithGraph:(id)a0 block:(id /* block */)a1;

@end
