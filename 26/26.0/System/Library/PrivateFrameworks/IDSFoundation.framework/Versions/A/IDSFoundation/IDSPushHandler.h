@class NSRecursiveLock, APSConnection, NSString, NSData, NSMapTable, NSMutableSet;

@interface IDSPushHandler : NSObject <APSConnectionDelegate> {
    NSData *_cachedPushToken;
    NSMapTable *_handlerMap;
    NSMutableSet *_wakingTopicsCache;
    NSMutableSet *_opportunisticTopicsCache;
    NSMutableSet *_nonWakingTopicsCache;
    id _ncHandler;
    NSRecursiveLock *_recursiveLock;
}

@property (retain, nonatomic) APSConnection *apsConnection;
@property (retain, nonatomic) NSString *namedDelegatePort;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly, nonatomic) NSData *pushToken;
@property (nonatomic) BOOL shouldWaitToSetTopics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedInstanceWithPortName:(id)a0;

- (id)initWithPort:(id)a0;
- (void)connection:(id)a0 didChangeConnectedStatus:(BOOL)a1;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)_updateTopics;
- (void)connectionDidReconnect:(id)a0;
- (void)setTopics:(id)a0 forListener:(id)a1;
- (void)dealloc;
- (id)_apsConnectionPushToken;
- (void)connection:(id)a0 didFailToSendOutgoingMessage:(id)a1 error:(id)a2;
- (void)_recalculateTopicsCache;
- (id)init;
- (void)addListener:(id)a0 wakingTopics:(id)a1 opportunisticTopics:(id)a2 nonWakingTopics:(id)a3 commands:(id)a4 queue:(id)a5;
- (void)subscribeToChannel:(id)a0 forTopic:(id)a1;
- (void)writePushPayloadToDiskIfEnabled:(id)a0 topic:(id)a1;
- (id)_getValidPushHandlersWithSelector:(SEL)a0 topic:(id)a1 command:(id)a2;
- (BOOL)_validateHandler:(id)a0 withSelector:(SEL)a1 topic:(id)a2 command:(id)a3;
- (void)setUltraConstrainedTopics:(id)a0 forListener:(id)a1;
- (void)setCommands:(id)a0 forListener:(id)a1;
- (void)addListener:(id)a0 topics:(id)a1 commands:(id)a2 queue:(id)a3;
- (void)configureAsMacNotificationCenterObserver:(id)a0 withPushToWakeTopics:(id)a1;
- (void)removeListener:(id)a0;
- (struct __SecIdentity { } *)copyPushIdentity;
- (void)_powerLogIncomingMessage:(id)a0 command:(id)a1 topic:(id)a2;
- (void)connection:(id)a0 didSendOutgoingMessage:(id)a1;
- (void)configureAsMacNotificationCenterObserver:(id)a0;
- (void)_powerLogEvent:(id)a0 dictionary:(id)a1;
- (void).cxx_destruct;
- (void)setWakingTopics:(id)a0 opportunisticTopics:(id)a1 nonWakingTopics:(id)a2 forListener:(id)a3;

@end
