@class NSMutableDictionary;

@interface TUTestState : NSObject {
    NSMutableDictionary *_objects;
}

@property (readonly, nonatomic) int signalCount;

- (id)description;
- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)signal;
- (void)incrementIntegerForKey:(id)a0;
- (int)waitWithTimeout:(double)a0;

@end
