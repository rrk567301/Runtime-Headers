@class NSMutableDictionary;

@interface ULBidirectionalDictionary : NSObject

@property (retain, nonatomic) NSMutableDictionary *keyToValueMap;
@property (retain, nonatomic) NSMutableDictionary *valueToKeyMap;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)keyForObject:(id)a0;
- (id)objectForKey:(id)a0;
- (id)init;

@end
