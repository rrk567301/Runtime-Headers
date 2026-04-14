@class NSString;

@interface CNSearchIndexDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isNonnull;
- (id)CNValueForContact:(id)a0;
- (BOOL)isEqualIgnoringIdentifiersForContact:(id)a0 other:(id)a1;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (id)init;
- (id)coreDataOwnedEntityName;
- (void)copyFromCoreDataContact:(id)a0 toContact:(id)a1;
- (id)coreDataKey;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (id)coreDataRelationship;
- (id)coreDataOwnedEntityKey;

@end
