@class NSString;

@interface CMContinuityCapturePublishedAudioDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *deviceName;
@property (nonatomic) BOOL voiceAmplificationModeSupported;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDeviceName:(id)a0 voiceAmplificationModeSupported:(BOOL)a1;

@end
