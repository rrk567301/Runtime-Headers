@interface NSProxyLegacyPreferencePane : NSVBProxyPreferencePane

@property int desiredArchitecture;

- (id)serviceName;
- (id)remoteObjectInterface;
- (id)serviceSubclassName;
- (id)initWithPrefPaneBundle:(id)a0;
- (void)assignConnection:(id)a0;

@end
