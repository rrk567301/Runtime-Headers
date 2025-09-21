@interface _TtC6AppKitP33_3E10BF4A3CE530F1247E8FB13C5F4FD519FacesViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource> {
    void /* unknown type, empty encoding */ selectedFaceName;
    void /* unknown type, empty encoding */ selectedFontName;
    void /* unknown type, empty encoding */ fontPanel;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ messageView;
    void /* unknown type, empty encoding */ fonts;
}

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)updateSelectedFontName;

@end
