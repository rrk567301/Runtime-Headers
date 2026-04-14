@class NSMutableArray, QCAgeProfileView, NSView, NSString, QCProfileView, NSComboBox, NSTableView;

@interface QCProfileConfigurationView : NSView {
    NSView *_insideView;
    QCProfileView *_profileView;
    QCAgeProfileView *_ageProfileView;
    NSComboBox *_comboBox;
    NSTableView *_tableView;
    NSMutableArray *_colors;
    NSString *_autosaveName;
    long long _colorRow;
    void *_unused[4];
}

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (void)tableView:(id)a0 setObjectValue:(id)a1 forTableColumn:(id)a2 row:(long long)a3;
- (BOOL)tableView:(id)a0 shouldEditTableColumn:(id)a1 row:(long long)a2;
- (long long)numberOfItemsInComboBox:(id)a0;
- (id)comboBox:(id)a0 objectValueForItemAtIndex:(long long)a1;
- (void)setAutosaveName:(id)a0;
- (id)autosaveName;
- (void)_finishInitialization;
- (void)_save;
- (void)setVirtualScreen:(id)a0;
- (id)virtualScreen;
- (void)setShowPurgeable:(id)a0;
- (void)setSelectedCache:(id)a0;
- (id)selectedCache;
- (void)_colorSelected:(id)a0;
- (void)_restore;
- (void)setProfileView:(id)a0;
- (id)profileView;
- (void)setAgeProfileView:(id)a0;
- (id)ageProfileView;
- (id)showPurgeable;
- (void)setShowDirtyRect:(BOOL)a0;
- (BOOL)showDirtyRect;
- (void)setShowCacheMisses:(BOOL)a0;
- (BOOL)showCacheMisses;
- (void)setShowPoolMisses:(BOOL)a0;
- (BOOL)showPoolMisses;

@end
