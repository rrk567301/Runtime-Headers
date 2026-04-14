@class NSMutableDictionary, NSXPCConnection;

@interface TIKeyboardInputManagerLoader : NSObject {
    NSMutableDictionary *_availableInputManagers;
    NSMutableDictionary *_lastUsedDate;
    NSMutableDictionary *_activeInputManagers;
}

@property (nonatomic) NSXPCConnection *interactingConnection;

+ (id)sharedLoader;

- (void)reduceInputManagerCacheToSize:(int)a0 switchingToInputMode:(id)a1;
- (void)releaseAllInputManagers;
- (id)init;
- (void)cacheInputManager:(id)a0 switchingToInputMode:(id)a1;
- (id)currentLoadedInputModes;
- (void)prepareForKeyboardInactivity;
- (void)registerMaintenanceActivity;
- (void).cxx_destruct;
- (void)prepareForKeyboardActivity;
- (void)startSyncHelper;
- (void)dealloc;
- (void)releaseAllLanguageModelBuffers;
- (BOOL)hasActiveInputManagers;
- (id)inputManagerForInputMode:(id)a0 withKeyboardState:(id)a1 class:(Class)a2;
- (id)activeInputModeIdentifiers;
- (void)removeInputModeFromAllContainers:(id)a0;
- (BOOL)isActiveInputManager:(id)a0;

@end
