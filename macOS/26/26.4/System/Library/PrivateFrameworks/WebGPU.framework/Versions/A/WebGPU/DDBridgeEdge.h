@class NSString;

@interface DDBridgeEdge : NSObject {
    void /* function */ upstreamOutputName;
    void /* function */ downstreamInputName;
}

@property (nonatomic, readonly) long long upstreamNodeIndex;
@property (nonatomic, readonly) long long downstreamNodeIndex;
@property (nonatomic, readonly) NSString *upstreamOutputName;
@property (nonatomic, readonly) NSString *downstreamInputName;

- (void).cxx_destruct;
- (id)init;
- (id)initWithUpstreamNodeIndex:(long long)a0 downstreamNodeIndex:(long long)a1 upstreamOutputName:(id)a2 downstreamInputName:(id)a3;

@end
