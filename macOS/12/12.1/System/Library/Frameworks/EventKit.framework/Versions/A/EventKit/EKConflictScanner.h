@class EKEventStore;

@interface EKConflictScanner : NSObject

@property (retain) EKEventStore *eventStore;

- (void).cxx_destruct;
- (id)initWithEventStore:(id)a0;
- (id)conflictsForNotifications:(id)a0;
- (id)conflictsForEvents:(id)a0;
- (id)_conflictScanJobForEvent:(id)a0;
- (id)_conflictDetailsForJobs:(id)a0;

@end
