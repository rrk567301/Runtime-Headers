@class NSUUID, KTVerifierResult, NSData, NSDate, NSDictionary;

@interface IDSQueryKeyTransparencyContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *ticket;
@property (readonly, nonatomic) KTVerifierResult *verifierResult;
@property (readonly, nonatomic) NSData *accountKey;
@property (readonly, nonatomic) NSDate *queryResponseTime;
@property (readonly, nonatomic) unsigned long long ktOptIn;
@property (readonly, nonatomic) NSDictionary *ktOptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithVerifierResult:(id)a0 ticket:(id)a1 accountKey:(id)a2 queryResponseTime:(id)a3 ktOptIn:(unsigned long long)a4 ktOptions:(id)a5;
- (BOOL)isEqualToQueryKeyTransparencyContext:(id)a0;

@end
