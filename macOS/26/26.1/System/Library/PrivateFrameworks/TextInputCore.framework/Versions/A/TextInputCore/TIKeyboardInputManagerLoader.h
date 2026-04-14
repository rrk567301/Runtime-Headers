@class NSMutableDictionary, NSXPCConnection;

@interface TIKeyboardInputManagerLoader : NSObject {
    NSMutableDictionary *_availableInputManagers;
    NSMutableDictionary *_lastUsedDate;
    NSMutableDictionary *_activeInputManagers;
}

@property (nonatomic) NSXPCConnection *interactingConnection;

+ (id)sharedLoader;

- (void)startSyncHelper;
- (BOOL)hasActiveInputManagers;
- (void)cacheInputManager:(id)a0 switchingToInputMode:(id)a1;
- (id)activeInputModeIdentifiers;
- (void)prepareForKeyboardActivity;
- (id)inputManagerForInputMode:(id)a0 withKeyboardState:(id)a1 class:(Class)a2;
- (void)dealloc;
- (void)releaseAllLanguageModelBuffers;
- (void)removeInputModeFromAllContainers:(id)a0;
- (id)currentLoadedInputModes;
- (void)reduceInputManagerCacheToSize:(int)a0 switchingToInputMode:(id)a1;
- (void).cxx_destruct;
- (void)registerMaintenanceActivity;
- (void)releaseAllInputManagers;
- (void)prepareForKeyboardInactivity;
- (BOOL)isActiveInputManager:(id)a0;
- (id)init;

@end
