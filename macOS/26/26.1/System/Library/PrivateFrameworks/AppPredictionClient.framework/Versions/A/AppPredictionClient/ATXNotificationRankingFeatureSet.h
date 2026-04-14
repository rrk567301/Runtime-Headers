@class NSDictionary;

@interface ATXNotificationRankingFeatureSet : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *features;
@property (readonly, nonatomic) NSDictionary *metadata;

- (double)score;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFeatures:(id)a0 metadata:(id)a1;

@end
