@class NSMapTable, GEOComposedStringSubstitutionCandidate;

@interface GEOComposedStringArgument_Substitution : GEOComposedStringArgument {
    NSMapTable *_substitutionCandidates;
    GEOComposedStringSubstitutionCandidate *_substituteToUse;
}

@property (readonly, nonatomic) unsigned long long waypointIndex;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_initWithGeoFormatArgument:(id)a0;
- (id)_stringReplacementWithOptions:(id)a0;
- (void)setSubstitutionForWaypointCategory:(int)a0;
- (void)setSubstitutionForWaypointCategory:(int)a0 handler:(id /* block */)a1;
- (id)substitutionFormat;

@end
