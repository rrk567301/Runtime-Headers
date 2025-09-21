@class NSString, NSData, TRIClientSelectedNamespace;

@interface TRIClientFactorPackStreamingParser : NSObject {
    NSString *_factorPackId;
    TRIClientSelectedNamespace *_selectedNamespace;
    char _emittedUnrecognizedFieldWarning;
}

@property (readonly, nonatomic) char hasFactorPackId;
@property (readonly, nonatomic) NSString *factorPackId;
@property (readonly, nonatomic) char hasSelectedNamespace;
@property (readonly, nonatomic) TRIClientSelectedNamespace *selectedNamespace;
@property (readonly, nonatomic) NSData *data;

- (id)init;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 error:(id *)a1;
- (void)enumerateFactorLevelsWithBlock:(id /* block */)a0;
- (unsigned int)_fieldTagForFieldName:(id)a0;
- (void)_parseWithHandleFactorLevel:(id /* block */)a0;
- (id)downloadedFactorsWithPaths:(id)a0;

@end
