@class NSMutableSet, NSUUID, NSMapTable, NSSet, NSXPCConnection, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface UAUserActivityManager : NSObject <UAUserActivityClientResponseProtocol> {
    NSXPCConnection *_connection;
    char _connectionInitializationSucceeded;
    char _activityContinuationIsEnabled;
    char _allowedToConnect;
    NSMutableSet *_userActivityUUIDsSendToServer;
    int _useractivitydpid;
}

@property (readonly) NSObject<OS_dispatch_queue> *serverQ;
@property (copy) NSUUID *activeUserActivityUUID;
@property (retain) NSMapTable *userActivitiesByUUID;
@property (retain) NSMapTable *activeUserActivitiesByUUID;
@property (readonly, copy) NSSet *userActivityUUIDsSendToServer;
@property char needToSendInitialMessage;
@property char registeredForAppResignationMessages;
@property (readonly) NSXPCConnection *connection;
@property char allowedToConnect;
@property (readonly) char supportsActivityContinuation;
@property (readonly) char activityContinuationIsEnabled;
@property (readonly, copy) NSObject<OS_dispatch_queue> *serialQueueForSendingActivitiesToServer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;
+ (id)_determineMatchingApplicationBundleIdentfierWithOptionsForActivityType:(id)a0 dynamicType:(id)a1 kind:(unsigned long long)a2 teamIdentifier:(id)a3;
+ (char)shouldSupportActivityContinuation;
+ (char)userActivityContinuationSupported;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)connectionInterrupted;
- (void)addDynamicUserActivity:(id)a0 matching:(id)a1;
- (char)currentUserActivityUUIDWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeDynamicUserActivity:(id)a0 matching:(id)a1;
- (id)activities;
- (void)connectionInvalidated;
- (id)activeActivitiesByPriority;
- (void)addUserActivity:(id)a0;
- (void)askClientUserActivityToSave:(id)a0;
- (void)askClientUserActivityToSave:(id)a0 completionHandler:(id /* block */)a1;
- (id)createByDecodingUserActivity:(id)a0;
- (char)currentUserActivityProxiesWithOptions:(id)a0 predicate:(id)a1 completionHandler:(id /* block */)a2;
- (char)determineIfUserActivityIsCurrent:(id)a0 completionHandler:(id /* block */)a1;
- (void)didReceiveInputStreamWithUUID:(id)a0 inputStream:(id)a1 outputStream:(id)a2;
- (id)encodeUserActivity:(id)a0;
- (id)encodeUserActivity:(id)a0 options:(id)a1;
- (id)fetchUUID:(id)a0 intervalToWaitForDocumentSynchonization:(double)a1 withCompletionHandler:(id /* block */)a2;
- (char)hasUserActivityWithUUID:(id)a0;
- (char)initialServerHandshake:(char)a0;
- (void)makeActive:(id)a0;
- (void)makeInactive:(id)a0;
- (void)markUserActivityAsDirty:(id)a0 forceImmediate:(char)a1;
- (void)pinUserActivity:(id)a0 withCompletionHandler:(id /* block */)a1;
- (char)registerAsProxyForApplication:(int)a0 options:(id)a1 completionBlock:(id /* block */)a2;
- (void)registerForApplicationDeactivateIfNecessary;
- (void)removeUserActivity:(id)a0;
- (void)sendCurrentActivityToIndexer:(id)a0;
- (void)sendToIndexerIfAppropriate:(id)a0 force:(char)a1;
- (void)sendUserActivityInfoToLSUserActivityd:(id)a0 makeCurrent:(char)a1;
- (void)tellClientDebuggingEnabled:(char)a0 logFileHandle:(id)a1;
- (void)tellClientUserActivityItWasResumed:(id)a0;
- (void)tellDaemonAboutNewLSUserActivity:(id)a0;
- (void)unregisterForApplicationDeactivation;
- (id)userActivityForUUID:(id)a0;
- (char)userActivityIsActive:(id)a0;

@end
