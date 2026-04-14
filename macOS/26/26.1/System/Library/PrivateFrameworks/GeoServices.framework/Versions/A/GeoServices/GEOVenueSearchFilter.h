@protocol GEOVenueIdentifier;

@interface GEOVenueSearchFilter : NSObject <GEOSearchFilter>

@property (readonly, nonatomic) id<GEOVenueIdentifier> identifier;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)applyToSearchParameters:(id)a0 error:(id *)a1;
- (id)init;

@end
