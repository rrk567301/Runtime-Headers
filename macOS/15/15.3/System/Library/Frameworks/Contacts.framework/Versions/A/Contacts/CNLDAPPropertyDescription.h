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
+ (id)telephoneNumber;
+ (id)workurl;
+ (id)company;
+ (id)homeurl;
+ (id)surname;
+ (id)thumbnailPhotos;
+ (id)appleAIMPreferred;
+ (id)appleManager;
+ (id)cellPhone;
+ (id)descriptionWithLDAPKey:(id)a0 contactKey:(id)a1 valueTransform:(id /* block */)a2;
+ (id)facsimileTelephoneNumber;
+ (id)homePhone;
+ (id)mobile;
+ (id)organizationUnit;
+ (id)pager;
+ (id)pagerPhone;
+ (id)personalTitle;
+ (id)phoneNumberDescriptionWithLDAPKey:(id)a0 valueLabel:(id)a1;
+ (id)sharedDescriptions;
+ (id)urlAddressDescriptionWithLDAPKey:(id)a0 valueLabel:(id)a1;

- (void).cxx_destruct;
- (void)updateContact:(id)a0 withLDAPValue:(id)a1;

@end
