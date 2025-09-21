@class NSMutableDictionary;

@interface CTNFAState : NSObject {
    id _CTdata;
    NSMutableDictionary *_CTinternalEdges;
}

@property (readonly, nonatomic) id data;
@property (nonatomic) BOOL final;

- (id)initWithData:(id)a0;
- (id)edges;
- (id)description;
- (void).cxx_destruct;
- (void)addEdgeWithSymbol:(id)a0 toState:(id)a1;
- (id)followingStatesWithSymbol:(id)a0;

@end
