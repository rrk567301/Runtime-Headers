@interface IMDFilePurgeabilityMonitor : NSObject <IMUserNotificationListener> {
    void /* unknown type, empty encoding */ purgeabilityQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)userNotificationDidFinish:(id)a0;
- (void)observeFileEvents:(id)a0;

@end
