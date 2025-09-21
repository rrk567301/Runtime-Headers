@class NSArray, CNUICoreContactTypeAssessor;

@interface CNUICoreFamilyMemberContactsModelBuilder : NSObject

@property (retain, nonatomic) NSArray *contacts;
@property (retain, nonatomic) CNUICoreContactTypeAssessor *contactTypeAssessor;
@property (nonatomic) long long contactFormatterStyle;
@property (nonatomic) char includeWhitelistedContactsOnly;
@property (nonatomic) char sortItemsByName;
@property (nonatomic) char markItemsAsPersisted;
@property (nonatomic) char markItemsAsProposed;

+ (id)uniqueFamilyMemberContactItems:(id)a0;
+ (id)familyMemberContactItemFromContact:(id)a0 contactFormatterStyle:(long long)a1 contactTypeAssessor:(id)a2 itemHasBeenPersisted:(char)a3 itemIsProposed:(char)a4;
+ (id)firstDisplayableEmailAddressForContact:(id)a0;
+ (id)firstDisplayablePhoneNumberForContact:(id)a0;
+ (id)formattedNameOfContact:(id)a0 contactFormatterStyle:(long long)a1;
+ (id)itemsBySortingItems:(id)a0;
+ (id)placeholderNameForNamelessContact:(id)a0;
+ (char)shouldIncludeContact:(id)a0 givenIncludeWhitelistedContactsOnlySetting:(char)a1;

- (id)init;
- (void).cxx_destruct;
- (id)build;
- (id)sortedFamilyMemberContactItems:(id)a0;

@end
