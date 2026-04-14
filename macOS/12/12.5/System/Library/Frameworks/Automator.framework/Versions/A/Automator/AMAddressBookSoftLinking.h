@interface AMAddressBookSoftLinking : NSObject

+ (void *)framework;
+ (void)softLink;
+ (Class)ABAddressBook;
+ (id)kABLastNameProperty;
+ (id)kABFirstNameProperty;
+ (id)kABMiddleNameProperty;
+ (id)kABURLsProperty;
+ (id)kABHomePageLabel;
+ (id)kABPhoneProperty;
+ (id)kABPhoneHomeLabel;
+ (id)kABEmailProperty;
+ (id)kABEmailHomeLabel;
+ (id)kABFirstNamePhoneticProperty;
+ (id)kABLastNamePhoneticProperty;
+ (id)kABMiddleNamePhoneticProperty;
+ (Class)ABPerson;
+ (Class)ABSearchElement;
+ (id)kABInstantMessageProperty;
+ (id)kABInstantMessageUsernameKey;
+ (id)kABOtherDatesProperty;
+ (id)kABBirthdayProperty;
+ (id)kABCreationDateProperty;
+ (id)kABModificationDateProperty;
+ (id)kABAddressProperty;
+ (id)kABAddressCityKey;
+ (id)kABOrganizationProperty;
+ (id)kABDepartmentProperty;
+ (id)kABNoteProperty;
+ (id)kABAddressStateKey;
+ (id)kABAddressZIPKey;
+ (id)kABAnniversaryLabel;
+ (Class)ABGroup;
+ (id)kABGroupNameProperty;
+ (id)kABHomePageProperty;

@end
