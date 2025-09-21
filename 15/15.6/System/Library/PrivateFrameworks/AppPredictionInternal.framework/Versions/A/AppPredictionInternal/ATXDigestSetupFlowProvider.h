@class ATXNotificationAndSuggestionDatastore;

@interface ATXDigestSetupFlowProvider : NSObject {
    ATXNotificationAndSuggestionDatastore *_datastore;
}

@property (nonatomic) char containsMessageAndTimeSensitiveData;
@property (nonatomic) unsigned long long numDaysOfData;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDatastore:(id)a0;
- (void)numberOfActiveNotificationsWithCompletionHandler:(id /* block */)a0;
- (void)addRemainingAppsWithNoNotificationVolume:(id)a0;
- (id)appsSortedByNumOfNotificationsGivenNumOfDays:(unsigned long long)a0;
- (unsigned long long)numDaysSinceTimestamp:(double)a0;

@end
