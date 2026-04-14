@class NSMutableDictionary;

@interface MTNonretainedCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache;

- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)objectForKeyedSubscript:(id)a0 creation:(id /* block */)a1;

@end
