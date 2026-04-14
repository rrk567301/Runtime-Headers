@class NSString, NSConditionLock, NSMutableSet, NSMutableDictionary, MCInvocationQueue;

@interface MFSpotlightManager : NSObject <MCActivityTarget> {
    NSConditionLock *_attachmentIndexingLock;
    NSMutableSet *_messsagesScheduledForAttachmentIndexing;
    NSMutableDictionary *_queryObserverDictionary;
}

@property (readonly, nonatomic) MCInvocationQueue *indexQueue;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;
+ (id)_log;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)test_cancelAllSpotlightIndexingOperations;
- (void)immediatelyIndexAttachmentsForMessage:(id)a0;
- (void)indexAttachmentsForMessage:(id)a0;
- (long long)registerQueryObserver:(id)a0;
- (void)unregisterQueryObserver:(long long)a0;
- (id)acquireQueryObserver:(long long)a0;
- (void)_triggerNowAttachmentIndexing;
- (void)_indexAttachmentsForScheduledMessages;
- (void)_synchronouslyIndexAttachmentsForMessages:(id)a0 messageCount:(unsigned long long)a1;
- (void)_triggerDelayedAttachmentIndexing;
- (void)test_waitForSpotlightIndexingOperationsToFinish;
- (BOOL)isSpotlightEnabled;

@end
