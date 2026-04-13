@class NSMutableSet;

@interface AMSMutableBagKeySet : AMSBagKeySet

@property (retain) NSMutableSet *mutableKeys;

- (id)init;
- (void).cxx_destruct;
- (id)keys;
- (void)addBagKey:(id)a0 valueType:(unsigned long long)a1;
- (void)addBagKey:(id)a0 valueType:(unsigned long long)a1 defaultValue:(id)a2;
- (void)unionBagKeySet:(id)a0;

@end
