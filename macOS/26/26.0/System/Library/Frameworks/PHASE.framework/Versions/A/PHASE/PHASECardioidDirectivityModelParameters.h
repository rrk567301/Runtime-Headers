@class NSArray, NSMutableArray;

@interface PHASECardioidDirectivityModelParameters : PHASEDirectivityModelParameters {
    NSMutableArray *_internalArray;
}

@property (readonly, nonatomic) NSArray *subbandParameters;

- (void).cxx_destruct;
- (id)initWithSubbandParameters:(id)a0;
- (id)subbandParameters;

@end
