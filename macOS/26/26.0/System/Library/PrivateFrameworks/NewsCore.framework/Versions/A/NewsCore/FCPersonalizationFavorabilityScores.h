@class NSDictionary, NTPBPublisherFavorabilityScores;

@interface FCPersonalizationFavorabilityScores : NSObject <NSSecureCoding> {
    NTPBPublisherFavorabilityScores *_pbFavorabilityScores;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *tagIDToScores;
@property (readonly, nonatomic) unsigned long long count;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)scoreForTagID:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPBFavorabilityScores:(id)a0;

@end
