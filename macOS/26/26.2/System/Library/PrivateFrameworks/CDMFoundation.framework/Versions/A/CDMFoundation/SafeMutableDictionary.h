@class NSMutableDictionary;

@interface SafeMutableDictionary : NSMutableDictionary {
    NSMutableDictionary *dictionary;
}

- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;

@end
