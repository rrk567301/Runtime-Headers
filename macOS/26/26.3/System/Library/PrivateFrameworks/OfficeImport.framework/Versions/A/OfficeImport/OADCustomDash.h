@class NSArray;

@interface OADCustomDash : OADDash {
    NSArray *mStops;
}

+ (id)defaultProperties;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDefaults;
- (void)setStops:(id)a0;
- (id)stops;
- (BOOL)areStopsOverridden;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;

@end
