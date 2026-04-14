@class NSArray;

@interface OADCustomDash : OADDash {
    NSArray *mStops;
}

+ (id)defaultProperties;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDefaults;
- (id)stops;
- (void)setStops:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)areStopsOverridden;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;

@end
