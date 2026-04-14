@class NSMutableDictionary;

@interface TMDictionaryConfiguration : TMConfiguration

@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain) NSMutableDictionary *keyValueStorage;

- (void)setRawValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)rawValueForKey:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)init;

@end
