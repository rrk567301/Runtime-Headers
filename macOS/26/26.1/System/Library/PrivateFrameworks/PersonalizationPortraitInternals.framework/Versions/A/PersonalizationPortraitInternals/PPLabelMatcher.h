@class NSDictionary;

@interface PPLabelMatcher : NSObject {
    NSDictionary *_map;
}

+ (id)sharedInstance;

- (unsigned long long)matchFromLabel:(id)a0 toLabel:(id)a1;
- (id)_generateMap;
- (void).cxx_destruct;
- (id)init;

@end
