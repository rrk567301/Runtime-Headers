@class NSArray;

@interface BrowserSessionPersistentState : NSObject

@property (readonly, nonatomic) NSArray *pinnedTabsStates;
@property (readonly, nonatomic) NSArray *privatePinnedTabsStates;
@property (readonly, nonatomic) NSArray *windowStates;

- (void).cxx_destruct;
- (void)restoreSessionMinimizingRestoredWindows:(BOOL)a0;
- (BOOL)containsAnyURLs;
- (id)initFromFile:(id)a0 encryptionProvider:(id)a1;
- (id)initWithBrowserState:(id)a0 tabGroups:(id)a1 encryptionProvider:(id)a2;
- (id)initFromCurrentSessionIgnoringPrivateWindows:(BOOL)a0 encryptionProvider:(id)a1;
- (id)plistRepresentationForCleanExit:(BOOL)a0;

@end
