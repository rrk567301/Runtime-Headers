@class NSString, NSData, TRIClientSelectedNamespace;

@interface TRIClientFactorPackStreamingParser : NSObject {
    NSString *_factorPackId;
    TRIClientSelectedNamespace *_selectedNamespace;
    BOOL _emittedUnrecognizedFieldWarning;
}

@property (readonly, nonatomic) BOOL hasFactorPackId;
@property (readonly, nonatomic) NSString *factorPackId;
@property (readonly, nonatomic) BOOL hasSelectedNamespace;
@property (readonly, nonatomic) TRIClientSelectedNamespace *selectedNamespace;
@property (readonly, nonatomic) NSData *data;

- (void)enumerateFactorLevelsWithBlock:(id /* block */)a0;
- (void)_parseWithHandleFactorLevel:(id /* block */)a0;
- (unsigned int)_fieldTagForFieldName:(id)a0;
- (id)initWithData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)downloadedFactorsWithPaths:(id)a0;
- (id)init;

@end
