@class NSSet;

@interface ABSmartGroup : ABGroup {
    NSSet *_cachedMembers;
}

+ (id)os_log;
+ (id)builtInProperties;
+ (id)smartGroups;
+ (id)nts_RecordFromDictionaryRepresentation:(id)a0 withRecordMapping:(id)a1 addressBook:(id)a2 generateIds:(BOOL)a3;

- (void)dealloc;
- (id)members;
- (id)dictionaryRepresentation;
- (id)subgroups;
- (id)_members;
- (BOOL)removeMember:(id)a0;
- (BOOL)addMember:(id)a0;
- (id)parentGroups;
- (BOOL)addSubgroup:(id)a0;
- (BOOL)removeSubgroup:(id)a0;
- (void)_setCachedMembers:(id)a0;
- (void)setIsModified:(BOOL)a0;
- (id)nts_Members;
- (id)nts_SearchElement;
- (void)nts_SetSearchElement:(id)a0;
- (BOOL)nts_IsModified;
- (void)nts_SetIsModified:(BOOL)a0;
- (void)nts_SetTracksModification:(BOOL)a0;
- (BOOL)nts_TracksModification;
- (id)nts_DescriptionDictionary;
- (BOOL)_shouldAssignNewDatabaseImplToAccount;
- (id)nts_Subgroups;
- (BOOL)_isSmartGroupParentOfRecord:(id)a0;
- (BOOL)setDistributionIdentifier:(id)a0 forProperty:(id)a1 person:(id)a2;
- (id)distributionIdentifierForProperty:(id)a0 person:(id)a1;
- (void)setSearchElement:(id)a0;
- (id)searchElement;
- (BOOL)isModified;
- (void)setTracksModification:(BOOL)a0;
- (BOOL)tracksModification;
- (BOOL)isPublishable;
- (BOOL)canRemoveMembers;
- (BOOL)canDeletePeople;
- (id)uniqueIdForDrag;
- (BOOL)supportsDistributionList;

@end
