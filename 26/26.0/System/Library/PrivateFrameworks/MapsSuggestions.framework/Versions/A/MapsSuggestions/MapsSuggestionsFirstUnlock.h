@class NSString;

@interface MapsSuggestionsFirstUnlock : MapsSuggestionsFirstUnlockBase <GEOKeyBagProtectedDataDidBecomeAvailableObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (id)init;
- (void)protectedDataDidBecomeAvailable:(id)a0;
- (BOOL)hasDeviceBeenUnlocked;

@end
