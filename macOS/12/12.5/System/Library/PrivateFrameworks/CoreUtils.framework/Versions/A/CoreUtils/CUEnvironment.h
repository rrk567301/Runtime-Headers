@class NSMutableDictionary;

@interface CUEnvironment : NSObject {
    NSMutableDictionary *_objects;
}

- (id)description;
- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;

@end
