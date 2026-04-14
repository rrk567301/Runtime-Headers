@class NSString;

@interface CWRecommendationItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *title;
@property (copy) NSString *desc;
@property (copy) NSString *recommendation;
@property (copy) NSString *externalLink;
@property unsigned long long issueType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)isEqualToRecommendationItem:(id)a0;

@end
