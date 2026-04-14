@class NSMutableDictionary;

@interface TUTestState : NSObject {
    NSMutableDictionary *_objects;
}

@property (readonly, nonatomic) int signalCount;

- (void)signal;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (int)waitWithTimeout:(double)a0;
- (id)description;
- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (void)incrementIntegerForKey:(id)a0;

@end
