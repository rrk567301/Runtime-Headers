@class NSString, NSMutableDictionary;

@interface MTInMemoryDefaults : NSObject <MTPersistence>

@property (retain, nonatomic) NSMutableDictionary *storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setFloat:(float)a0 forKey:(id)a1;
- (void)synchronize;
- (id)objectForKey:(id)a0 defaultValue:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (float)floatForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)init;

@end
