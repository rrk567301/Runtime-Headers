@class NSArray;
@protocol PXFastEnumeration;

@interface PXRemoveAssetsFromFeaturedPhotosAction : PXAssetsAction {
    NSArray *_suggestions;
}

@property (readonly, nonatomic) id<PXFastEnumeration> suggestions;

- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void).cxx_destruct;
- (void)performUndo:(id /* block */)a0;
- (id)localizedActionName;

@end
