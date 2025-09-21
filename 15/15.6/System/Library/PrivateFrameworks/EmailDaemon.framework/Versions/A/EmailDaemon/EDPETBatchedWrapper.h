@class EDPETQuotaReachedEvent, EDPETSubmittedEvent, NSData;

@interface EDPETBatchedWrapper : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasQuotaEvent;
@property (retain, nonatomic) EDPETQuotaReachedEvent *quotaEvent;
@property (readonly, nonatomic) char hasSubmittedEvent;
@property (retain, nonatomic) EDPETSubmittedEvent *submittedEvent;
@property (readonly, nonatomic) char hasRawData;
@property (retain, nonatomic) NSData *rawData;

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
