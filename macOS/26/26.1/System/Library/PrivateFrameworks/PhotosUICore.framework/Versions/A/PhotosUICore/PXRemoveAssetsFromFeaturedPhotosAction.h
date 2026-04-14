@class NSArray;
@protocol PXFastEnumeration;

@interface PXRemoveAssetsFromFeaturedPhotosAction : PXAssetsAction {
    NSArray *_suggestions;
}

@property (readonly, nonatomic) id<PXFastEnumeration> suggestions;

- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (id)localizedActionName;

@end
