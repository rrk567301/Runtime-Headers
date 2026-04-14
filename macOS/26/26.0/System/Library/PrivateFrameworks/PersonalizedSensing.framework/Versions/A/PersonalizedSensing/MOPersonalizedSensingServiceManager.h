@class NSString, MOConnectionManager, NSObject;
@protocol OS_dispatch_queue;

@interface MOPersonalizedSensingServiceManager : NSObject <MOConnectionManagerDelegate> {
    MOConnectionManager *connectionManager;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL isGMSAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generatePromptSuggestionWithTemplate:(id)a0 context:(id)a1 options:(id)a2;
+ (BOOL)isServiceDeployed;
+ (void)primeService;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)fetchPersonalizedContextWithOptions:(id)a0 withReply:(id /* block */)a1;
- (id)makeNewConnectionWithInterfaceFor:(id)a0;
- (void)refreshMomentsContextWithReply:(id /* block */)a0;
- (void)_fetchPersonalizedSyncContextWithOptions:(id)a0 withReply:(id /* block */)a1;
- (void)fetchContextWithOptions:(id)a0 predicates:(id)a1 authorizedTypes:(id)a2 withReply:(id /* block */)a3;
- (void)notifyContextFeedback:(id)a0 withReply:(id /* block */)a1;
- (void)requestDBAccessForPersonalizedSensingServiceWithReply:(id /* block */)a0;

@end
