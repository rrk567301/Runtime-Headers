@interface GEORPClientCapabilities : PBCodable <NSCopying> {
    int _transitMarketSupport;
    char _hasConstrainedProblemStatusSize;
    char _hasFeatureHandle;
    char _hasNoOptInRequest;
    char _hasSupportForIdsBasedNotifications;
    struct { unsigned char has_transitMarketSupport : 1; unsigned char has_hasConstrainedProblemStatusSize : 1; unsigned char has_hasFeatureHandle : 1; unsigned char has_hasNoOptInRequest : 1; unsigned char has_hasSupportForIdsBasedNotifications : 1; } _flags;
}

@property (nonatomic) char hasHasConstrainedProblemStatusSize;
@property (nonatomic) char hasConstrainedProblemStatusSize;
@property (nonatomic) char hasHasNoOptInRequest;
@property (nonatomic) char hasNoOptInRequest;
@property (nonatomic) char hasHasFeatureHandle;
@property (nonatomic) char hasFeatureHandle;
@property (nonatomic) char hasHasSupportForIdsBasedNotifications;
@property (nonatomic) char hasSupportForIdsBasedNotifications;
@property (nonatomic) char hasTransitMarketSupport;
@property (nonatomic) int transitMarketSupport;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsTransitMarketSupport:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)transitMarketSupportAsString:(int)a0;

@end
