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

- (id)myPhoneNumbers;
- (id)contactStore;
- (id)myShortDisplayName;
- (id)initWithStore:(id)a0;
- (id)myEmailAddresses;
- (id)unifiedMeContact;
- (id)cachedEmailAddress;
- (id)myHomeAddress;
- (BOOL)shouldPermitOrganizerEmailFromJunkChecks:(id)a0;
- (id)_meWithKeys:(id)a0;
- (id)unifiedContactWithIdentifier:(id)a0 keysToFetch:(id)a1;
- (id)myWorkAddress;
- (void)setTestMeContactIdentifier:(id)a0;
- (void)setMeCardEmailsForUnitTesting:(id)a0;
- (id)cachedEmailAddressArray;
- (id)myFullName;
- (id)myEmailAddress;
- (id)_fullNameForFirstContactMatchingPredicate:(id)a0;
- (void)contactsChanged:(id)a0;
- (id)unifiedContactsForHandleStrings:(id)a0 keysToFetch:(id)a1;
- (id)unifiedContactWithEmailAddress:(id)a0;
- (id)myAddressForLabel:(id)a0;
- (BOOL)urlMatchesOneOfMyEmails:(id)a0;
- (BOOL)matchesOneOfMyEmails:(id)a0;
- (void)meCardChanged:(id)a0;
- (void)_syncContacts;
- (id)unifiedContactWithName:(id)a0;
- (id)nullableContactStore;
- (BOOL)matchesOneOfMyPhoneNumbers:(id)a0;
- (void).cxx_destruct;
- (id)unifiedContactWithPhoneNumber:(id)a0;
- (BOOL)shouldPermitOrganizerPhoneNumberFromJunkChecks:(id)a0;
- (id)unifiedContactsMatchingPredicate:(id)a0 keysToFetch:(id)a1;
- (id)_lastHistoryToken;
- (id)init;
- (id)unifiedContactMatchingString:(id)a0 keysToFetch:(id)a1 matchType:(long long *)a2;
- (id)fullNameForFirstContactMatchingPhoneNumber:(id)a0;
- (id)unifiedContactWithIdentifier:(id)a0;
- (BOOL)contactIdentifierIsMe:(id)a0;
- (void)registerForContactChangeNotifications:(id)a0;
- (id)unifiedContactsDictionaryForHandleStrings:(id)a0 keysToFetch:(id)a1;
- (BOOL)contactAccessResolved;
- (void)_setLastHistoryToken:(id)a0;
- (id)unifiedContactMatchingName:(id)a0 email:(id)a1 url:(id)a2 keysToFetch:(id)a3;
- (id)contactsFromContactIdentifiers:(id)a0 withKeys:(id)a1;
- (id)_fetchedUnifiedMeContact;
- (void)deregisterForContactChangeNotifications:(id)a0;
- (id)fullNameForFirstContactMatchingEmailAddress:(id)a0;
- (id)cachedEmailAddresses;
- (id)myNameWithStyle:(long long)a0;

@end
