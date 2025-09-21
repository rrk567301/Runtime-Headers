@class NSString, NSArray, SGNode;

@interface SGGraph : NSObject <SGHasIO> {
    void /* function */ name;
    void /* unknown type, empty encoding */ nodes;
    void /* unknown type, empty encoding */ nodeMap;
    void /* function */ edges;
    void /* function */ inputs;
    void /* function */ outputs;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) SGNode *argumentsNode;
@property (nonatomic, readonly) SGNode *resultsNode;
@property (nonatomic, readonly) NSArray *childNodes;
@property (nonatomic, copy) NSArray *edges;
@property (nonatomic, copy) NSArray *inputs;
@property (nonatomic, copy) NSArray *outputs;

+ (id)graphWithName:(id)a0 inputs:(id)a1 outputs:(id)a2;
+ (id)graphWithData:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)connect:(id)a0 to:(id)a1 error:(id *)a2;
- (BOOL)insertNodes:(id)a0 error:(id *)a1;
- (BOOL)connectOutputInputPairs:(id)a0 error:(id *)a1;
- (id)createDotRepresentationWithError:(id *)a0;
- (id)nodeNamed:(id)a0;

@end
