@class NSString;

@interface ATXPredictionUpdateCountPBPredictionUpdateCountTracker : PBCodable <NSCopying> {
    struct { unsigned char clientType : 1; unsigned char triggerType : 1; } _has;
}

@property (nonatomic) BOOL hasTriggerType;
@property (nonatomic) int triggerType;
@property (nonatomic) BOOL hasClientType;
@property (nonatomic) int clientType;
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;

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
- (int)StringAsTriggerType:(id)a0;
- (id)triggerTypeAsString:(int)a0;
- (int)StringAsClientType:(id)a0;
- (id)clientTypeAsString:(int)a0;

@end
