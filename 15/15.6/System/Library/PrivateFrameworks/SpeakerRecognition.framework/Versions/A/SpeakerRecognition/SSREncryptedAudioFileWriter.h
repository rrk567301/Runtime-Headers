@class NSURL, NSMutableData;

@interface SSREncryptedAudioFileWriter : NSObject

@property (retain, nonatomic) NSURL *fileUrl;
@property (retain, nonatomic) NSMutableData *writeBuffer;
@property (nonatomic) unsigned long long sampleByteDepth;

- (void).cxx_destruct;
- (char)addSamples:(const void *)a0 numSamples:(unsigned long long)a1;
- (char)endAudio;
- (id)initWithFileUrl:(id)a0 sampleByteDepth:(unsigned long long)a1;

@end
