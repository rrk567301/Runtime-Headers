@class NSArray, NSString, NSData;

@interface STSCHWiFiAwareSecurityInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *cipherSuite;
@property (retain, nonatomic) NSArray *dhInfo;
@property (retain, nonatomic) NSString *passphrase;
@property (retain, nonatomic) NSData *datapathPmk;
@property (retain, nonatomic) NSData *datapathPmkID;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)asData;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCipherSuites:(id)a0 dhInfo:(id)a1 passphrase:(id)a2;
- (id)initWithPMK:(id)a0 pmkID:(id)a1;

@end
