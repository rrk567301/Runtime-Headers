@class EDPETQuotaReachedEvent, EDPETSubmittedEvent, NSData;

@interface EDPETBatchedWrapper : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasQuotaEvent;
@property (retain, nonatomic) EDPETQuotaReachedEvent *quotaEvent;
@property (readonly, nonatomic) BOOL hasSubmittedEvent;
@property (retain, nonatomic) EDPETSubmittedEvent *submittedEvent;
@property (readonly, nonatomic) BOOL hasRawData;
@property (retain, nonatomic) NSData *rawData;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
