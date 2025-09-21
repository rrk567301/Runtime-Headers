@class NSMutableArray;

@interface MAPaths : NSObject {
    NSMutableArray *_paths;
}

+ (id)paths;
+ (id)pathsWithPaths:(id)a0;

- (unsigned long long)count;
- (void)setPaths:(id)a0;
- (id)init;
- (void)enumerateWithBlock:(id /* block */)a0;
- (id)description;
- (void)addPath:(id)a0;
- (void).cxx_destruct;
- (id)pathAtIndex:(unsigned long long)a0;
- (id)graphRepresentationWithStrictNodes:(BOOL)a0 strictEdges:(BOOL)a1;
- (void)removeAllPaths;
- (id)uniqueEdgesForLabel:(id)a0;
- (id)uniqueNodesForLabel:(id)a0;

@end
