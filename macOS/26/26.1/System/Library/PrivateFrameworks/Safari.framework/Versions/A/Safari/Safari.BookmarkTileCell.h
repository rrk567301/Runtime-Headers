@interface Safari.BookmarkTileCell : NSCollectionViewItem {
    void /* unknown type, empty encoding */ linkView;
    void /* unknown type, empty encoding */ attributionImageView;
    void /* unknown type, empty encoding */ attributionLabel;
    void /* unknown type, empty encoding */ bookmark;
    void /* unknown type, empty encoding */ parentFolder;
    void /* unknown type, empty encoding */ linkMetadata;
}

- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)rightMouseDown:(id)a0;

@end
