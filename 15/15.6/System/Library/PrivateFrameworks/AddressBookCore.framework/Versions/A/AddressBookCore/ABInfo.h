@interface ABInfo : ABRecord

+ (id)info;
+ (id)builtInProperties;
+ (id)fetchInfoWithAddressBook:(id)a0 forAccount:(id)a1;
+ (id)findValidInfo:(id)a0;
+ (id)infoUniqueIdForAccount:(id)a0;
+ (id)infoWithAddressBook:(id)a0;
+ (id)makeInfoWithAddressBook:(id)a0 forAccount:(id)a1;
+ (id)nts_Info;
+ (id)nts_InfoWithAddressBook:(id)a0;
+ (id)nts_InfoWithAddressBook:(id)a0 forAccount:(id)a1;

- (char)isReadOnly;
- (id)nts_DescriptionDictionary;
- (id)nts_ParentGroups;
- (char)validateValue:(id *)a0 forProperty:(id)a1 error:(id *)a2;

@end
