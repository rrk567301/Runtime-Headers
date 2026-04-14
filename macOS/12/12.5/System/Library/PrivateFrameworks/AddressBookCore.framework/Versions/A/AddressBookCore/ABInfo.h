@interface ABInfo : ABRecord

+ (id)info;
+ (id)infoWithAddressBook:(id)a0;
+ (id)builtInProperties;
+ (id)nts_InfoWithAddressBook:(id)a0;
+ (id)nts_InfoWithAddressBook:(id)a0 forAccount:(id)a1;
+ (id)findValidInfo:(id)a0;
+ (id)infoUniqueIdForAccount:(id)a0;
+ (id)fetchInfoWithAddressBook:(id)a0 forAccount:(id)a1;
+ (id)makeInfoWithAddressBook:(id)a0 forAccount:(id)a1;
+ (id)nts_Info;

- (BOOL)isReadOnly;
- (id)nts_DescriptionDictionary;
- (id)nts_ParentGroups;
- (BOOL)validateValue:(id *)a0 forProperty:(id)a1 error:(id *)a2;

@end
