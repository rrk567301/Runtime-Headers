@class PHObject;
@protocol PXFastEnumeration;

@interface PXRearrangeTransientCollectionListAction : PXPhotosAction {
    void /* unknown type, empty encoding */ undoOrderedMediaTypes;
    void /* unknown type, empty encoding */ redoOrderedMediaTypes;
    void /* unknown type, empty encoding */ undoOrderedUtilityTypes;
    void /* unknown type, empty encoding */ redoOrderedUtilityTypes;
}

@property (nonatomic, retain) id<PXFastEnumeration> movedObjects;
@property (nonatomic, retain) PHObject *targetObject;

+ (BOOL)canPerformOnCollection:(id)a0;

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (void)performUndo:(id /* block */)a0;
- (id)initWithCollectionList:(id)a0 movedObjects:(id)a1 targetObject:(id)a2;
- (void)performRedo:(id /* block */)a0;

@end
