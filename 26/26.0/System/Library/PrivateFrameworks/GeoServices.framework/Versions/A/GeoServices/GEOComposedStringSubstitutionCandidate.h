@class GEOComposedString, GEOComposedStringOptions;

@interface GEOComposedStringSubstitutionCandidate : NSObject <NSCopying, NSSecureCoding> {
    GEOComposedStringOptions *_optionsToUse;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int waypointCategory;
@property (readonly, nonatomic) GEOComposedString *composedString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
