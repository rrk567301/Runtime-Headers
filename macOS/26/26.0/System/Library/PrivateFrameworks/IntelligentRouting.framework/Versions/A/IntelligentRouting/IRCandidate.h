@class NSString, NSSet;

@interface IRCandidate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *candidateIdentifier;
@property (retain, nonatomic) NSString *avOutpuDeviceIdentifier;
@property (retain, nonatomic) NSString *rapportIdentifier;
@property (retain, nonatomic) NSString *idsIdentifier;
@property (readonly, nonatomic) NSSet *nodes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCandidateIdentifier:(id)a0;
- (void)updateNodes:(id)a0;

@end
