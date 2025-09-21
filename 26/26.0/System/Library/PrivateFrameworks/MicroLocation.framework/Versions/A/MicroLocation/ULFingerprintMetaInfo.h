@class NSNumber, NSUUID;

@interface ULFingerprintMetaInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *numberOfWiFiAccessPoints;
@property (retain, nonatomic) NSNumber *numberOfBLESources;
@property (retain, nonatomic) NSNumber *numberOfUWBSources;
@property (retain, nonatomic) NSUUID *requestIdentifier;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithNumWiFiAccessPoints:(id)a0 numBLESources:(id)a1 numUWBSources:(id)a2 requestIdentifier:(id)a3;

@end
