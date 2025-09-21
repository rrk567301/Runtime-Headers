@class NSUUID;

@interface REMResolutionToken : NSObject <NSSecureCoding, NSCopying, REMNonceGenerating>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long counter;
@property (nonatomic) double modificationTime;
@property (retain, nonatomic) NSUUID *replicaID;

+ (id)resolutionTokenWithJSONObject:(id)a0;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)init;
- (id)description;
- (void)update;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (double)generateNonce;
- (id)initWithCounter:(long long)a0 modificationTime:(double)a1 replicaID:(id)a2;
- (id)initWithDefaultValue;

@end
