@class NSString, NSURL;

@interface TRINamespaceRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int compatibilityVersion;
@property (readonly, nonatomic) NSURL *treatmentURL;

+ (id)recordWithName:(id)a0 compatibilityVersion:(unsigned int)a1 treatmentURL:(id)a2;

- (BOOL)isEqualToRecord:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0 compatibilityVersion:(unsigned int)a1 treatmentURL:(id)a2;
- (id)copyWithReplacementCompatibilityVersion:(unsigned int)a0;
- (id)init;
- (id)copyWithReplacementName:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)copyWithReplacementTreatmentURL:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
