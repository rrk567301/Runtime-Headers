@class NSString;

@interface CNLDAPPropertyDescription : NSObject

@property (copy) NSString *LDAPKey;
@property (copy) NSString *contactKey;
@property (copy) id /* block */ valueTransform;

+ (id)givenName;
+ (id)title;
+ (id)emailAddress;
+ (id)postalAddress;
+ (id)photos;
+ (id)organization;
+ (id)fax;
+ (id)descriptions;
+ (id)department;
+ (id)sharedDescriptions;
+ (id)surname;
+ (id)personalTitle;
+ (id)organizationUnit;
+ (id)company;
+ (id)telephoneNumber;
+ (id)homePhone;
+ (id)facsimileTelephoneNumber;
+ (id)pagerPhone;
+ (id)pager;
+ (id)cellPhone;
+ (id)mobile;
+ (id)workurl;
+ (id)homeurl;
+ (id)thumbnailPhotos;
+ (id)appleManager;
+ (id)appleAIMPreferred;
+ (id)descriptionWithLDAPKey:(id)a0 contactKey:(id)a1 valueTransform:(id /* block */)a2;
+ (id)phoneNumberDescriptionWithLDAPKey:(id)a0 valueLabel:(id)a1;
+ (id)urlAddressDescriptionWithLDAPKey:(id)a0 valueLabel:(id)a1;

- (void).cxx_destruct;
- (void)updateContact:(id)a0 withLDAPValue:(id)a1;

@end
