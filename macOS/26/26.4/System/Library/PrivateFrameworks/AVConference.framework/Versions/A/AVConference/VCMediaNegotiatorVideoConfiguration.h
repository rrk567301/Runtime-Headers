@class VCVideoRuleCollections, NSDictionary;

@interface VCMediaNegotiatorVideoConfiguration : VCMediaNegotiatorCommonConfiguration <NSCopying>

@property (retain, nonatomic) VCVideoRuleCollections *videoRuleCollections;
@property (retain, nonatomic) NSDictionary *videoFeatureStrings;
@property (retain, nonatomic) NSDictionary *videoFeatureStringsFixedPosition;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (BOOL)isEqualFeatureStrings:(id)a0;

@end
