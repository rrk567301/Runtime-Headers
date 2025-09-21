@class GEOPBTransitArtwork, PBDataReader, GEOFormattedString, NSMutableArray, PBUnknownFields;

@interface GEOAdvisoryNotice : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _incidentIndexs;
    NSMutableArray *_advisoryCards;
    NSMutableArray *_advisoryItems;
    NSMutableArray *_analyticsMessageValues;
    GEOFormattedString *_detailCardTitle;
    GEOPBTransitArtwork *_noticeArtwork;
    GEOFormattedString *_noticeText;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _advisoryType;
    char _shouldAlwaysShowAdvisoryCard;
    struct { unsigned char has_advisoryType : 1; unsigned char has_shouldAlwaysShowAdvisoryCard : 1; unsigned char read_unknownFields : 1; unsigned char read_incidentIndexs : 1; unsigned char read_advisoryCards : 1; unsigned char read_advisoryItems : 1; unsigned char read_analyticsMessageValues : 1; unsigned char read_detailCardTitle : 1; unsigned char read_noticeArtwork : 1; unsigned char read_noticeText : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasNoticeText;
@property (retain, nonatomic) GEOFormattedString *noticeText;
@property (readonly, nonatomic) unsigned long long incidentIndexsCount;
@property (readonly, nonatomic) unsigned int *incidentIndexs;
@property (retain, nonatomic) NSMutableArray *advisoryCards;
@property (retain, nonatomic) NSMutableArray *advisoryItems;
@property (nonatomic) char hasShouldAlwaysShowAdvisoryCard;
@property (nonatomic) char shouldAlwaysShowAdvisoryCard;
@property (readonly, nonatomic) char hasDetailCardTitle;
@property (retain, nonatomic) GEOFormattedString *detailCardTitle;
@property (readonly, nonatomic) char hasNoticeArtwork;
@property (retain, nonatomic) GEOPBTransitArtwork *noticeArtwork;
@property (retain, nonatomic) NSMutableArray *analyticsMessageValues;
@property (nonatomic) char hasAdvisoryType;
@property (nonatomic) int advisoryType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)advisoryCardType;
+ (Class)advisoryItemType;
+ (Class)analyticsMessageValueType;
+ (char)isValid:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsAdvisoryType:(id)a0;
- (void)addAdvisoryCard:(id)a0;
- (void)addAdvisoryItem:(id)a0;
- (void)addAnalyticsMessageValue:(id)a0;
- (void)addIncidentIndex:(unsigned int)a0;
- (id)advisoryCardAtIndex:(unsigned long long)a0;
- (unsigned long long)advisoryCardsCount;
- (id)advisoryItemAtIndex:(unsigned long long)a0;
- (unsigned long long)advisoryItemsCount;
- (id)advisoryTypeAsString:(int)a0;
- (id)analyticsMessageValueAtIndex:(unsigned long long)a0;
- (unsigned long long)analyticsMessageValuesCount;
- (void)clearAdvisoryCards;
- (void)clearAdvisoryItems;
- (void)clearAnalyticsMessageValues;
- (void)clearIncidentIndexs;
- (void)clearUnknownFields:(char)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (unsigned int)incidentIndexAtIndex:(unsigned long long)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (void)setIncidentIndexs:(unsigned int *)a0 count:(unsigned long long)a1;

@end
