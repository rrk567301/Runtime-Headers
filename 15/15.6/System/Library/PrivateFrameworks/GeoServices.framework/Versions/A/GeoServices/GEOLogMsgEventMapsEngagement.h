@class NSString, PBDataReader, PBUnknownFields;

@interface GEOLogMsgEventMapsEngagement : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_aggregationSummaryDate;
    NSString *_summaryDate;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _appType;
    int _reportingChannel;
    struct { unsigned char has_appType : 1; unsigned char has_reportingChannel : 1; unsigned char read_unknownFields : 1; unsigned char read_aggregationSummaryDate : 1; unsigned char read_summaryDate : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasReportingChannel;
@property (nonatomic) int reportingChannel;
@property (readonly, nonatomic) char hasSummaryDate;
@property (retain, nonatomic) NSString *summaryDate;
@property (nonatomic) char hasAppType;
@property (nonatomic) int appType;
@property (readonly, nonatomic) char hasAggregationSummaryDate;
@property (retain, nonatomic) NSString *aggregationSummaryDate;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

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
- (int)StringAsAppType:(id)a0;
- (int)StringAsReportingChannel:(id)a0;
- (id)appTypeAsString:(int)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)reportingChannelAsString:(int)a0;

@end
