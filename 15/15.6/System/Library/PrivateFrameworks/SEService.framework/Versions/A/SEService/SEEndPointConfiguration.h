@interface SEEndPointConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property char enabledOnWire;
@property char enabledOnContactless;
@property char standardFlowAllowedOnWire;
@property char standardFlowAllowedOnContactless;
@property char fastFlowAllowedOnWire;
@property char fastFlowAllowedOnContactless;
@property char exchangeAllowedOnWire;
@property char exchangeAllowedInFastFlow;
@property char authorizeEndPointAllowed;
@property char authorizeEndPointWithAuthorizeAllowed;
@property char signAllowed;
@property char exportEraseConfidentialMailBox;
@property char serverIssuedKey;
@property char fleetVehicle;
@property char compressedKeysAllowed;
@property char confidentialDataAllowed;
@property char nfcExpressOnlyInLPM;
@property char terminationNotPersisted;
@property unsigned short lengthConfidentialMailBox;
@property unsigned short offsetConfidentialMailBox;
@property unsigned short lengthPrivateMailBox;
@property unsigned short offsetPrivateMailBox;
@property unsigned short auth1SignallingBitmap;

+ (id)configurationWithOpt1:(unsigned char)a0 opt2:(unsigned char)a1;
+ (id)homeDefaults;
+ (id)hydraDefaults;
+ (id)lyonHomeDefaults;
+ (id)lyonHydraDefaults;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned char)opt1;
- (unsigned char)opt2;
- (unsigned char)optA;

@end
