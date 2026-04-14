@class NSString, HAPPairingIdentity, NSData, NSNumber;

@interface HAPAccessoryPairingRequest : HMFObject <NSCopying>

@property (copy) HAPPairingIdentity *pairingIdentity;
@property BOOL requiresUserConsent;
@property (copy) NSData *ownershipToken;
@property (copy) NSString *ssid;
@property (copy) NSData *psk;
@property (copy) NSString *isoCountryCode;
@property (copy) NSNumber *chipFabricIndex;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;

@end
