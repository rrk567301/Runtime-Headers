@class AWDLibnetcoreTCPStatsReport, AWDLibnetcoreNetworkdStatsReport, AWDLibnetcoreMPTCPStatsReport, NSMutableArray, AWDLibnetcoreMbufStatsReport, AWDLibnetcoreTCPTFOStatsReport, AWDLibnetcoreTCPECNStatsReport, AWDNWAPIUsage;

@interface AWDLibnetcoreStatsReport : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char reportReason : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasReportReason;
@property (nonatomic) unsigned int reportReason;
@property (readonly, nonatomic) char hasMbufStatisticsReport;
@property (retain, nonatomic) AWDLibnetcoreMbufStatsReport *mbufStatisticsReport;
@property (readonly, nonatomic) char hasTcpStatisticsReport;
@property (retain, nonatomic) AWDLibnetcoreTCPStatsReport *tcpStatisticsReport;
@property (readonly, nonatomic) char hasTcpECNStatisticsReport;
@property (retain, nonatomic) AWDLibnetcoreTCPECNStatsReport *tcpECNStatisticsReport;
@property (readonly, nonatomic) char hasTcpTFOStatisticsReport;
@property (retain, nonatomic) AWDLibnetcoreTCPTFOStatsReport *tcpTFOStatisticsReport;
@property (readonly, nonatomic) char hasNetworkdStatisticsReport;
@property (retain, nonatomic) AWDLibnetcoreNetworkdStatsReport *networkdStatisticsReport;
@property (retain, nonatomic) NSMutableArray *tcpECNInterfaceReports;
@property (readonly, nonatomic) char hasNwAPIUsageReport;
@property (retain, nonatomic) AWDNWAPIUsage *nwAPIUsageReport;
@property (readonly, nonatomic) char hasMptcpStatisticsReport;
@property (retain, nonatomic) AWDLibnetcoreMPTCPStatsReport *mptcpStatisticsReport;

+ (Class)tcpECNInterfaceReportType;

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
- (void)addTcpECNInterfaceReport:(id)a0;
- (void)clearTcpECNInterfaceReports;
- (id)tcpECNInterfaceReportAtIndex:(unsigned long long)a0;
- (unsigned long long)tcpECNInterfaceReportsCount;

@end
