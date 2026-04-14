@interface ABInfo : ABRecord

+ (id)info;
+ (id)builtInProperties;
+ (id)infoWithAddressBook:(id)a0;
+ (id)findValidInfo:(id)a0;
+ (id)fetchInfoWithAddressBook:(id)a0 forAccount:(id)a1;
+ (id)makeInfoWithAddressBook:(id)a0 forAccount:(id)a1;
+ (id)infoUniqueIdForAccount:(id)a0;
+ (id)nts_InfoWithAddressBook:(id)a0 forAccount:(id)a1;
+ (id)nts_InfoWithAddressBook:(id)a0;
+ (id)nts_Info;

- (BOOL)isReadOnly;
- (id)nts_DescriptionDictionary;
- (BOOL)validateValue:(id *)a0 forProperty:(id)a1 error:(id *)a2;
- (id)nts_ParentGroups;

@end
