@class PHSearchSuggestion, PHSearchQueryQUToken;

@interface PHSearchQueryAnnotation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PHSearchSuggestion *suggestion;
@property (readonly, nonatomic) PHSearchQueryQUToken *QUToken;
@property (readonly, nonatomic) unsigned long long ambiguityType;

+ (id)_annotationFromQueryString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)_updateSpotlightAttributedQueryString:(id)a0 disambiguation:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
+ (id)_updateSpotlightAttributedQueryString:(id)a0 suggestion:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
+ (id)_updateSpotlightAttributedQueryString:(id)a0 withAnnotation:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
+ (id)annotatedQueryStringByFilteringToPHSearchQueryAttributes:(id)a0;
+ (id)annotatedQueryStringFromSpotlightAttributedQueryString:(id)a0 forSearchQuery:(id)a1 photosEntityStore:(id)a2 photoLibrary:(id)a3;
+ (BOOL)hasCSAttributedEntityTypePhotosMemoriesTripKeyInAttributedQueryString:(id)a0;
+ (id)searchQueryAnnotationsFromAttributedQueryString:(id)a0;
+ (id)selectedSuggestionsFromQueryString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)spotlightAttributedQueryStringFromAnnotatedQueryString:(id)a0;
+ (id)updateQueryString:(id)a0 withSelectedSuggestion:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 additionalAttributes:(id)a3;

- (id)jsonDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithQueryToken:(id)a0;
- (id)initWithSuggestion:(id)a0 queryToken:(id)a1;

@end
