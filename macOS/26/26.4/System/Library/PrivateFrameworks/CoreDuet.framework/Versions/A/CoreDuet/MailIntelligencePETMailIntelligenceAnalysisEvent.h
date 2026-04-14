@class NSString, MailIntelligencePETContactEvents;

@interface MailIntelligencePETMailIntelligenceAnalysisEvent : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *collectionId;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) int batch;
@property (retain, nonatomic) MailIntelligencePETContactEvents *contactEvents;
@property (nonatomic) unsigned long long mailIntelligenceUserId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
