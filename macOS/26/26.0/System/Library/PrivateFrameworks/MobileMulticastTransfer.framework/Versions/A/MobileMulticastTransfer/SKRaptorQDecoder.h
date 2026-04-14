@class NSArray, NSMutableIndexSet, NSNumber, NSMutableArray;

@interface SKRaptorQDecoder : NSObject {
    struct ioctx { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; BOOL x6; BOOL x7; } *_outputIO;
    struct nanorq { } *_rq;
    NSMutableArray *_receptionDetails;
    NSArray *_encodedFileURLs;
    NSArray *_encodedFileHandles;
    NSArray *_encodedSymbolSets;
    NSArray *_targetSymbolCounts;
    NSMutableIndexSet *_sbnStillReceiving;
}

@property (readonly, nonatomic) NSNumber *decodingProgress;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)addPacket:(id)a0 error:(id *)a1;
- (BOOL)addPacketsFromFilesInSummary:(id)a0 error:(id *)a1;
- (double)calculateSymbolLostRate;
- (BOOL)decodeAllSourceBlocks:(id *)a0 discarded:(unsigned long long *)a1;
- (BOOL)decodeBlock:(unsigned long long)a0 error:(id *)a1 discarded:(unsigned long long *)a2;
- (BOOL)decodeInputURL:(id)a0 error:(id *)a1;
- (id)initWithBasicParameters:(unsigned long long)a0 extendedParameters:(unsigned int)a1 repairFactor:(unsigned int)a2 threshold:(unsigned long long)a3 outputURL:(id)a4 error:(id *)a5;
- (unsigned long long)missingSymbolCount;
- (BOOL)sufficientSymbolsReceived;

@end
