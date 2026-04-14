@class BlastDoorLiteMessageCompressor;

@interface IMDLiteMessageCompressor : NSObject

@property (class, readonly, nonatomic) IMDLiteMessageCompressor *sharedCompressor;

@property (retain, nonatomic) BlastDoorLiteMessageCompressor *compressor;

- (void).cxx_destruct;
- (id)init;
- (id)compressData:(id)a0 codecID:(long long *)a1;

@end
