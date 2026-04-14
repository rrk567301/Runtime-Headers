@class AMApplicationDefinition, NSMutableDictionary, NSArray;

@interface AMApplicationRegistry : NSObject

@property (class, readonly, nonatomic) AMApplicationRegistry *sharedApplicationRegistry;

@property (retain) NSMutableDictionary *definitionRegistry;
@property (retain) NSMutableDictionary *typeRegistry;
@property BOOL didLoadDeprecatedDefinitions;
@property (readonly, nonatomic) AMApplicationDefinition *definitionForMainBundle;
@property (readonly, nonatomic) NSArray *applicationNames;
@property (readonly, nonatomic) NSArray *applicationDefinitions;

+ (id)imagePathKeyForApplicationWithName:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)nameForDefinedType:(id)a0;
- (void)loadNondeprecatedDefinitions;
- (id)_systemLibraryURL;
- (id)deprecatedSystemDefinitionLocation;
- (id)_definitionURLsAtLocations:(id)a0 deprecatedOnly:(BOOL)a1;
- (id)standardNondeprecatedDefinitionLocations;
- (void)setName:(id)a0 forDefinedType:(id)a1;
- (BOOL)loadDefinition:(id)a0;
- (BOOL)loadDefinitionAtURL:(id)a0;
- (id)deprecatedSystemDefinitionURLs;
- (void)_loadDefinitionsAtURLS:(id)a0;
- (void)_loadDeprecatedSystemDefinitions;
- (id)externalDefinitionURLs;
- (void)loadDeprecatedSystemDefinitionsIfNeeded;
- (id)definitionForApplicationName:(id)a0;

@end
