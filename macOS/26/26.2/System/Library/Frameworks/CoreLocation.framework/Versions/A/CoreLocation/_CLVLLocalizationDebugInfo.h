@class _CLVLLocalizationMaps488Details;

@interface _CLVLLocalizationDebugInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) _CLVLLocalizationMaps488Details *maps488Details;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)dealloc;
- (id)descriptionWithMemberIndent:(id)a0 endIndent:(id)a1;

@end
