@class NSMutableDictionary, NSXPCConnection;

@interface TIKeyboardInputManagerLoader : NSObject {
    NSMutableDictionary *_availableInputManagers;
    NSMutableDictionary *_lastUsedDate;
    NSMutableDictionary *_activeInputManagers;
}

@property (nonatomic) NSXPCConnection *interactingConnection;

+ (id)sharedLoader;

- (void)reduceInputManagerCacheToSize:(int)a0 switchingToInputMode:(id)a1;
- (BOOL)hasActiveInputManagers;
- (void)registerMaintenanceActivity;
- (void).cxx_destruct;
- (BOOL)isActiveInputManager:(id)a0;
- (void)startSyncHelper;
- (id)currentLoadedInputModes;
- (id)inputManagerForInputMode:(id)a0 withKeyboardState:(id)a1 class:(Class)a2;
- (void)prepareForKeyboardActivity;
- (id)init;
- (void)removeInputModeFromAllContainers:(id)a0;
- (id)activeInputModeIdentifiers;
- (void)releaseAllLanguageModelBuffers;
- (void)dealloc;
- (void)cacheInputManager:(id)a0 switchingToInputMode:(id)a1;
- (void)releaseAllInputManagers;
- (void)prepareForKeyboardInactivity;

@end
