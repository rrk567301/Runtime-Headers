@class NSData, NSString, NSNumber;
@protocol NIDeviceCapability;

@interface NIDiscoveryToken : NSObject <NSCopying, NSSecureCoding> {
    NSNumber *_shortDeviceAddress;
    NSData *_identifyingSequence;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSData *rawToken;
@property (readonly) NSString *rawTokenAsString;
@property (readonly) long long tokenVariant;
@property (readonly, copy, nonatomic) id<NIDeviceCapability> deviceCapabilities;

+ (id)generateTokenWithUUID:(id)a0;
+ (id)generateFindingTokenWithIRK:(id)a0;
+ (id)_identifyingSequenceFromBytes:(id)a0;
+ (id)deserialize:(id)a0;
+ (id)generateDiscoveryTokenFromBeaconIdentifier:(id)a0;
+ (id)serialize:(id)a0;
+ (id)generateFindingTokenWithIRK:(id)a0 forExternalUse:(BOOL)a1;

- (id)getIRK;
- (id)initWithCoder:(id)a0;
- (id)objectInRawTokenOPACKDictForKey:(id)a0;
- (id)descriptionInternal;
- (id)getSessionIdentifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBytes:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)shortDeviceAddress;
- (id)initWithDeviceAddress:(unsigned short)a0;

@end
