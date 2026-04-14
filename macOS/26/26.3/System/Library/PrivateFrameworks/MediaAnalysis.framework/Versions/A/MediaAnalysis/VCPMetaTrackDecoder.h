@class AVAssetReaderTrackOutput, AVAssetReader, AVAssetReaderOutputMetadataAdaptor;

@interface VCPMetaTrackDecoder : NSObject {
    AVAssetReader *_reader;
    AVAssetReaderTrackOutput *_readerOutput;
    AVAssetReaderOutputMetadataAdaptor *_readerOutputAdaptor;
}

- (void).cxx_destruct;
- (void)dealloc;
- (long long)status;
- (id)initWithTrack:(id)a0;
- (id)copyNextMetadataGroup;

@end
