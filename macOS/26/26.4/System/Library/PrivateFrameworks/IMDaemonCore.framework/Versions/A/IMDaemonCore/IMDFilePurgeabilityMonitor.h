@interface IMDFilePurgeabilityMonitor : NSObject <IMUserNotificationListener> {
    void /* unknown type, empty encoding */ purgeabilityQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)userNotificationDidFinish:(id)a0;
- (void)observeFileEvents:(id)a0;

@end
