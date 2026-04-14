@class NSMutableData;

@interface VCPDataCompressor : NSObject {
    NSMutableData *_scratchData;
    NSMutableData *_resultData;
}

+ (id)compressor;

- (void).cxx_destruct;
- (id)init;
- (id)compressData:(id)a0;

@end
