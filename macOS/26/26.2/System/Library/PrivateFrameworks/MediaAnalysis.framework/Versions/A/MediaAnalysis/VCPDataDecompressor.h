@class NSMutableData;

@interface VCPDataDecompressor : NSObject {
    NSMutableData *_scratchData;
    NSMutableData *_resultData;
}

+ (id)decompressor;

- (void).cxx_destruct;
- (id)init;
- (id)decompressData:(id)a0;

@end
