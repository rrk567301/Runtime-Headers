@class NSMapTable;

@interface UINSHostedUIWindowRegistry : NSObject {
    NSMapTable *_extensionUUIDToWindowMap;
}

@property (class, readonly, nonatomic) UINSHostedUIWindowRegistry *sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)registerWindow:(id)a0 forExtensionIdentifier:(id)a1;
- (id)registeredWindowSceneWithSceneIdentifier:(id)a0;
- (void)unregisterWindowForExtensionIdentifier:(id)a0;
- (id)windowWithExtensionIdentifier:(id)a0;

@end
