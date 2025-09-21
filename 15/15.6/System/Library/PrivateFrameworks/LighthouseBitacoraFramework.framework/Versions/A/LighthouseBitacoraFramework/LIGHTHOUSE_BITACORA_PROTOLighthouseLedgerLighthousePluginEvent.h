@class NSString, LIGHTHOUSE_BITACORA_PROTOEventStatus, LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers;

@interface LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerLighthousePluginEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (readonly, nonatomic) char hasTrialIdentifiers;
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers *trialIdentifiers;
@property (readonly, nonatomic) char hasContextID;
@property (retain, nonatomic) NSString *contextID;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) char hasPerformTaskStatus;
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOEventStatus *performTaskStatus;
@property (readonly, nonatomic) char hasPerformTrialTaskStatus;
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOEventStatus *performTrialTaskStatus;
@property (readonly, nonatomic) char hasStop;
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOEventStatus *stop;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
