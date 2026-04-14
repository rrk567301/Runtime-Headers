@class NSObject;
@protocol OS_dispatch_queue;

@interface NLTelemetry : NSObject {
    NSObject<OS_dispatch_queue> *_analyticsQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)_registerPayload:(id)a0 forEvent:(id)a1;
- (void)reportEmbeddingLoadedWithIdentifier:(id)a0 localeIdentifier:(id)a1 useANE:(BOOL)a2 status:(long long)a3;

@end
