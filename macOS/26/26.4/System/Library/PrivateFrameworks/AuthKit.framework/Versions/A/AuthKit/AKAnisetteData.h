@class NSString, AKBAAAttestationData;

@interface AKAnisetteData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *machineID;
@property (copy, nonatomic) NSString *oneTimePassword;
@property (nonatomic) unsigned long long routingInfo;
@property (retain, nonatomic) AKBAAAttestationData *baaAttestationData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
