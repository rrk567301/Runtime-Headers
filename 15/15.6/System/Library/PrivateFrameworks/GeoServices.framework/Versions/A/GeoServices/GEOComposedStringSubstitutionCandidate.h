@class GEOComposedString, GEOComposedStringOptions;

@interface GEOComposedStringSubstitutionCandidate : NSObject <NSCopying, NSSecureCoding> {
    GEOComposedStringOptions *_optionsToUse;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) int waypointCategory;
@property (readonly, nonatomic) GEOComposedString *composedString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
