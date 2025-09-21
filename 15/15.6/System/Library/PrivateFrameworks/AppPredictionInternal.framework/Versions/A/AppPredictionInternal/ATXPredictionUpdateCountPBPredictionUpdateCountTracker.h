@class NSString;

@interface ATXPredictionUpdateCountPBPredictionUpdateCountTracker : PBCodable <NSCopying> {
    struct { unsigned char clientType : 1; unsigned char triggerType : 1; } _has;
}

@property (nonatomic) char hasTriggerType;
@property (nonatomic) int triggerType;
@property (nonatomic) char hasClientType;
@property (nonatomic) int clientType;
@property (readonly, nonatomic) char hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;

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
- (int)StringAsTriggerType:(id)a0;
- (id)triggerTypeAsString:(int)a0;
- (int)StringAsClientType:(id)a0;
- (id)clientTypeAsString:(int)a0;

@end
