@class NSString, CPLContainerRelation;

@interface CPLContainerRelationChange : CPLRecordChange

@property (copy, nonatomic) NSString *itemIdentifier;
@property (retain, nonatomic) CPLContainerRelation *relation;

+ (char)supportsDeletion;
+ (Class)relatedRecordClass;
+ (id)relationToContainerWithIdentifier:(id)a0;
+ (id)relationWithItemScopedIdentifier:(id)a0 containerIdentifier:(id)a1;
+ (char)shouldReallyQuarantineRecord;
+ (char)supportsDirectDeletion;

- (id)description;
- (void).cxx_destruct;
- (id)relatedIdentifier;
- (id)itemScopedIdentifier;
- (id)compactedChangeWithRelatedChanges:(id)a0 isOnlyChange:(char)a1 fullRecord:(id)a2 usingStorageView:(id)a3;
- (id)containerScopedIdentifier;
- (id)scopedIdentifiersForMapping;
- (id)secondaryIdentifier;
- (void)setContainerScopedIdentifier:(id)a0;
- (void)setItemScopedIdentifier:(id)a0;
- (void)setRelatedIdentifier:(id)a0;
- (void)setSecondaryIdentifier:(id)a0;
- (id)translateToClientChangeUsingIDMapping:(id)a0 error:(id *)a1;
- (id)translateToCloudChangeUsingIDMapping:(id)a0 error:(id *)a1;
- (char)validateFullRecord;

@end
