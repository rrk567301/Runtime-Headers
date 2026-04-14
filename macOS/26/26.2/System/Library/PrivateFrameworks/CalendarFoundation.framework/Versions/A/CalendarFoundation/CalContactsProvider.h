@class CNContactStore, CNContact, CNReputationStore, NSString, NSMutableSet, NSObject, NSArray;
@protocol OS_dispatch_queue;

@interface CalContactsProvider : NSObject <CalContactsProviderProtocol> {
    CNContact *_meContact;
}

@property (retain) CNContactStore *store;
@property (retain) CNReputationStore *reputationStore;
@property (retain) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain) NSObject<OS_dispatch_queue> *contactStoreWorkQueue;
@property (retain) CNContact *meContact;
@property (retain) NSString *testMeContactIdentifer;
@property (retain) NSMutableSet *delegates;
@property (retain) NSArray *unitTestEmails;
@property (retain) NSArray *loadedMyEmailAddresses;

+ (id)defaultProvider;
+ (id)birthdayStringForContactName:(id)a0 eventDate:(id)a1 birthDate:(id)a2 lunarCalendar:(id)a3;
+ (BOOL)birthdayIsYearless:(id)a0;
+ (BOOL)isCalendarIslamic:(id)a0;
+ (id)reputationForHandle:(id)a0 inStore:(id)a1;
+ (BOOL)shouldPermitOrganizerEmailFromJunkChecks:(id)a0 inReputationStore:(id)a1;
+ (BOOL)shouldPermitOrganizerPhoneNumberFromJunkChecks:(id)a0 inReputationStore:(id)a1;

- (id)initWithStore:(id)a0;
- (id)contactStore;
- (id)unifiedContactWithEmailAddress:(id)a0;
- (id)unifiedContactMatchingName:(id)a0 email:(id)a1 url:(id)a2 keysToFetch:(id)a3;
- (void)setTestMeContactIdentifier:(id)a0;
- (id)myHomeAddress;
- (id)_fetchedUnifiedMeContact;
- (id)unifiedContactsForHandleStrings:(id)a0 keysToFetch:(id)a1;
- (id)fullNameForFirstContactMatchingEmailAddress:(id)a0;
- (id)myEmailAddresses;
- (id)myShortDisplayName;
- (id)contactsFromContactIdentifiers:(id)a0 withKeys:(id)a1;
- (id)fullNameForFirstContactMatchingPhoneNumber:(id)a0;
- (id)nullableContactStore;
- (BOOL)contactIdentifierIsMe:(id)a0;
- (id)_meWithKeys:(id)a0;
- (void)registerForContactChangeNotifications:(id)a0;
- (BOOL)matchesOneOfMyPhoneNumbers:(id)a0;
- (id)cachedEmailAddressArray;
- (id)unifiedContactWithIdentifier:(id)a0 keysToFetch:(id)a1;
- (id)cachedEmailAddresses;
- (id)cachedEmailAddress;
- (id)myNameWithStyle:(long long)a0;
- (id)unifiedContactsMatchingPredicate:(id)a0 keysToFetch:(id)a1;
- (id)myAddressForLabel:(id)a0;
- (id)unifiedContactWithIdentifier:(id)a0;
- (void)_setLastHistoryToken:(id)a0;
- (id)unifiedContactsDictionaryForHandleStrings:(id)a0 keysToFetch:(id)a1;
- (void).cxx_destruct;
- (void)contactsChanged:(id)a0;
- (id)unifiedContactMatchingString:(id)a0 keysToFetch:(id)a1 matchType:(long long *)a2;
- (id)_lastHistoryToken;
- (void)_syncContacts;
- (id)myPhoneNumbers;
- (BOOL)matchesOneOfMyEmails:(id)a0;
- (BOOL)urlMatchesOneOfMyEmails:(id)a0;
- (id)myEmailAddress;
- (void)meCardChanged:(id)a0;
- (BOOL)contactAccessResolved;
- (id)unifiedContactWithPhoneNumber:(id)a0;
- (id)init;
- (id)unifiedContactWithName:(id)a0;
- (id)_fullNameForFirstContactMatchingPredicate:(id)a0;
- (void)deregisterForContactChangeNotifications:(id)a0;
- (BOOL)shouldPermitOrganizerEmailFromJunkChecks:(id)a0;
- (BOOL)shouldPermitOrganizerPhoneNumberFromJunkChecks:(id)a0;
- (void)setMeCardEmailsForUnitTesting:(id)a0;
- (id)myWorkAddress;
- (id)myFullName;
- (id)unifiedMeContact;

@end
