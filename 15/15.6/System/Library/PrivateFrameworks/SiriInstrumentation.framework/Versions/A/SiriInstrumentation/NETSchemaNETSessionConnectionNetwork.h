@class NSString, NSData;

@interface NETSchemaNETSessionConnectionNetwork : SISchemaInstrumentationMessage {
    struct { unsigned char connectionMethod : 1; unsigned char isCaptive : 1; unsigned char rssi : 1; unsigned char snr : 1; unsigned char attempCount : 1; unsigned char firstByteTime : 1; unsigned char startToDNSResolution : 1; unsigned char dnsResolutionTime : 1; unsigned char tlsVersion : 1; unsigned char tlsHandshakeTime : 1; unsigned char connectionEstablishmentTime : 1; unsigned char connectionStartToEstablishmentTime : 1; unsigned char connectionStartToTLSHandshake : 1; unsigned char clearChannelAssessmentScore : 1; } _has;
}

@property (copy, nonatomic) NSString *carrierName;
@property (nonatomic) char hasCarrierName;
@property (nonatomic) int connectionMethod;
@property (nonatomic) char hasConnectionMethod;
@property (copy, nonatomic) NSString *primarySubflowInterfaceName;
@property (nonatomic) char hasPrimarySubflowInterfaceName;
@property (nonatomic) char isCaptive;
@property (nonatomic) char hasIsCaptive;
@property (nonatomic) double rssi;
@property (nonatomic) char hasRssi;
@property (nonatomic) double snr;
@property (nonatomic) char hasSnr;
@property (nonatomic) unsigned int attempCount;
@property (nonatomic) char hasAttempCount;
@property (nonatomic) unsigned long long firstByteTime;
@property (nonatomic) char hasFirstByteTime;
@property (nonatomic) unsigned long long startToDNSResolution;
@property (nonatomic) char hasStartToDNSResolution;
@property (nonatomic) unsigned long long dnsResolutionTime;
@property (nonatomic) char hasDnsResolutionTime;
@property (nonatomic) int tlsVersion;
@property (nonatomic) char hasTlsVersion;
@property (nonatomic) unsigned long long tlsHandshakeTime;
@property (nonatomic) char hasTlsHandshakeTime;
@property (nonatomic) unsigned long long connectionEstablishmentTime;
@property (nonatomic) char hasConnectionEstablishmentTime;
@property (nonatomic) unsigned long long connectionStartToEstablishmentTime;
@property (nonatomic) char hasConnectionStartToEstablishmentTime;
@property (nonatomic) unsigned long long connectionStartToTLSHandshake;
@property (nonatomic) char hasConnectionStartToTLSHandshake;
@property (nonatomic) double clearChannelAssessmentScore;
@property (nonatomic) char hasClearChannelAssessmentScore;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsCaptive;
- (void)deleteAttempCount;
- (void)deleteCarrierName;
- (void)deleteClearChannelAssessmentScore;
- (void)deleteConnectionEstablishmentTime;
- (void)deleteConnectionMethod;
- (void)deleteConnectionStartToEstablishmentTime;
- (void)deleteConnectionStartToTLSHandshake;
- (void)deleteDnsResolutionTime;
- (void)deleteFirstByteTime;
- (void)deletePrimarySubflowInterfaceName;
- (void)deleteRssi;
- (void)deleteSnr;
- (void)deleteStartToDNSResolution;
- (void)deleteTlsHandshakeTime;
- (void)deleteTlsVersion;
- (id)suppressMessageUnderConditions;

@end
