@class NSString, MOConnectionManager, NSObject;
@protocol OS_dispatch_queue;

@interface MOMomentsIntelligenceServiceManager : NSObject <MOConnectionManagerDelegate> {
    MOConnectionManager *connectionManager;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)classifyBundleForSystemPrompt:(id)a0 Input:(id)a1 WithReply:(id /* block */)a2;
- (void)fetchGenerativeModelsAvailabilityWithReply:(id /* block */)a0;
- (void)generatePersonalizedReflectionPromptsWithSystemPrompt:(id)a0 Input:(id)a1 WithReply:(id /* block */)a2;
- (id)makeNewConnectionWithInterfaceFor:(id)a0;

@end
