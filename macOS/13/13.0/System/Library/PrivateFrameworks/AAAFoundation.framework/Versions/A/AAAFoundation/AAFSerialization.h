@class NSDictionary;

@interface AAFSerialization : NSObject {
    NSDictionary *_serializersByType;
}

+ (id)instance;
+ (id)dictionaryFromObject:(id)a0 ofType:(id)a1;
+ (id)dataFromDictionary:(id)a0 ofType:(id)a1;
+ (id)stringFromDictionary:(id)a0 ofType:(id)a1;
+ (id)ofType:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)serializerOfType:(id)a0;
- (void)addSerializer:(id)a0;

@end
