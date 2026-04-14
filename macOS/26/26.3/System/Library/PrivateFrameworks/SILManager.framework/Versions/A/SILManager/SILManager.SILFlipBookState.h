@class NSString, _TtC10SILManager26SILFlipBookTransitionPoint, NSDictionary;

@interface SILManager.SILFlipBookState : SILManager.SILMgrCommonBase {
    void /* function */ name;
    void /* function */ transitions;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) _TtC10SILManager26SILFlipBookTransitionPoint *selfTransition;
@property (nonatomic, readonly) NSDictionary *transitions;

- (id)init;
- (void).cxx_destruct;
- (id)init:(id)a0 name:(id)a1 transitions:(id)a2 error:(id *)a3;

@end
