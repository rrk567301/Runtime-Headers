@class NSMutableArray, NSNumber, NSString, NSXPCInterface, NSObject, EMRemoteConnection;
@protocol OS_os_log, EFCancelable, EFScheduler;

@interface EMOutgoingMessageRepository : NSObject <EFLoggable, EMOutgoingMessageRepositoryInterfaceObserver> {
    _Atomic BOOL _hasStartedObservingUnsentChanges;
}

@property (class, readonly) NSXPCInterface *remoteInterface;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain) EMRemoteConnection *connection;
@property (retain) id<EFCancelable> registrationCancelable;
@property (readonly, nonatomic) id<EFScheduler> scheduler;
@property (readonly, nonatomic) NSMutableArray *observers;
@property (retain, nonatomic) NSNumber *pendingMessages;
@property (nonatomic) char hasDelayedMessages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)signpostLog;

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)signpostID;
- (char)isProcessing;
- (id)initWithRemoteConnection:(id)a0;
- (void)cancelLastDelayedMessage:(id /* block */)a0;
- (void)processAllQueuedMessages;
- (void)resumeDeliveryQueue;
- (void)scheduleAlarmForSendLaterDate:(id)a0 completion:(id /* block */)a1;
- (void)suspendDeliveryQueue;
- (void)numberOfPendingMessagesChanged:(id)a0;
- (void)_restartObservingUnsentChangesIfNecessary;
- (void)_startObservingUnsentChangesIfNecessary;
- (void)addOutgoingMessageRepositoryObserver:(id)a0;
- (void)deleteDraftsInMailbox:(id)a0 documentID:(id)a1 previousDraftObjectID:(id)a2;
- (id)deliverMessage:(id)a0 usingMailDrop:(char)a1 isCancelable:(char)a2;
- (void)hasDelayedMessagesDidChange:(char)a0;
- (unsigned long long)numberOfPendingMessages;
- (char)outboxContainsMessageFromAccount:(id)a0;
- (void)removeOutgoingMessageRepositoryObserver:(id)a0;
- (id)removeSendLaterDateFromMessage:(id)a0 draftsMailboxObjectID:(id)a1;
- (id)saveDraftMessage:(id)a0 mailboxObjectID:(id)a1 previousDraftObjectID:(id)a2;
- (id)saveSendLaterMessage:(id)a0 sendLaterDate:(id)a1;
- (void)updateObserversForHasDelayedMessagesDidChange;
- (void)updateObserversForPendingMessagesChange;
- (id)updateSendLaterDate:(id)a0 message:(id)a1;

@end
