@class NSString, NSData;

@interface AFSiriWorkoutVoiceFeedback : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *feedbackIdentifier;
@property (readonly, nonatomic) NSString *feedbackText;
@property (readonly, nonatomic) NSData *feedbackAudioData;
@property (readonly, nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } feedbackAudioASBD;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithVoiceFeedbackAudioData:(id)a0 asbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a1;
- (id)initWithVoiceFeedbackIdentifier:(id)a0 audioData:(id)a1 asbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a2;
- (id)initWithVoiceFeedbackIdentifier:(id)a0 text:(id)a1;
- (id)initWithVoiceFeedbackText:(id)a0;

@end
