@class NSString, NSURL;
@protocol DAValidityCheckConsumer;

@interface PubCalAccount : DAAccount <DAPubCalAccount> {
    id<DAValidityCheckConsumer> _validationConsumer;
}

@property (copy, nonatomic) NSString *publishedCalendarUUID;
@property (copy, nonatomic) NSString *publishedCalendarName;
@property (readonly, nonatomic) NSURL *publishURL;
@property (nonatomic) BOOL automaticallyPublishChanges;
@property (nonatomic) BOOL filterTitleAndNotes;
@property (nonatomic) BOOL filterAttachments;
@property (nonatomic) BOOL filterAlarms;
@property (nonatomic) BOOL filterAttendees;
@property (copy, nonatomic) NSURL *principalURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)redactedDescription;
- (void).cxx_destruct;
- (id)fileName;
- (BOOL)isDisabled;
- (BOOL)isEqualToAccount:(id)a0;
- (void)discoverInitialPropertiesWithConsumer:(id)a0;
- (id)localizedIdenticalAccountFailureMessage;
- (id)localizedInvalidPasswordMessage;
- (id)onBehalfOfBundleIdentifier;
- (BOOL)shouldRemoveDBSyncDataOnAccountChange;
- (void)calendarPublishedToURL:(id)a0;
- (void)calendarPublishToURL:(id)a0 failedWithError:(id)a1;
- (void)_validityCheckFinishedWithSuccess:(BOOL)a0 error:(id)a1;

@end
