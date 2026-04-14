@class NSMutableDictionary;

@interface MELoader : NSObject {
    NSMutableDictionary *_exporters;
    NSMutableDictionary *_exporterProperties;
}

- (void)dealloc;
- (id)init;
- (id)exporterIdentifierWithOptions:(id)a0;
- (id)exporterWithIdentifier:(id)a0 andDocument:(id)a1 andDelegate:(id)a2;
- (id)exporterPropertyWithIdentifier:(id)a0 andKey:(id)a1;
- (void)loadBuiltInPlugins;
- (void)loadPluginWithIdentifier:(id)a0;
- (void)loadEmbeddedPlugins;
- (void)loadPluginsInFolder:(id)a0 matchingIdentifier:(id)a1;
- (void)loadPluginAtPath:(id)a0 matchingIdentifier:(id)a1;
- (void)registerExporterClass:(Class)a0 withIdentifier:(id)a1 andProperties:(id)a2;
- (id)exporterIdentifiers;

@end
