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
- (void)startSyncHelper;
- (void)cacheInputManager:(id)a0;
- (BOOL)hasActiveInputManagers;
- (id)inputManagerForInputMode:(id)a0 withKeyboardState:(id)a1 class:(Class)a2;
- (BOOL)isActiveInputManager:(id)a0;
- (void)jettisonAllActiveInputManagers;
- (void)prepareForKeyboardActivity;
- (void)prepareForKeyboardInactivity;
- (void)reduceCacheToSize:(unsigned long long)a0;
- (void)registerMaintenanceActivity;
- (void)releaseAllInputManagers:(BOOL)a0;
- (id)resourceInputModes;

@end
