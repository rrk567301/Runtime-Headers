@class NSArray;

@interface OADCustomDash : OADDash {
    NSArray *mStops;
}

+ (id)defaultProperties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDefaults;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setStops:(id)a0;
- (id)stops;
- (BOOL)areStopsOverridden;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;

@end
