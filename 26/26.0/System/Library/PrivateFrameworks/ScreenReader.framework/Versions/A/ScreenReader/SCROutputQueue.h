@class SCROutputRequest, NSMutableDictionary, NSLock, NSMutableArray;

@interface SCROutputQueue : NSObject <SCROutputQueueProtocol> {
    NSLock *_queuedObjectsLock;
    struct __CFArray { } *_queuedOutputRequests;
    struct __CFDictionary { } *_queuedObjectsByOutputID;
    unsigned long long _blockingRequestUniqueID;
    NSMutableArray *_announcementHistory;
    SCROutputRequest *_synchronousOutputRequest;
}

@property (retain, nonatomic, setter=_setQueuedObjectsByQueueID:) NSMutableDictionary *_queuedObjectsByQueueID;
@property (retain, nonatomic, setter=_setRequestRunners:) NSMutableDictionary *_requestRunners;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (long long)_count;
- (id)_allKeys;
- (void)processRequest:(id)a0;
- (void)_removeTopIndex;
- (void)stopRunnersWithQueueIdentifier:(id)a0;
- (void)_addToQueue:(id)a0;
- (void)_removeAllQueueObjects;
- (void)_removeByOutputID:(id)a0;
- (void)_removeQueueObjectForOutputID:(struct __CFString { } *)a0;
- (void)_removeQueueObjectForQueueID:(struct __CFString { } *)a0;
- (void)_removeQueueObjectForQueueID:(struct __CFString { } *)a0 andOutputID:(struct __CFString { } *)a1;
- (id)_topValue;
- (void)addAnnouncementRequestToHistory:(id)a0;
- (id)announcementStrings;
- (void)cancelQueuedRequestsForOutputIdentifier:(id)a0 queueIdentifier:(id)a1;
- (void)dispatchNextQueuedSteps;
- (void)runOutputRequest:(id)a0 usingOutputIdentifier:(id)a1;
- (void)runnerFinish:(unsigned long long)a0 outputIdentifier:(id)a1;
- (long long)sendStopSpeechAndSoundRequest:(BOOL)a0 except:(id)a1;
- (void)startRunners:(struct __CFDictionary { } *)a0 forOutputRequest:(id)a1 usingOutputIdentifier:(id)a2;
- (void)stopRunnersWithQueueIdentifier:(id)a0 except:(id)a1;

@end
