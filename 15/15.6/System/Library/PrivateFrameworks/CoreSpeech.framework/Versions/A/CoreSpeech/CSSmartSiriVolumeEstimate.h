@class NSString;

@interface CSSmartSiriVolumeEstimate : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *debugLogPath;
@property (readonly, nonatomic) float volumeEstimate;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVolumeEstimate:(float)a0 debugLogFile:(id)a1;

@end
