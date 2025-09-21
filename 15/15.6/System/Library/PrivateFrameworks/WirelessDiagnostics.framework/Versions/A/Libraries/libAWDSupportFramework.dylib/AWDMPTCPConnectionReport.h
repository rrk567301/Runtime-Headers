@class NSString, NSMutableArray;

@interface AWDMPTCPConnectionReport : PBCodable <NSCopying> {
    struct { unsigned char establishmentTime : 1; unsigned char postConnectSessionLifetime : 1; unsigned char timestamp : 1; unsigned char establishmentFailureError : 1; unsigned char establishmentSynRetransmits : 1; unsigned char postConnectSubflowAttemptCount : 1; unsigned char postConnectSubflowMaxSubflowCount : 1; unsigned char subflowSwitchingCount : 1; unsigned char establishmentCellularFallback : 1; unsigned char establishmentForcedTcpFallback : 1; unsigned char establishmentSuccess : 1; unsigned char establishmentTcpFallback : 1; unsigned char postConnectMultiHomed : 1; unsigned char postConnectSingleHomed : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasClientId;
@property (retain, nonatomic) NSString *clientId;
@property (readonly, nonatomic) char hasEstablishmentInterfaceName;
@property (retain, nonatomic) NSString *establishmentInterfaceName;
@property (nonatomic) char hasEstablishmentSuccess;
@property (nonatomic) char establishmentSuccess;
@property (nonatomic) char hasEstablishmentFailureError;
@property (nonatomic) int establishmentFailureError;
@property (nonatomic) char hasEstablishmentTcpFallback;
@property (nonatomic) char establishmentTcpFallback;
@property (nonatomic) char hasEstablishmentCellularFallback;
@property (nonatomic) char establishmentCellularFallback;
@property (nonatomic) char hasEstablishmentTime;
@property (nonatomic) double establishmentTime;
@property (nonatomic) char hasEstablishmentSynRetransmits;
@property (nonatomic) int establishmentSynRetransmits;
@property (nonatomic) char hasEstablishmentForcedTcpFallback;
@property (nonatomic) char establishmentForcedTcpFallback;
@property (nonatomic) char hasPostConnectMultiHomed;
@property (nonatomic) char postConnectMultiHomed;
@property (nonatomic) char hasPostConnectSingleHomed;
@property (nonatomic) char postConnectSingleHomed;
@property (nonatomic) char hasPostConnectSubflowAttemptCount;
@property (nonatomic) int postConnectSubflowAttemptCount;
@property (nonatomic) char hasPostConnectSubflowMaxSubflowCount;
@property (nonatomic) int postConnectSubflowMaxSubflowCount;
@property (nonatomic) char hasPostConnectSessionLifetime;
@property (nonatomic) double postConnectSessionLifetime;
@property (nonatomic) char hasSubflowSwitchingCount;
@property (nonatomic) int subflowSwitchingCount;
@property (retain, nonatomic) NSMutableArray *interfaceReports;
@property (retain, nonatomic) NSMutableArray *subflowSwitchingReports;

+ (Class)interfaceReportsType;
+ (Class)subflowSwitchingReportsType;

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
- (id)subflowSwitchingReportsAtIndex:(unsigned long long)a0;
- (void)addInterfaceReports:(id)a0;
- (void)addSubflowSwitchingReports:(id)a0;
- (void)clearInterfaceReports;
- (void)clearSubflowSwitchingReports;
- (id)interfaceReportsAtIndex:(unsigned long long)a0;
- (unsigned long long)interfaceReportsCount;
- (unsigned long long)subflowSwitchingReportsCount;

@end
