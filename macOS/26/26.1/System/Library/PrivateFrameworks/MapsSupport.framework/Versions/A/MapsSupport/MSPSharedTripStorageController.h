@class NSMutableDictionary, MSPGroupSessionStorage;
@protocol MSPSharedTripStorageDelegate;

@interface MSPSharedTripStorageController : NSObject {
    BOOL _initalisedStoredSessions;
}

@property (retain, nonatomic) NSMutableDictionary *sharedTripGroupSessionInfo;
@property (retain, nonatomic) NSMutableDictionary *receiverRules;
@property (retain, nonatomic) NSMutableDictionary *senderRules;
@property (weak, nonatomic) id<MSPSharedTripStorageDelegate> delegate;
@property (retain, nonatomic) MSPGroupSessionStorage *senderSessionStorage;

+ (id)_receivedNotificationRulesPath;
+ (id)_receivedSessionsPath;
+ (id)_senderSessionStoragePath;
+ (id)_sentNotificationRulesPath;
+ (void)removeFilesFromBackupsIfNeeded;

- (void)_loadStoredSessions;
- (void)_saveStoredSessions;
- (id)_identifiersOfStaleSessions:(id)a0;
- (void)initialiseStoredSessionsIfNeeded;
- (void)sendingRulesTouched;
- (void)updateGroupSessionStorageWithState:(id)a0;
- (void)dealloc;
- (void)_saveReceivingRules;
- (id)sendingRulesForIdentifier:(id)a0;
- (void)_loadSenderSession;
- (void)_saveSendingRules;
- (void)removeSession:(id)a0;
- (void).cxx_destruct;
- (void)_saveSenderSession;
- (void)addNewSession:(id)a0 originator:(id)a1 receivingHandle:(id)a2 receivingAccountIdentifier:(id)a3;
- (id)groupSessionInfoForKey:(id)a0;
- (void)receivingRulesTouched;
- (id)init;
- (id)receivingRulesForIdentifier:(id)a0;

@end
