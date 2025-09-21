@class NSMutableDictionary, NSXPCConnection;

@interface TIKeyboardInputManagerLoader : NSObject {
    NSMutableDictionary *_availableInputManagers;
    NSMutableDictionary *_lastUsedDate;
    NSMutableDictionary *_activeInputManagers;
}

@property (nonatomic) NSXPCConnection *interactingConnection;

+ (id)sharedLoader;

- (void)startSyncHelper;
- (void)releaseAllLanguageModelBuffers;
- (void)dealloc;
- (id)activeInputModeIdentifiers;
- (id)inputManagerForInputMode:(id)a0 withKeyboardState:(id)a1 class:(Class)a2;
- (id)init;
- (void)registerMaintenanceActivity;
- (void)prepareForKeyboardActivity;
- (BOOL)hasActiveInputManagers;
- (id)currentLoadedInputModes;
- (void)removeInputModeFromAllContainers:(id)a0;
- (void)reduceInputManagerCacheToSize:(int)a0 switchingToInputMode:(id)a1;
- (void)prepareForKeyboardInactivity;
- (void)releaseAllInputManagers;
- (BOOL)isActiveInputManager:(id)a0;
- (void).cxx_destruct;
- (void)cacheInputManager:(id)a0 switchingToInputMode:(id)a1;

@end
