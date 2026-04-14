@class NSMutableDictionary;

@interface SafeMutableDictionary : NSMutableDictionary {
    NSMutableDictionary *dictionary;
}

- (id)objectForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
