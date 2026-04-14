@class _NSQuickActionTouchBarClient, NSString, NSTouchBarEscapeKeyViewController, NSTouchBarFinder, NSTouchBarViewController, NSFunctionRow, NSMutableArray, NSTouchBarCustomizationController, NSApplicationFunctionRowContainer;

@interface NSApplicationFunctionRowController : NSObject <NSTouchBarFinderObserver> {
    NSFunctionRow *_previousApplicationFunctionRowElement;
    NSFunctionRow *_escapeKeyFunctionRowElement;
    NSFunctionRow *_previousEscapeKeyFunctionRowElement;
    NSMutableArray *_currentBars;
    NSTouchBarViewController *_applicationTouchBarViewController;
    NSTouchBarEscapeKeyViewController *_escapeKeyTouchBarViewController;
    NSTouchBarCustomizationController *_customizationController;
    NSApplicationFunctionRowContainer *_rootContainer;
    NSTouchBarFinder *_finder;
    _NSQuickActionTouchBarClient *_quickActionClient;
    unsigned char _observingPopoversForCustomization : 1;
    unsigned char _wasEverActive : 1;
}

@property (class, readonly, retain) NSApplicationFunctionRowController *sharedApplicationFunctionRowController;

@property (readonly) NSFunctionRow *applicationFunctionRow;
@property (readonly) NSTouchBarCustomizationController *_customizationController;
@property (readonly) BOOL alwaysWantsEscKeyReplacements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)_setup;
- (void)dealloc;
- (void)_sync;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_teardown;
- (void).cxx_destruct;
- (void)_noteBarsChanged;
- (void)_refreshTouchBarView:(id)a0;
- (void)_updateEscapeKeyItem;
- (void)_updateEscapeKeyItemSize;
- (void)touchBarFinder:(id)a0 updatedTouchBars:(id)a1;

@end
