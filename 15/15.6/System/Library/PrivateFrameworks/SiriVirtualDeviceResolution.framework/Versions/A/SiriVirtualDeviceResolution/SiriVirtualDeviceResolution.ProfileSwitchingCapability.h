@class NSString;

@interface SiriVirtualDeviceResolution.ProfileSwitchingCapability : NSObject <SiriVirtualDeviceResolution.CapabilityMatching, NSSecureCoding> {
    void /* unknown type, empty encoding */ primitivesMap;
    void /* unknown type, empty encoding */ key;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

@property (nonatomic, copy) NSString *key;
@property (nonatomic, readonly) long long supportsProfileSwitching;

+ (id)capabilityDescriptionMatchingSupportStatus:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStatus:(long long)a0;
- (char)matchesWithDescriptions:(id)a0;

@end
