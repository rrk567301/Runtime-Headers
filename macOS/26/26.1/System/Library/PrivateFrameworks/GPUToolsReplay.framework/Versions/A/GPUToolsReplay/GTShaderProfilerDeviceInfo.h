@class NSString;

@interface GTShaderProfilerDeviceInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *build;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *metalVersion;
@property (nonatomic) int platform;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
