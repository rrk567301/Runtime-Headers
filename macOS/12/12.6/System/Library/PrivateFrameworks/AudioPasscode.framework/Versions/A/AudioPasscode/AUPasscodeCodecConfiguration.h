@class NSString;

@interface AUPasscodeCodecConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long payloadLengthBytes;
@property (nonatomic) long long sampleRate;
@property (nonatomic) long long numChannels;
@property (copy, nonatomic) NSString *algorithmName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAlgorithmName:(id)a0;
- (id)commandLineOptions;
- (id)initWithCommandLineArgs:(id)a0;
- (void)__setDefaultValues;

@end
