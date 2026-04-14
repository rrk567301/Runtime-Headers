@class NSArray;

@interface DDBridgeMaterialGraph : NSObject {
    void /* function */ nodes;
    void /* function */ edges;
    void /* function */ inputs;
    void /* function */ outputs;
    void /* function */ primvars;
}

@property (nonatomic, readonly) NSArray *nodes;
@property (nonatomic, readonly) NSArray *edges;
@property (nonatomic, readonly) NSArray *inputs;
@property (nonatomic, readonly) NSArray *outputs;
@property (nonatomic, readonly) NSArray *primvars;

- (void).cxx_destruct;
- (id)init;
- (id)initWithNodes:(id)a0 edges:(id)a1 inputs:(id)a2 outputs:(id)a3 primvars:(id)a4;

@end
