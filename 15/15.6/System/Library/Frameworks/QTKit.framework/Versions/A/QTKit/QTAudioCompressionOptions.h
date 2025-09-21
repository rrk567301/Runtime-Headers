@class NSData;

@interface QTAudioCompressionOptions : QTCompressionOptions {
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _asbd;
    NSData *_channelLayout;
    NSData *_magicCookie;
}

+ (id)compressionOptionsWithDescription:(id)a0;

- (id)channelLayout;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })audioStreamBasicDescription;
- (id)initWithAudioStreamBasicDescription:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0 channelLayout:(id)a1 magicCookie:(id)a2;
- (id)magicCookie;

@end
