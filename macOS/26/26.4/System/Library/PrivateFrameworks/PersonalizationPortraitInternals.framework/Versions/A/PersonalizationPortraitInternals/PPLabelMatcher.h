@class NSDictionary;

@interface PPLabelMatcher : NSObject {
    NSDictionary *_map;
}

+ (id)sharedInstance;

- (id)_generateMap;
- (unsigned long long)matchFromLabel:(id)a0 toLabel:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
