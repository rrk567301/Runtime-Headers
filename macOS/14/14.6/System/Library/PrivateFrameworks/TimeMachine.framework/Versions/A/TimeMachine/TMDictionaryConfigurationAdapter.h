@class NSMutableDictionary;

@interface TMDictionaryConfigurationAdapter : TMDefaultConfigurationAdapter

@property (retain) NSMutableDictionary *keyValueStorage;
@property BOOL failOnSynchronize;

+ (id)adapter;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)valueForKey:(id)a0;
- (BOOL)synchronize:(id *)a0;
- (BOOL)setValue:(id)a0 forKey:(id)a1 error:(id *)a2;

@end
