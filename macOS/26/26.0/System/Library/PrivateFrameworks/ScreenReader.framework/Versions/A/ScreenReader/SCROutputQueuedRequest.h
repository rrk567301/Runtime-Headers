@interface SCROutputQueuedRequest : NSObject <SCROutputQueueProtocol> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ speechJobs;
    void /* unknown type, empty encoding */ _currentSpeechJob;
    void /* unknown type, empty encoding */ _requestRunners;
    void /* unknown type, empty encoding */ defaultRunner;
    void /* unknown type, empty encoding */ _announcementHistory;
    void /* unknown type, empty encoding */ delayedList;
}

- (void)enqueue:(id)a0;
- (id)init;
- (BOOL)removeJob:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)processRequest:(id)a0;
- (void)stopRunnersWithQueueIdentifier:(id)a0;
- (id)announcementStrings;
- (void)cancelQueuedRequestsForOutputIdentifier:(id)a0 queueIdentifier:(id)a1;
- (void)dispatchNext;
- (void)dispatchWithDelayed:(BOOL)a0;
- (void)runnerFinish:(unsigned long long)a0 outputIdentifier:(id)a1;
- (long long)sendStopSpeechAndSoundRequest:(BOOL)a0 except:(id)a1;
- (void)startTargetedRunner:(id)a0 request:(id)a1;

@end
