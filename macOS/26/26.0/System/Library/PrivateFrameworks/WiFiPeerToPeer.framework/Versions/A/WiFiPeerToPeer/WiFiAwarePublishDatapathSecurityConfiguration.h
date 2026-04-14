@class NSArray, WiFiAwarePairingConfiguration, NSData, NSString;
@protocol WiFiAwarePublisherPairingDelegate;

@interface WiFiAwarePublishDatapathSecurityConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *pmkList;
@property (readonly, nonatomic) NSArray *passphraseList;
@property (readonly, nonatomic) NSData *pmkID;
@property (copy, nonatomic) WiFiAwarePairingConfiguration *pairingConfiguration;
@property (weak, nonatomic) id<WiFiAwarePublisherPairingDelegate> pairingDelegate;
@property (readonly, nonatomic) NSString *pairingPINCode;
@property (readonly, nonatomic) NSString *pairingPassphrase;
@property (readonly, nonatomic) NSData *pairingQRCodeInformation;
@property (readonly, nonatomic) NSData *pairingNFCTag;
@property (copy, nonatomic) NSString *pinCode;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPairingConfiguration:(id)a0 usingPairingDelegate:(id)a1;
- (id)initWithPMKList:(id)a0 passphraseList:(id)a1;
- (id)initWithPMK:(id)a0 andPMKID:(id)a1;
- (id)initWithPairingConfiguration:(id)a0 usingPairingDelegate:(id)a1 usingPairingNFCTag:(id)a2;
- (id)initWithPairingConfiguration:(id)a0 usingPairingDelegate:(id)a1 usingPairingPINCode:(id)a2;
- (id)initWithPairingConfiguration:(id)a0 usingPairingDelegate:(id)a1 usingPairingPassphrase:(id)a2;
- (id)initWithPairingConfiguration:(id)a0 usingPairingDelegate:(id)a1 usingPairingQRCodeInformation:(id)a2;

@end
