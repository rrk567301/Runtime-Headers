@class NSArray, NSDictionary;

@interface SILManager.SILFlipBookDesc : SILManager.SILMgrCommonBase {
    void /* function */ states;
    void /* function */ statesInfo;
}

@property (class, nonatomic, readonly) float kFrameDuration;

@property (nonatomic, readonly) NSArray *states;
@property (nonatomic, readonly) NSDictionary *statesInfo;

- (void).cxx_destruct;
- (id)init;
- (id)init:(id)a0 :(id)a1 error:(id *)a2;
- (BOOL)transitionSupportedFromState:(id)a0 toState:(id)a1;

@end
