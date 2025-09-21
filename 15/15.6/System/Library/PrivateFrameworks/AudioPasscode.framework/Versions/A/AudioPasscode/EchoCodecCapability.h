@class NSArray;

@interface EchoCodecCapability : AUPasscodeCodecCapability <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } frameSizeRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } numFrameRepeatRange;
@property (readonly, nonatomic) NSArray *algorithmVersionNumbers;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } hpfCutOffFreqRange;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToEchoCodecCapability:(id)a0;

@end
