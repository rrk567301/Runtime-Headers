@class GEOPDAutocompleteSessionData, PBDataReader, GEOPDParsecQueryRankingFeatures, GEOPDPlaceSummaryLayoutMetadata, NSMutableArray, PBUnknownFields;

@interface GEOPDAutocompleteResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAutocompleteSessionData *_autocompleteSessionData;
    NSMutableArray *_clientRankingFeatureMetadatas;
    GEOPDParsecQueryRankingFeatures *_parsecQueryRankingFeatures;
    GEOPDPlaceSummaryLayoutMetadata *_placeSummaryLayoutMetadata;
    NSMutableArray *_sections;
    NSMutableArray *_sortPriorityMappings;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _clientResolvedTypeSetupPrompt;
    int _highlightType;
    unsigned int _retainSearchTime;
    char _enableRap;
    char _enableStructuredRapAffordance;
    char _isNoResultFromNegativeCache;
    char _isTopSectionTypeQuery;
    char _shouldDifferentiateClientAndServerResults;
    char _shouldDisplayNoResults;
    char _shouldEnableGrayscaleHighlighting;
    char _shouldUseDistanceFeatureServerResults;
    struct { unsigned char has_clientResolvedTypeSetupPrompt : 1; unsigned char has_highlightType : 1; unsigned char has_retainSearchTime : 1; unsigned char has_enableRap : 1; unsigned char has_enableStructuredRapAffordance : 1; unsigned char has_isNoResultFromNegativeCache : 1; unsigned char has_isTopSectionTypeQuery : 1; unsigned char has_shouldDifferentiateClientAndServerResults : 1; unsigned char has_shouldDisplayNoResults : 1; unsigned char has_shouldEnableGrayscaleHighlighting : 1; unsigned char has_shouldUseDistanceFeatureServerResults : 1; unsigned char read_unknownFields : 1; unsigned char read_autocompleteSessionData : 1; unsigned char read_clientRankingFeatureMetadatas : 1; unsigned char read_parsecQueryRankingFeatures : 1; unsigned char read_placeSummaryLayoutMetadata : 1; unsigned char read_sections : 1; unsigned char read_sortPriorityMappings : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
