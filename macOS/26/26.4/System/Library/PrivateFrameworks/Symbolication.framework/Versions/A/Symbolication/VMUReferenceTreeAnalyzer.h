@interface VMUReferenceTreeAnalyzer : VMUAnalyzerBase

@property (nonatomic) BOOL showRawClassNames;
@property (nonatomic) BOOL groupByType;
@property (nonatomic) BOOL showRegionVirtualSize;

- (id)buildReferenceTree;

@end
