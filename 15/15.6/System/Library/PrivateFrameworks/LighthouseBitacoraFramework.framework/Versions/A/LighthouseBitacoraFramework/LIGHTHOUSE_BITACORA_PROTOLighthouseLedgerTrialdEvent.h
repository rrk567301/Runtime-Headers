@class NSString, LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers;

@interface LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialdEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char eventType : 1; unsigned char eventSucceeded : 1; } _has;
}

@property (readonly, nonatomic) char hasTrialIdentifiers;
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers *trialIdentifiers;
@property (readonly, nonatomic) char hasContextID;
@property (retain, nonatomic) NSString *contextID;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) char hasEventType;
@property (nonatomic) int eventType;
@property (nonatomic) char hasEventSucceeded;
@property (nonatomic) char eventSucceeded;

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
- (int)StringAsEventType:(id)a0;
- (id)eventTypeAsString:(int)a0;

@end
