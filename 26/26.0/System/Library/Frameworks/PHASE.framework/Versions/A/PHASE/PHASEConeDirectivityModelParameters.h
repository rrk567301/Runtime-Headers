@class NSArray, NSMutableArray;

@interface PHASEConeDirectivityModelParameters : PHASEDirectivityModelParameters {
    NSMutableArray *_internalArray;
}

@property (readonly, nonatomic) NSArray *subbandParameters;

- (void).cxx_destruct;
- (id)initWithSubbandParameters:(id)a0;
- (id)subbandParameters;

@end
