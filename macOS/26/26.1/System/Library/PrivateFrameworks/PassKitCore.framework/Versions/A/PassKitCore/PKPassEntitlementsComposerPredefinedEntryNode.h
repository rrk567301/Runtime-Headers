@class PKPredefinedSharedEntitlementSelection;

@interface PKPassEntitlementsComposerPredefinedEntryNode : PKPassEntitlementsComposerEntryNode {
    PKPredefinedSharedEntitlementSelection *_predefinedSelection;
}

- (unsigned long long)visibility;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)allPossibleManageability;
- (id)allPossibleShareability;
- (id)allPossibleVisibility;
- (id)initWithPredefinedSelection:(id)a0 parentEntitlementComposer:(id)a1;
- (unsigned long long)manageability;
- (BOOL)possibleIntraAccountSharing;
- (unsigned long long)possibleManageability;
- (unsigned long long)possibleShareability;
- (unsigned long long)possibleVisibility;
- (unsigned long long)shareability;

@end
