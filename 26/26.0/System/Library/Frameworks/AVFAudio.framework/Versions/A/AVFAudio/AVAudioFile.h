@class NSURL, AVAudioFormat;

@interface AVAudioFile : NSObject {
    struct unique_ptr<AVAudioFileImpl, std::default_delete<AVAudioFileImpl>> { struct AVAudioFileImpl *__ptr_; } _impl;
}

@property (readonly, nonatomic) BOOL isOpen;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) AVAudioFormat *fileFormat;
@property (readonly, nonatomic) AVAudioFormat *processingFormat;
@property (readonly, nonatomic) long long length;
@property (nonatomic) long long framePosition;

- (BOOL)writeFromBuffer:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)init;
- (id)initForWriting:(id)a0 settings:(id)a1 error:(id *)a2;
- (id).cxx_construct;
- (void)close;
- (void).cxx_destruct;
- (id)initForReading:(id)a0 error:(id *)a1;
- (BOOL)readIntoBuffer:(id)a0 error:(id *)a1;
- (id)initForReading:(id)a0 commonFormat:(unsigned long long)a1 interleaved:(BOOL)a2 error:(id *)a3;
- (id)initForWriting:(id)a0 settings:(id)a1 commonFormat:(unsigned long long)a2 interleaved:(BOOL)a3 error:(id *)a4;
- (id)initSecondaryReader:(id)a0 format:(id)a1 error:(id *)a2;
- (BOOL)readIntoBuffer:(id)a0 frameCount:(unsigned int)a1 error:(id *)a2;
- (id)initForReadingFromExtAudioFile:(struct OpaqueExtAudioFile { } *)a0 commonFormat:(unsigned long long)a1 interleaved:(BOOL)a2 error:(id *)a3;
- (id)initForReadingFromExtAudioFile:(struct OpaqueExtAudioFile { } *)a0 error:(id *)a1;

@end
