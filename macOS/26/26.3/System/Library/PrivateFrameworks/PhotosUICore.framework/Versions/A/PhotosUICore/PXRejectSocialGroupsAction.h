@protocol PXFastEnumeration;

@interface PXRejectSocialGroupsAction : PXPhotosAction {
    id<PXFastEnumeration> _collections;
}

- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)collections;
- (void)performUndo:(id /* block */)a0;
- (id)initWithSocialGroups:(id)a0;

@end
