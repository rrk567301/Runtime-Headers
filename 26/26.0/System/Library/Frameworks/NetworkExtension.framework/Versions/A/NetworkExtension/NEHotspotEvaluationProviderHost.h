@class _TtC16NetworkExtension45NEHotspotEvaluationProviderHostExportedObject;

@interface NEHotspotEvaluationProviderHost : NEExtensionBaseProviderHost

@property (nonatomic, retain) _TtC16NetworkExtension45NEHotspotEvaluationProviderHostExportedObject *exportedObject;

- (id)init;
- (void).cxx_destruct;
- (void)cleanupExportedObject;
- (void)initialize:(id)a0;
- (void)startWithCompletion:(void (^)(BOOL))a0;
- (void)stopWithReason:(long long)a0 completion:(void (^)(BOOL))a1;

@end
