@class AXKApplicationController;

@interface AXKRemoteSearchManager : AXFRemoteSearchManager

@property (weak, nonatomic) AXKApplicationController *_applicationController;

+ (char)elementSupportsSearch:(id)a0;

- (void).cxx_destruct;
- (id)initWithContainer:(id)a0 startElement:(id)a1 searchKeys:(id)a2 searchText:(id)a3 visibleOnly:(char)a4;
- (id)nextNavigableResult;
- (id)nextResult;
- (id)nextResultsWithLimit:(unsigned long long)a0;
- (id)previousNavigableResult;
- (id)previousResult;
- (id)previousResultsWithLimit:(unsigned long long)a0;

@end
