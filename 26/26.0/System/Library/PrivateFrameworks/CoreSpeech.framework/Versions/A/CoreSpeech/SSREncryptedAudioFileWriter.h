@class NSURL, NSMutableData;

@interface SSREncryptedAudioFileWriter : NSObject

@property (retain, nonatomic) NSURL *fileUrl;
@property (retain, nonatomic) NSMutableData *writeBuffer;
@property (nonatomic) unsigned long long sampleByteDepth;

- (BOOL)endAudio;
- (void).cxx_destruct;
- (BOOL)addSamples:(const void *)a0 numSamples:(unsigned long long)a1;
- (id)initWithFileUrl:(id)a0 sampleByteDepth:(unsigned long long)a1;

@end
