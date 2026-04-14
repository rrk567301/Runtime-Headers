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
- (void)cacheInputManager:(id)a0;
- (BOOL)isActiveInputManager:(id)a0;
- (id)inputManagerForInputMode:(id)a0 withKeyboardState:(id)a1 class:(Class)a2;
- (id)resourceInputModes;
- (void)reduceCacheToSize:(unsigned long long)a0;
- (void)startSyncHelper;
- (BOOL)hasActiveInputManagers;
- (void)jettisonAllActiveInputManagers;
- (void)registerMaintenanceActivity;

@end
