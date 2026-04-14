@class NSMutableArray;

@interface TSDMagicMoveMatchingEngine : NSObject {
    NSMutableArray *_matches;
}

+ (id)matchingEngine;

- (id)matchResults;
- (void).cxx_destruct;
- (id)init;
- (void)addMatches:(id)a0;
- (void)addMatch:(id)a0;

@end
