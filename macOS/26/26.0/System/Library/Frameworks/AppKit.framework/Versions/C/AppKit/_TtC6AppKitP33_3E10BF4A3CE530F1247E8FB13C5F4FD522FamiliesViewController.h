@interface _TtC6AppKitP33_3E10BF4A3CE530F1247E8FB13C5F4FD522FamiliesViewController : NSViewController <NSOutlineViewDelegate, NSOutlineViewDataSource> {
    void /* unknown type, empty encoding */ selectedFamilyName;
    void /* unknown type, empty encoding */ fontPanel;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ outlineView;
    void /* unknown type, empty encoding */ groupedFamilies;
    void /* unknown type, empty encoding */ sortedSections;
}

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (BOOL)outlineView:(id)a0 isGroupItem:(id)a1;
- (BOOL)outlineView:(id)a0 isItemExpandable:(id)a1;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (BOOL)outlineView:(id)a0 shouldSelectItem:(id)a1;
- (id)outlineView:(id)a0 viewForTableColumn:(id)a1 item:(id)a2;
- (void)updateSelectedFamilyName;

@end
