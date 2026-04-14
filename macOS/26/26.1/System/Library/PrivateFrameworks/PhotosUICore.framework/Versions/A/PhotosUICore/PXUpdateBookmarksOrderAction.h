@protocol PXFastEnumeration;

@interface PXUpdateBookmarksOrderAction : PXPhotosAction {
    void /* unknown type, empty encoding */ undoOrderedBookmarks;
    void /* unknown type, empty encoding */ redoOrderedBookmarks;
}

@property (nonatomic, retain) id<PXFastEnumeration> orderedCollections;

+ (BOOL)canPerformOnCollection:(id)a0;

- (void)performAction:(id /* block */)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (void)performUndo:(id /* block */)a0;
- (id)initWithPhotoLibrary:(id)a0 orderedCollections:(id)a1;
- (void)performRedo:(id /* block */)a0;

@end
