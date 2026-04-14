@class NSString;

@interface GEOLogMsgEventMapsEngagement : PBCodable <NSCopying> {
    NSString *_summaryDate;
    int _reportingChannel;
    struct { unsigned char has_reportingChannel : 1; } _flags;
}

@property (nonatomic) BOOL hasReportingChannel;
@property (nonatomic) int reportingChannel;
@property (readonly, nonatomic) BOOL hasSummaryDate;
@property (retain, nonatomic) NSString *summaryDate;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsReportingChannel:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)reportingChannelAsString:(int)a0;

@end
