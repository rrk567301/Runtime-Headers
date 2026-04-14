@class NSString, VMUCallTreeNode;

@interface VMUTraceTreeAnalyzerResult : NSObject

@property (retain, nonatomic) VMUCallTreeNode *traceTreeRoot;
@property (retain, nonatomic) NSString *traceListString;
@property (nonatomic) unsigned int rootsCount;
@property (retain, nonatomic) NSString *traceNodeDescription;

- (void).cxx_destruct;

@end
