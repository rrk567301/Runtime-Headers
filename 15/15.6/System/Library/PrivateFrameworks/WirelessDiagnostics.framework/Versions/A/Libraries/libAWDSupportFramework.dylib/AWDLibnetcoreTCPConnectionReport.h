@class NSString, AWDLibnetcoreConnectionStatisticsReport, AWDLibnetcoreCellularFallbackReport, NSMutableArray;

@interface AWDLibnetcoreTCPConnectionReport : PBCodable <NSCopying> {
    struct { unsigned char iPAddressAttemptCount : 1; unsigned char timestamp : 1; unsigned char reportReason : 1; unsigned char delegated : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasClientIdentifier;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (nonatomic) char hasDelegated;
@property (nonatomic) char delegated;
@property (nonatomic) char hasReportReason;
@property (nonatomic) int reportReason;
@property (readonly, nonatomic) char hasConnectionStatisticsReport;
@property (retain, nonatomic) AWDLibnetcoreConnectionStatisticsReport *connectionStatisticsReport;
@property (readonly, nonatomic) char hasCellularFallbackReport;
@property (retain, nonatomic) AWDLibnetcoreCellularFallbackReport *cellularFallbackReport;
@property (nonatomic) char hasIPAddressAttemptCount;
@property (nonatomic) unsigned long long iPAddressAttemptCount;
@property (retain, nonatomic) NSMutableArray *connectionAttemptStatisticsReports;
@property (readonly, nonatomic) char hasSourceAppIdentifier;
@property (retain, nonatomic) NSString *sourceAppIdentifier;

+ (Class)connectionAttemptStatisticsReportsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsReportReason:(id)a0;
- (void)addConnectionAttemptStatisticsReports:(id)a0;
- (void)clearConnectionAttemptStatisticsReports;
- (id)connectionAttemptStatisticsReportsAtIndex:(unsigned long long)a0;
- (unsigned long long)connectionAttemptStatisticsReportsCount;
- (id)reportReasonAsString:(int)a0;

@end
