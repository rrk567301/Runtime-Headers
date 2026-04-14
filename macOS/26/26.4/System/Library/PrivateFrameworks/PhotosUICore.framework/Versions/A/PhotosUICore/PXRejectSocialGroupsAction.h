@protocol PXFastEnumeration;

@interface PXRejectSocialGroupsAction : PXPhotosAction {
    id<PXFastEnumeration> _collections;
}

- (id)collections;
- (id)actionIdentifier;
- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (void)performUndo:(id /* block */)a0;
- (id)initWithSocialGroups:(id)a0;

@end
