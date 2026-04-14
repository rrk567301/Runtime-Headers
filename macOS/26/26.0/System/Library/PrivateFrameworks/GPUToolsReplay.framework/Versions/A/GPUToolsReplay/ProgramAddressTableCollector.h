@class NSMutableDictionary, NSMutableArray;

@interface ProgramAddressTableCollector : NSObject {
    NSMutableDictionary *_binaryTypes;
    NSMutableArray *_mappings;
    NSMutableDictionary *_binaries;
    NSMutableArray *_functionIndices;
    unsigned int _drawCallIndex;
    struct apr_pool_t { } *_addressPool;
    struct apr_hash_t { } *_addresses;
}

- (void)dealloc;
- (id)init;
- (id)mappings;
- (void).cxx_destruct;
- (void)addOtherEncoderFunctionIndex:(unsigned long long)a0 forEncoder:(unsigned int)a1 atEncoderIndex:(unsigned int)a2 forType:(id)a3;
- (void)addBinaries:(id)a0;
- (void)addBinaryMapping:(id)a0 forEncoder:(unsigned int)a1 atEncoderIndex:(unsigned int)a2 forIndex:(unsigned int)a3;
- (void)addProgramAddressTable:(id)a0 forEncoder:(unsigned int)a1 atEncoderIndex:(unsigned int)a2;
- (void)addSampledCallFunctionIndex:(unsigned long long)a0;
- (void)addSampledCallFunctionIndex:(unsigned long long)a0 forIndex:(unsigned int)a1 forEncoder:(unsigned int)a2 atEncoderIndex:(unsigned int)a3 forType:(id)a4;
- (id)binaries;
- (id)initForHarvestingBinaries;

@end
