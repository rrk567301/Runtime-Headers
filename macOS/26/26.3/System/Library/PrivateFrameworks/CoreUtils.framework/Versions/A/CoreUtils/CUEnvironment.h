@class NSMutableDictionary;

@interface CUEnvironment : NSObject {
    NSMutableDictionary *_objects;
}

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)description;
- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;

@end
