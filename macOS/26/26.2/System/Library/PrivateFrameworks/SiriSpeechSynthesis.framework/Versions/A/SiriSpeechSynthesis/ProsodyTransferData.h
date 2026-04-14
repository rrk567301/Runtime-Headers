@class NSData, NSString, UserVoiceProfile;

@interface ProsodyTransferData : NSObject

@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (copy, nonatomic) NSData *waveData;
@property (retain, nonatomic) UserVoiceProfile *userVoiceProfile;
@property (copy, nonatomic) NSString *userVoiceProfileUrl;

- (void).cxx_destruct;
- (id)init;

@end
