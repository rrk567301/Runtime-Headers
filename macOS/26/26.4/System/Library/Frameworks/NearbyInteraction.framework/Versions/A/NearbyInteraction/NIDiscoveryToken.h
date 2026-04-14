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

+ (id)generateFindingTokenWithIRK:(id)a0;
+ (id)generateFindingTokenWithIRK:(id)a0 forExternalUse:(BOOL)a1;
+ (id)generateTokenWithUUID:(id)a0;
+ (id)_identifyingSequenceFromBytes:(id)a0;
+ (id)generateFindingTokenWithServiceID:(id)a0 deviceName:(id)a1;
+ (id)serialize:(id)a0;
+ (id)generateDiscoveryTokenFromBeaconIdentifier:(id)a0;
+ (id)deserialize:(id)a0;

- (id)initWithDeviceAddress:(unsigned short)a0;
- (id)descriptionInternal;
- (id)initWithBytes:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)getIRK;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)getSessionIdentifier;
- (id)description;
- (id)shortDeviceAddress;
- (id)initWithCoder:(id)a0;
- (id)objectInRawTokenOPACKDictForKey:(id)a0;

@end
