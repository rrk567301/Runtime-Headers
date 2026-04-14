@class NSMutableDictionary, TIKeyboardInputManagerBase, NSXPCConnection;

@interface TIKeyboardInputManagerLoader : NSObject {
    NSMutableDictionary *_availableInputManagers;
    NSMutableDictionary *_lastUsedDate;
    NSMutableDictionary *_activeInputManagers;
}

@property (retain, nonatomic) TIKeyboardInputManagerBase *mostRecentlyRequested;
@property (nonatomic) NSXPCConnection *interactingConnection;

+ (id)sharedLoader;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)activeInputModeIdentifiers;
- (id)resourceInputModes;
- (void)prepareForKeyboardInactivity;
- (void)prepareForKeyboardActivity;
- (void)startSyncHelper;
- (id)inputManagerForInputMode:(id)a0 withKeyboardState:(id)a1 class:(Class)a2;
- (void)cacheInputManager:(id)a0;
- (void)releaseAllInputManagers:(BOOL)a0;
- (void)reduceCacheToSize:(unsigned long long)a0;
- (BOOL)hasActiveInputManagers;
- (BOOL)isActiveInputManager:(id)a0;
- (void)jettisonAllActiveInputManagers;
- (void)registerMaintenanceActivity;

@end
