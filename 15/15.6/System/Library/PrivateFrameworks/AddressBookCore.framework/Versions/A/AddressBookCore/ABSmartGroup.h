@class NSSet;

@interface ABSmartGroup : ABGroup {
    NSSet *_cachedMembers;
}

+ (id)os_log;
+ (id)builtInProperties;
+ (id)nts_RecordFromDictionaryRepresentation:(id)a0 withRecordMapping:(id)a1 addressBook:(id)a2 generateIds:(char)a3;
+ (id)smartGroups;

- (void)dealloc;
- (id)members;
- (id)dictionaryRepresentation;
- (id)subgroups;
- (char)addMember:(id)a0;
- (char)removeMember:(id)a0;
- (id)parentGroups;
- (char)canDeletePeople;
- (char)removeSubgroup:(id)a0;
- (id)uniqueIdForDrag;
- (char)_isSmartGroupParentOfRecord:(id)a0;
- (id)_members;
- (void)_setCachedMembers:(id)a0;
- (char)_shouldAssignNewDatabaseImplToAccount;
- (char)addSubgroup:(id)a0;
- (char)canRemoveMembers;
- (id)distributionIdentifierForProperty:(id)a0 person:(id)a1;
- (char)isModified;
- (char)isPublishable;
- (id)nts_DescriptionDictionary;
- (char)nts_IsModified;
- (id)nts_Members;
- (id)nts_SearchElement;
- (void)nts_SetIsModified:(char)a0;
- (void)nts_SetSearchElement:(id)a0;
- (void)nts_SetTracksModification:(char)a0;
- (id)nts_Subgroups;
- (char)nts_TracksModification;
- (id)searchElement;
- (char)setDistributionIdentifier:(id)a0 forProperty:(id)a1 person:(id)a2;
- (void)setIsModified:(char)a0;
- (void)setSearchElement:(id)a0;
- (void)setTracksModification:(char)a0;
- (char)supportsDistributionList;
- (char)tracksModification;

@end
