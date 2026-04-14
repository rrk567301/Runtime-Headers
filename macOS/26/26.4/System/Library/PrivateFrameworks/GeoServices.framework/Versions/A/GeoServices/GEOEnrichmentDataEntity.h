@class NSString, NSArray, NSData, GEOEnrichmentInfo, GEOPDEnrichmentDataEntity;

@interface GEOEnrichmentDataEntity : NSObject {
    GEOPDEnrichmentDataEntity *_enrichmentDataEntity;
}

@property (readonly, nonatomic) GEOEnrichmentInfo *enrichmentInfo;
@property (readonly, nonatomic) NSString *enrichmentHtml;
@property (readonly, nonatomic) NSData *enrichmentMetadata;
@property (readonly, nonatomic) NSArray *appAdamIds;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithEnrichmentDataEntity:(id)a0;

@end
