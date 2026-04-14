@class NSArray, NSDictionary, PKPassEntitlementsComposerEntryNode, NSMapTable, NSMutableArray;

@interface PKPassEntitlementsComposer : NSObject {
    NSArray *_originalSharedEntitlements;
    NSArray *_availableEntitlements;
    NSDictionary *_entitlementEntriesForEntitlementIdentifier;
    NSArray *_entitlementEntries;
    NSArray *_predefinedCapabilitySets;
    PKPassEntitlementsComposerEntryNode *_globalGroup;
    NSMapTable *_entitlementNodeForEntitlementEntry;
    NSMapTable *_predefinedSelectionNodeForPredefinedEntry;
    NSMutableArray *_allEntryNodes;
    unsigned long long _maxSelectionCount;
}

@property (readonly, nonatomic) NSArray *entitlementEntries;
@property (readonly, nonatomic) NSArray *predefinedEntitlementEntries;
@property (readonly, nonatomic) NSArray *composeSharedEntitlements;
@property (readonly, nonatomic) BOOL editable;
@property (readonly, nonatomic) BOOL canAllowResharing;
@property (readonly, nonatomic) BOOL preferDetailedCapabilityDisplay;

- (id)init;
- (void).cxx_destruct;
- (id)_allPossibleCapabilitySetsForView:(id)a0;
- (void)_rootEntryNodeDidSetEnabled:(id)a0;
- (id)addPredefinedSharedEntitlementSelection:(id)a0;
- (id)globalView;
- (id)initWithMyEntitlements:(id)a0;
- (id)initWithSharedEntitlements:(id)a0 availableEntitlements:(id)a1 editable:(BOOL)a2;
- (unsigned long long)maxSelectionCount;
- (void)setMaxSelectionCount:(unsigned long long)a0;
- (void)setPossiblePredefinedSharedEntitlementSelection:(id)a0;
- (id)viewFor:(id)a0;
- (id)viewForEnabledEntitlements;
- (id)viewForPredefined:(id)a0;

@end
