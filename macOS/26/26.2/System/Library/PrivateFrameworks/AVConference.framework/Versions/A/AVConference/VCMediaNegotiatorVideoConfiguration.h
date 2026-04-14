@class VCVideoRuleCollections, NSDictionary;

@interface VCMediaNegotiatorVideoConfiguration : VCMediaNegotiatorCommonConfiguration <NSCopying>

@property (retain, nonatomic) VCVideoRuleCollections *videoRuleCollections;
@property (retain, nonatomic) NSDictionary *videoFeatureStrings;
@property (retain, nonatomic) NSDictionary *videoFeatureStringsFixedPosition;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqualFeatureStrings:(id)a0;

@end
