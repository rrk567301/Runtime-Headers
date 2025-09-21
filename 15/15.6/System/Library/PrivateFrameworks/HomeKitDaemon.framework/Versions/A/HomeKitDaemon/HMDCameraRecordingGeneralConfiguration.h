@class NSNumber, NSArray, NSData;

@interface HMDCameraRecordingGeneralConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *prebufferLength;
@property (readonly, nonatomic) unsigned long long eventTriggerOptions;
@property (readonly, copy, nonatomic) NSArray *mediaContainerConfigurations;
@property (readonly, copy) NSData *tlvData;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)description:(id)a0 indent:(id)a1;
- (char)_parseFromTLVData;
- (id)initWithPrebufferLength:(id)a0 eventTriggerOptions:(unsigned long long)a1 mediaContainerConfigurations:(id)a2;

@end
