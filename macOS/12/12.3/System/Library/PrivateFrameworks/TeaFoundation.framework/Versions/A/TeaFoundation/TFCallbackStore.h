@class NSMutableDictionary;

@interface TFCallbackStore : NSObject

@property (readonly, nonatomic) NSMutableDictionary *store;

- (id)init;
- (void).cxx_destruct;
- (id)lookupForKey:(id)a0;
- (void)storeCallbackDefinition:(id)a0 forKey:(id)a1 scope:(id)a2;

@end
