@class NSData, _REAudioFileAssetReader;

@interface _REAudioFile : AVAudioFile

@property (retain, nonatomic) NSData *backingData;
@property (retain, nonatomic) _REAudioFileAssetReader *reader;

+ (id)audioFileWithData:(id)a0 bytes:(const void *)a1 length:(unsigned long long)a2;

- (void).cxx_destruct;
- (id)processingFormat;

@end
