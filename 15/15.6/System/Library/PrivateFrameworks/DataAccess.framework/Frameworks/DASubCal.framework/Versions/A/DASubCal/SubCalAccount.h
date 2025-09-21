@class NSString, NSDictionary, NSData, NSURL, DACoreDAVTaskManager;

@interface SubCalAccount : DAAccount <SubCalValidationTaskDelegate, DASubCalAccount>

@property (retain, nonatomic) NSData *tmpICSData;
@property (nonatomic) char shouldRemoveAlarms;
@property (nonatomic) char shouldRemoveAttachments;
@property (retain, nonatomic) NSString *syncId;
@property (retain, nonatomic) NSDictionary *externalRepresentation;
@property (readonly, nonatomic) NSURL *subscriptionURL;
@property (retain, nonatomic) NSString *calDAVURLPath;
@property (readonly, nonatomic) NSString *calendarExternalId;
@property (nonatomic) double refreshInterval;
@property (nonatomic) char useFTP;
@property (nonatomic) char isManagedCalendar;
@property (readonly, nonatomic) char isChinaHolidayCalendar;
@property (readonly, nonatomic) char isSyncedHolidayCalendar;
@property (readonly, nonatomic) char isHolidaySubscribedCalendar;
@property (nonatomic) char allowInsecureConnection;
@property (readonly, nonatomic) DACoreDAVTaskManager *taskManager;
@property (nonatomic) int subCalAccountVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setHost:(id)a0;
- (id)accountDescription;
- (void)setAccountDescription:(id)a0;
- (char)isEqualToAccount:(id)a0;
- (id)localizedInvalidPasswordMessage;
- (void)discoverInitialPropertiesWithConsumer:(id)a0;
- (id)initWithBackingAccountInfo:(id)a0;
- (id)localizedIdenticalAccountFailureMessage;
- (id)onBehalfOfBundleIdentifier;
- (char)upgradeAccount;
- (char)isSubscribedCalendarAccount;
- (char)accountHasSignificantPropertyChangesWithChangeInfo:(id)a0;
- (void)handleTrustChallenge:(id)a0 forTask:(id)a1;
- (void)handleTrustChallenge:(id)a0 forTask:(id)a1 completionHandler:(id /* block */)a2;
- (void)subCalValidationTask:(id)a0 downloadProgressedTo:(long long)a1 outOf:(long long)a2;
- (void)subCalValidationTask:(id)a0 finishedWithError:(id)a1 calendarName:(id)a2 document:(id)a3 calendarData:(id)a4;
- (void)clearTmpICSData;
- (void)_checkValidityWithConsumer:(id)a0 quickValidate:(char)a1;
- (id)_tmpICSCalendarPath;
- (int)currentAccountVersion;
- (char)hasSubscribedCalendarAtURL:(id)a0;
- (void)quickValidate:(id)a0;
- (void)refreshAllCalendars:(char)a0;
- (void)removeDBSyncDataForAccountChange:(id)a0;
- (char)removeDataFromCalendar:(id)a0 forAccountChange:(id)a1;
- (void)saveTmpICSData;
- (void)setCurrentAccountVersion:(int)a0;
- (void)setVersionForNewAccount;
- (void)upgradeAccountSpecificPropertiesOnAccount:(id)a0 inStore:(id)a1 parentAccount:(id)a2;

@end
