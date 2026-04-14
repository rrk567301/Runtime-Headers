@class NSMutableDictionary;

@interface DDStatsBuilder : NSObject {
    NSMutableDictionary *_knownParserStates;
}

- (void)dealloc;
- (id)init;
- (void)flush;
- (void)handleState:(long long)a0 withStack:(void *)a1;
- (id)parserStateWithStateIndex:(long long)a0;
- (id)rootStates;
- (id)allStates;

@end
