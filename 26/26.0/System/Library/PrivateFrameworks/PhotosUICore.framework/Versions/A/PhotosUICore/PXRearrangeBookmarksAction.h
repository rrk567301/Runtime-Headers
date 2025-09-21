@class PHCollectionList, PHObject;
@protocol PXFastEnumeration;

@interface PXRearrangeBookmarksAction : PXPhotosAction {
    void /* unknown type, empty encoding */ undoBookmarks;
    void /* unknown type, empty encoding */ redoBookmarks;
}

@property (nonatomic, readonly) PHCollectionList *collectionList;
@property (nonatomic, readonly) id<PXFastEnumeration> movedObjects;
@property (nonatomic, readonly) PHObject *targetObject;

+ (BOOL)canPerformOnCollection:(id)a0;

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (void)performUndo:(id /* block */)a0;
- (id)initWithCollectionList:(id)a0 movedObjects:(id)a1 targetObject:(id)a2;
- (void)performRedo:(id /* block */)a0;

@end
