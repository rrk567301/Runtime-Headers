@class CLRegion;

@interface INLocationRelevanceProvider : INRelevanceProvider

@property (readonly, copy) CLRegion *region;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRegion:(id)a0;

@end
