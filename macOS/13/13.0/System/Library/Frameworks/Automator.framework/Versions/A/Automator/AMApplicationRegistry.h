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
- (id)standardNondeprecatedDefinitionLocations;
- (id)deprecatedSystemDefinitionLocation;
- (id)_systemLibraryURL;
- (id)_definitionURLsAtLocations:(id)a0 deprecatedOnly:(BOOL)a1;
- (id)deprecatedSystemDefinitionURLs;
- (id)externalDefinitionURLs;
- (BOOL)loadDefinition:(id)a0;
- (BOOL)loadDefinitionAtURL:(id)a0;
- (void)_loadDefinitionsAtURLS:(id)a0;
- (void)_loadDeprecatedSystemDefinitions;
- (void)loadDeprecatedSystemDefinitionsIfNeeded;
- (void)loadNondeprecatedDefinitions;
- (id)definitionForApplicationName:(id)a0;
- (id)nameForDefinedType:(id)a0;
- (void)setName:(id)a0 forDefinedType:(id)a1;

@end
