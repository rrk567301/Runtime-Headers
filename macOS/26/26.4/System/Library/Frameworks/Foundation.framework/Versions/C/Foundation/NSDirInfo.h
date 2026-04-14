@class NSMutableDictionary;

@interface NSDirInfo : NSMutableDictionary {
    NSMutableDictionary *dict;
}

- (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;
- (id)objectForKey:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithContentsOfFile:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)init;
- (unsigned long long)count;
- (id)keyEnumerator;
- (void)dealloc;
- (id)serializeToData;
- (unsigned long long)writePath:(id)a0 docInfo:(id)a1 errorHandler:(id)a2 remapContents:(BOOL)a3 hardLinkPath:(id)a4;

@end
