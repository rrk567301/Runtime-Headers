@class NSArray, NSData, GEOPDEnrichmentData;

@interface GEOEnrichmentData : NSObject <NSCopying> {
    GEOPDEnrichmentData *_enrichmentData;
}

@property (readonly, nonatomic) NSArray *enrichmentEntities;
@property (readonly, nonatomic) NSData *placecardEnrichmentMetadata;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithEnrichmentData:(id)a0;

@end
