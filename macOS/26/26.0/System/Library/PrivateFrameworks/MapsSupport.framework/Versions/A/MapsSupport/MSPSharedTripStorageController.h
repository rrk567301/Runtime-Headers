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

- (void)sendingRulesTouched;
- (id)receivingRulesForIdentifier:(id)a0;
- (void)dealloc;
- (id)_identifiersOfStaleSessions:(id)a0;
- (void)_loadStoredSessions;
- (void)updateGroupSessionStorageWithState:(id)a0;
- (void)_saveStoredSessions;
- (id)groupSessionInfoForKey:(id)a0;
- (id)init;
- (void)_saveSenderSession;
- (void)addNewSession:(id)a0 originator:(id)a1 receivingHandle:(id)a2 receivingAccountIdentifier:(id)a3;
- (void)_loadSenderSession;
- (id)sendingRulesForIdentifier:(id)a0;
- (void)_saveSendingRules;
- (void)_saveReceivingRules;
- (void)initialiseStoredSessionsIfNeeded;
- (void)removeSession:(id)a0;
- (void).cxx_destruct;
- (void)receivingRulesTouched;

@end
