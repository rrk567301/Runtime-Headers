@interface MEPluginPDF : MEPlugin <MEPluginRegistration, MEPluginTypeGeneric>

+ (char)matchesOptions:(id)a0;
+ (void)registerPluginsToLoader:(id)a0;

- (void)dealloc;
- (char)exportToFile:(id)a0 andOptions:(id)a1 error:(id *)a2;
- (id)initWithIdentifier:(id)a0 andDocument:(id)a1 andDelegate:(id)a2;

@end
