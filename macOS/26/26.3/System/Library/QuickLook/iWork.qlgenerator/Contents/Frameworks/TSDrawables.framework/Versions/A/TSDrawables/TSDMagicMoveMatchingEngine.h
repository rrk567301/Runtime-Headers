@class NSMutableArray;

@interface TSDMagicMoveMatchingEngine : NSObject {
    NSMutableArray *_matches;
}

+ (id)matchingEngine;

- (id)init;
- (void).cxx_destruct;
- (id)matchResults;
- (void)addMatches:(id)a0;
- (void)addMatch:(id)a0;

@end
