@interface PXCMMFeedConfiguration : PXFeedConfiguration {
    id /* block */ _copyBlock;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)viewControllerTitle;
- (BOOL)allowsPopOnEmptyBehavior;
- (id)initWithDataSourceManager:(id)a0 actionPerformer:(id)a1 invitationSpec:(id)a2;
- (id)initWithDataSourceManagerPromise:(id /* block */)a0 specManagerPromise:(id /* block */)a1 itemLayoutFactory:(id)a2;
- (id)objectReferenceForDestination:(id)a0;
- (long long)selectionContext;
- (BOOL)wantsEmbeddedScrollView;

@end
