@class NSMutableDictionary, NSXPCConnection;

@interface TIKeyboardInputManagerLoader : NSObject {
    NSMutableDictionary *_availableInputManagers;
    NSMutableDictionary *_lastUsedDate;
    NSMutableDictionary *_activeInputManagers;
}

@property (nonatomic) NSXPCConnection *interactingConnection;

+ (id)sharedLoader;

- (BOOL)hasActiveInputManagers;
- (id)currentLoadedInputModes;
- (void)cacheInputManager:(id)a0 switchingToInputMode:(id)a1;
- (void)releaseAllInputManagers;
- (id)inputManagerForInputMode:(id)a0 withKeyboardState:(id)a1 class:(Class)a2;
- (void)prepareForKeyboardActivity;
- (void)registerMaintenanceActivity;
- (void)releaseAllLanguageModelBuffers;
- (void)reduceInputManagerCacheToSize:(int)a0 switchingToInputMode:(id)a1;
- (void).cxx_destruct;
- (void)removeInputModeFromAllContainers:(id)a0;
- (void)prepareForKeyboardInactivity;
- (BOOL)isActiveInputManager:(id)a0;
- (id)init;
- (id)activeInputModeIdentifiers;
- (void)startSyncHelper;
- (void)dealloc;

@end
