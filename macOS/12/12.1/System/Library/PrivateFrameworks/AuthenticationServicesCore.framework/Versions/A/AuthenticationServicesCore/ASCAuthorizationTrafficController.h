@class NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface ASCAuthorizationTrafficController : NSObject {
    NSMutableSet *_appsWithActiveRequests;
    NSObject<OS_dispatch_queue> *_clearanceQueue;
    NSObject<OS_dispatch_queue> *_trafficQueue;
    NSMutableDictionary *_appIdentifiersToPresentationContexts;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)beginAuthorizationForApplicationIdentifier:(id)a0 withClearanceHandler:(id /* block */)a1;
- (void)endAuthorizationForAppIdentifier:(id)a0 clearanceHandler:(id /* block */)a1;
- (void)cancelAuthorizationForAppIdentifierIfNecessary:(id)a0;
- (void)getPresentationContextForApplicationWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)setPresentationContext:(id)a0 forApplicationWithIdentifier:(id)a1;

@end
