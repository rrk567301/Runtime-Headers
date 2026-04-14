@class _CLVLLocalizationMaps488Details;

@interface _CLVLLocalizationDebugInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) _CLVLLocalizationMaps488Details *maps488Details;

- (id)description;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionWithMemberIndent:(id)a0 endIndent:(id)a1;

@end
