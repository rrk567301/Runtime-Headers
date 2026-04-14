@class NSMutableDictionary, CTDFAState;

@interface CTDFA : NSObject {
    NSMutableDictionary *_CTstates;
    CTDFAState *_CTstart;
}

@property (retain, nonatomic) id startState;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)_CTaddState:(id)a0;
- (id)edgesFromState:(id)a0;
- (void)addFinalState:(id)a0;
- (BOOL)isFinalState:(id)a0;
- (void)addEdge:(id)a0 fromState:(id)a1 toState:(id)a2;
- (id)followingStateFrom:(id)a0 withSymbol:(id)a1;

@end
