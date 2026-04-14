@class NSString, NSDate;

@interface PPUniversalSearchSpotlightFeedback : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) unsigned int offeredCSSICount;
@property (readonly, nonatomic) unsigned int engagedCSSICount;
@property (readonly, nonatomic) NSString *clientBundleId;
@property (readonly, nonatomic) NSDate *timestamp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithOfferedCSSICount:(unsigned int)a0 engagedCSSICount:(unsigned int)a1;
- (id)initWithOfferedCSSICount:(unsigned int)a0 engagedCSSICount:(unsigned int)a1 timestamp:(id)a2 clientIdentifier:(id)a3 clientBundleId:(id)a4;
- (BOOL)isEqualToPPUniversalSearchSpotlightFeedback:(id)a0;

@end
