@protocol PXFastEnumeration;

@interface PXRejectSocialGroupsAction : PXPhotosAction {
    id<PXFastEnumeration> _collections;
}

- (id)collections;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void).cxx_destruct;
- (void)performUndo:(id /* block */)a0;
- (id)initWithSocialGroups:(id)a0;

@end
