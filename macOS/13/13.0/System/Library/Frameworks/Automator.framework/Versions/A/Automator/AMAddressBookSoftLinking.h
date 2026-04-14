@interface AMAddressBookSoftLinking : NSObject

+ (void *)framework;
+ (void)softLink;
+ (Class)ABPerson;
+ (Class)ABGroup;
+ (Class)ABSearchElement;
+ (Class)ABAddressBook;
+ (id)kABFirstNameProperty;
+ (id)kABFirstNamePhoneticProperty;
+ (id)kABMiddleNameProperty;
+ (id)kABMiddleNamePhoneticProperty;
+ (id)kABLastNameProperty;
+ (id)kABLastNamePhoneticProperty;
+ (id)kABURLsProperty;
+ (id)kABPhoneProperty;
+ (id)kABHomePageProperty;
+ (id)kABEmailProperty;
+ (id)kABInstantMessageProperty;
+ (id)kABBirthdayProperty;
+ (id)kABAddressProperty;
+ (id)kABOrganizationProperty;
+ (id)kABDepartmentProperty;
+ (id)kABNoteProperty;
+ (id)kABGroupNameProperty;
+ (id)kABCreationDateProperty;
+ (id)kABModificationDateProperty;
+ (id)kABOtherDatesProperty;
+ (id)kABPhoneHomeLabel;
+ (id)kABEmailHomeLabel;
+ (id)kABHomePageLabel;
+ (id)kABAnniversaryLabel;
+ (id)kABAddressCityKey;
+ (id)kABAddressStateKey;
+ (id)kABAddressZIPKey;
+ (id)kABInstantMessageUsernameKey;

@end
