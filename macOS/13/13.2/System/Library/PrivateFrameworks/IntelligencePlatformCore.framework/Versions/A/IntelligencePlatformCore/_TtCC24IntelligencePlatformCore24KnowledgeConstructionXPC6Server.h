@class NSError;

@interface _TtCC24IntelligencePlatformCore24KnowledgeConstructionXPC6Server : NSObject <GDKnowledgeConstructionXPCProtocol>

- (id)init;
- (void)stopPipelineWithCompletion:(void (^)(BOOL, NSError *))a0;
- (void)runFullPipelineWithReason:(unsigned long long)a0 completion:(void (^)(BOOL, NSError *))a1;
- (void)checkInWithCompletion:(void (^)(BOOL, NSError *))a0;

@end
