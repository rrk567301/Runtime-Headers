@class NSArray;
@protocol PXFastEnumeration;

@interface PXRemoveAssetsFromFeaturedPhotosAction : PXAssetsAction {
    NSArray *_suggestions;
}

@property (readonly, nonatomic) id<PXFastEnumeration> suggestions;

- (id)actionIdentifier;
- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (void)performUndo:(id /* block */)a0;
- (id)localizedActionName;

@end
