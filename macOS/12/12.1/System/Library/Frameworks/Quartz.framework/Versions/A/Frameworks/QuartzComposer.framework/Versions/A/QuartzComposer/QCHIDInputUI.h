@class NSMutableArray, NSTableView, NSPopUpButton, GFList;

@interface QCHIDInputUI : QCInspector {
    NSPopUpButton *deviceMenu;
    NSTableView *elementsTableView;
    GFList *_allElements;
    NSMutableArray *_elements;
    unsigned int _addNotification;
    unsigned int _removeNotification;
    struct IONotificationPort { } *_notificationPort;
    struct __CFRunLoopSource { } *_runLoopSource;
}

+ (id)viewNibName;

- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (void)tableView:(id)a0 setObjectValue:(id)a1 forTableColumn:(id)a2 row:(long long)a3;
- (void)_setupUI;
- (void)updateDevice:(id)a0;
- (void)setupViewForPatch:(id)a0;
- (void)resetView;
- (void)_updateUI;

@end
