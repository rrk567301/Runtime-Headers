@class NSMutableDictionary;

@interface AFDictionarySchema : NSObject {
    NSMutableDictionary *_coercions;
}

- (void).cxx_destruct;
- (id)init;
- (id)coerceObject:(id)a0 error:(id *)a1;
- (void)setObjectCoercion:(id)a0 forKey:(id)a1;

@end
