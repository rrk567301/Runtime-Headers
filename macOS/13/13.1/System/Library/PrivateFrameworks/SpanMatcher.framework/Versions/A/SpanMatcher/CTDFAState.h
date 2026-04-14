@class NSMutableDictionary;

@interface CTDFAState : NSObject {
    id _CTdata;
    NSMutableDictionary *_CTinternalEdges;
}

@property (readonly, nonatomic) id data;
@property (nonatomic) BOOL final;

- (id)description;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)edges;
- (id)followingStateWithSymbol:(id)a0;
- (void)addEdgeWithSymbol:(id)a0 toState:(id)a1;

@end
