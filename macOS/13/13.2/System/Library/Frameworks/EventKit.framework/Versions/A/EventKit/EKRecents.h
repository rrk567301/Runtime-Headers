@interface EKRecents : NSObject

+ (Class)crRecentContactsLibraryClass;
+ (id)crAddressKindEmailString;
+ (id)crAddressKindPhoneNumberString;
+ (id)crRecentsDomainCalendarString;
+ (id)recentForContactWithAddress:(id)a0 name:(id)a1 kind:(id)a2;
+ (void)recordRecentWithAddress:(id)a0 name:(id)a1 kind:(id)a2;
+ (BOOL)recordRecentForContactWithName:(id)a0 emailAddress:(id)a1 phoneNumber:(id)a2;

@end
