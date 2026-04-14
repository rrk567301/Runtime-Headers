@class NSData, NSNumber, NSDictionary;

@interface PPSpotlightAttributes : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double staticScore;
@property (retain, nonatomic) NSData *featureVector;
@property (retain, nonatomic) NSNumber *featureVectorVersion;
@property (retain, nonatomic) NSDictionary *namedEntityScores;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithStaticScore:(double)a0 featureVector:(id)a1 featureVectorVersion:(id)a2 namedEntityScores:(id)a3;
- (BOOL)isEqualToSpotlightAttributes:(id)a0;

@end
