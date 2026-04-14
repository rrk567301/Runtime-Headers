@class NSArray;

@interface BrowserSessionPersistentState : NSObject

@property (readonly, nonatomic) NSArray *pinnedTabsStates;
@property (readonly, nonatomic) NSArray *privatePinnedTabsStates;
@property (readonly, nonatomic) NSArray *windowStates;

- (void).cxx_destruct;
- (BOOL)containsAnyURLs;
- (id)initFromCurrentSessionIgnoringPrivateWindows:(BOOL)a0 encryptionProvider:(id)a1;
- (id)initFromFile:(id)a0 encryptionProvider:(id)a1;
- (id)initWithBrowserState:(id)a0 tabGroups:(id)a1 encryptionProvider:(id)a2;
- (id)plistRepresentationForCleanExit:(BOOL)a0;
- (void)restoreSessionMinimizingRestoredWindows:(BOOL)a0 completion:(id /* block */)a1;

@end
