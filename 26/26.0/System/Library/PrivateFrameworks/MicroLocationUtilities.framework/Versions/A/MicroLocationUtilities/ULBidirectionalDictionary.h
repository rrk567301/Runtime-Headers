@class NSMutableDictionary;

@interface ULBidirectionalDictionary : NSObject

@property (retain, nonatomic) NSMutableDictionary *keyToValueMap;
@property (retain, nonatomic) NSMutableDictionary *valueToKeyMap;

- (id)objectForKey:(id)a0;
- (id)init;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)keyForObject:(id)a0;
- (void).cxx_destruct;

@end
