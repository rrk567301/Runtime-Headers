@protocol GEOVenueIdentifier;

@interface GEOVenueSearchFilter : NSObject <GEOSearchFilter>

@property (readonly, nonatomic) id<GEOVenueIdentifier> identifier;

- (BOOL)applyToSearchParameters:(id)a0 error:(id *)a1;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
