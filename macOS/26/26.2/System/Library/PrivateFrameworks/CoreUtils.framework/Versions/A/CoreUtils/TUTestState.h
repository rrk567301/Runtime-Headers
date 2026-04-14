@class NSMutableDictionary;

@interface TUTestState : NSObject {
    NSMutableDictionary *_objects;
}

@property (readonly, nonatomic) int signalCount;

- (void)signal;
- (int)waitWithTimeout:(double)a0;
- (void).cxx_destruct;
- (id)description;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)incrementIntegerForKey:(id)a0;

@end
