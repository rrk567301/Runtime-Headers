@class NSMutableDictionary;

@interface CVNLPCTCBeamState : NSObject

@property (retain, nonatomic) NSMutableDictionary *mutablePaths;

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)enumeratePathsWithBlock:(id /* block */)a0;
- (void)addPath:(id)a0;
- (id)pathForString:(id)a0;
- (id)paths;
- (id)sortedKeys;
- (void)kBest:(id *)a0 discarded:(id *)a1 k:(unsigned long long)a2 shouldUpdateLMState:(BOOL)a3;
- (void)mergePathsWithTrailingWhitespaces;

@end
