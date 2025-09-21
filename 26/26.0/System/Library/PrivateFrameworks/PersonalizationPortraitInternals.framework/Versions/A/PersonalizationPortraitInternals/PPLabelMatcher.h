@class NSDictionary;

@interface PPLabelMatcher : NSObject {
    NSDictionary *_map;
}

+ (id)sharedInstance;

- (id)init;
- (unsigned long long)matchFromLabel:(id)a0 toLabel:(id)a1;
- (id)_generateMap;
- (void).cxx_destruct;

@end
