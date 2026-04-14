@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, CSAudioFileReaderDelegate;

@interface CSAudioFileReader : NSObject {
    struct OpaqueExtAudioFile { } *_fFile;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_audioFeedTimer;
    double _bufferDuration;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _outASBD;
}

@property (weak, nonatomic) id<CSAudioFileReaderDelegate> delegate;

- (void)dealloc;
- (id)initWithURL:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (void)stopRecording;
- (BOOL)setRecordBufferDuration:(double)a0;
- (BOOL)prepareRecording:(id)a0;
- (BOOL)startRecording;
- (void)_readAudioBufferAndFeed;
- (id)readSamplesFromChannelIdx:(unsigned int)a0;

@end
