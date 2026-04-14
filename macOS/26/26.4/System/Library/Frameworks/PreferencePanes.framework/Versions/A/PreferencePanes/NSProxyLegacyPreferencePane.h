@interface NSProxyLegacyPreferencePane : NSVBProxyPreferencePane

@property int desiredArchitecture;

- (id)serviceName;
- (id)remoteObjectInterface;
- (id)serviceSubclassName;
- (void)assignConnection:(id)a0;
- (id)initWithPrefPaneBundle:(id)a0;

@end
