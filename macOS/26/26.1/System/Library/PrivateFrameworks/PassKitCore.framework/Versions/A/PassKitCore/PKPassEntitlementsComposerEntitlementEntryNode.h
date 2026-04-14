@class PKDisplayablePassEntitlement, PKPassSharedEntitlement;

@interface PKPassEntitlementsComposerEntitlementEntryNode : PKPassEntitlementsComposerEntryNode

@property (retain, nonatomic) PKDisplayablePassEntitlement *displayableEntitlement;
@property (retain, nonatomic) PKPassSharedEntitlement *sharedEntitlement;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)allPossibleManageability;
- (id)allPossibleShareability;
- (id)allPossibleVisibility;
- (void)enumerateEntitlementEntries:(id /* block */)a0;
- (id)initWithDisplayableEntitlement:(id)a0 sharedEntitlement:(id)a1 parentEntitlementComposer:(id)a2;
- (BOOL)possibleIntraAccountSharing;
- (unsigned long long)possibleManageability;
- (unsigned long long)possibleShareability;
- (id)possibleTimeConfiguration;
- (unsigned long long)possibleVisibility;

@end
