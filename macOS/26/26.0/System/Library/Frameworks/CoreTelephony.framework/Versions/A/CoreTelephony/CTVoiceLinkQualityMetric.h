@class NSNumber;

@interface CTVoiceLinkQualityMetric : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *linkQuality;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithLinkQuality:(id)a0;
- (void).cxx_destruct;

@end
