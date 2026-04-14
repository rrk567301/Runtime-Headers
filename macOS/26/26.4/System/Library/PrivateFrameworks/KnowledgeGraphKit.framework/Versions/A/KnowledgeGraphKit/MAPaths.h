@class NSMutableArray;

@interface MAPaths : NSObject {
    NSMutableArray *_paths;
}

+ (id)paths;
+ (id)pathsWithPaths:(id)a0;

- (void)enumerateWithBlock:(id /* block */)a0;
- (void)setPaths:(id)a0;
- (void)addPath:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)count;
- (id)description;
- (id)pathAtIndex:(unsigned long long)a0;
- (id)graphRepresentationWithStrictNodes:(BOOL)a0 strictEdges:(BOOL)a1;
- (void)removeAllPaths;
- (id)uniqueEdgesForLabel:(id)a0;
- (id)uniqueNodesForLabel:(id)a0;

@end
