@class NSString;

@interface CWRecommendationItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSString *title;
@property (copy) NSString *desc;
@property (copy) NSString *recommendation;
@property (copy) NSString *externalLink;
@property unsigned long long issueType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToRecommendationItem:(id)a0;

@end
