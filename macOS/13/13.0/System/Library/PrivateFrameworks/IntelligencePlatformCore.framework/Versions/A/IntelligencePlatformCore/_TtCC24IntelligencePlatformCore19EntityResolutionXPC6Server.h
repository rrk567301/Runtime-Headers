@class NSError, GDEntityResolutionResult, GDEntityResolutionRequest;

@interface _TtCC24IntelligencePlatformCore19EntityResolutionXPC6Server : NSObject <GDEntityResolutionXPCProtocol>

- (id)init;
- (void).cxx_destruct;
- (void)submitQuery:(GDEntityResolutionRequest *)a0 withCompletion:(void (^)(GDEntityResolutionResult *, NSError *))a1;

@end
