@class NSString;

@interface LBAudioStreamConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long audioCaptureStartHostTime;
@property (nonatomic) long long outputAudioFormat;
@property (nonatomic) long long audioRecordType;
@property (copy, nonatomic) NSString *audioRecordDeviceId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAudioCaptureStartHostTime:(unsigned long long)a0 outputAudioFormat:(long long)a1 audioRecordType:(long long)a2 audioRecordDeviceId:(id)a3;

@end
