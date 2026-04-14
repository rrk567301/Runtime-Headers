@class NSString;

@interface ATXMPBBlendingLayerRefreshTracker : PBCodable <NSCopying> {
    struct { unsigned char computationTime : 1; unsigned char interarrivalTime : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasClientModelId;
@property (retain, nonatomic) NSString *clientModelId;
@property (nonatomic) BOOL hasInterarrivalTime;
@property (nonatomic) unsigned int interarrivalTime;
@property (nonatomic) BOOL hasComputationTime;
@property (nonatomic) unsigned int computationTime;
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;

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
