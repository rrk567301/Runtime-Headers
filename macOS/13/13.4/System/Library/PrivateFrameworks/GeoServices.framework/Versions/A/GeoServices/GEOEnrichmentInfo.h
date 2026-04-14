@class NSString, GEOPDEnrichmentInfo;

@interface GEOEnrichmentInfo : NSObject {
    GEOPDEnrichmentInfo *_enrichmentInfo;
}

@property (readonly, nonatomic) NSString *sourceName;
@property (readonly, nonatomic) NSString *sourceId;
@property (readonly, nonatomic) NSString *showcaseId;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEnrichmentInfo:(id)a0;
- (id)pdEnrichmentInfo;

@end
