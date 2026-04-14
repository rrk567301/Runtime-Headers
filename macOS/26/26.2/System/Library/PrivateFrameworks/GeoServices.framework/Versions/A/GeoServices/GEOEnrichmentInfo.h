@class NSString, GEOPDEnrichmentInfo;

@interface GEOEnrichmentInfo : NSObject <NSCopying> {
    GEOPDEnrichmentInfo *_enrichmentInfo;
}

@property (readonly, nonatomic) NSString *sourceName;
@property (readonly, nonatomic) NSString *sourceId;
@property (readonly, nonatomic) NSString *showcaseId;
@property (readonly, nonatomic) NSString *showcaseSharingTitle;
@property (readonly, nonatomic) NSString *showcaseSharingSubtitle;
@property (readonly, nonatomic) NSString *showcaseSharingImageUrl;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithEnrichmentInfo:(id)a0;
- (id)pdEnrichmentInfo;

@end
