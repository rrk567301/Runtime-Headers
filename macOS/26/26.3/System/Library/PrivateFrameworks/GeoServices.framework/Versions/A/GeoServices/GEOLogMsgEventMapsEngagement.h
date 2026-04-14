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

@property (nonatomic) BOOL hasReportingChannel;
@property (nonatomic) int reportingChannel;
@property (readonly, nonatomic) BOOL hasSummaryDate;
@property (retain, nonatomic) NSString *summaryDate;
@property (nonatomic) BOOL hasAppType;
@property (nonatomic) int appType;
@property (readonly, nonatomic) BOOL hasAggregationSummaryDate;
@property (retain, nonatomic) NSString *aggregationSummaryDate;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)dictionaryRepresentation;
- (id)initWithData:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)description;
- (id)init;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)appTypeAsString:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (int)StringAsAppType:(id)a0;
- (int)StringAsReportingChannel:(id)a0;
- (id)reportingChannelAsString:(int)a0;

@end
