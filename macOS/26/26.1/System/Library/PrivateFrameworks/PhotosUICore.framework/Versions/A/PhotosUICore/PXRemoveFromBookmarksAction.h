@interface PXRemoveFromBookmarksAction : PXPhotosAction {
    void /* unknown type, empty encoding */ bookmarks;
}

- (id)initWithObjects:(id)a0;
- (void)performAction:(id /* block */)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (void)performUndo:(id /* block */)a0;

@end
