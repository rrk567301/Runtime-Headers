@class NSError;

@interface _TtCC24IntelligencePlatformCore24KnowledgeConstructionXPC6Server : NSObject <GDKnowledgeConstructionXPCProtocol>

- (id)init;
- (void)checkInWithCompletion:(void (^)(char, NSError *))a0;
- (void)runFastpassPipelineWithReason:(unsigned long long)a0 completion:(void (^)(char, NSError *))a1;
- (void)runFullPipelineWithReason:(unsigned long long)a0 completion:(void (^)(char, NSError *))a1;
- (void)stopPipelineWithCompletion:(void (^)(char, NSError *))a0;

@end
