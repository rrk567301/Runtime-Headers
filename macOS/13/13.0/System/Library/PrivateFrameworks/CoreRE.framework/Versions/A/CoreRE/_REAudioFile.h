@class _REAudioFileAssetReader;

@interface _REAudioFile : AVAudioFile

@property (retain, nonatomic) _REAudioFileAssetReader *reader;

+ (id)audioFileWithStream:(struct SeekableInputStream { void /* function */ **x0; } *)a0 ownsStream:(BOOL)a1;

- (void).cxx_destruct;
- (id)processingFormat;
- (id)getBackingData;

@end
