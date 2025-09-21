@class NSString;

@interface ATXMPBBlendingLayerRefreshTracker : PBCodable <NSCopying> {
    struct { unsigned char computationTime : 1; unsigned char interarrivalTime : 1; } _has;
}

@property (readonly, nonatomic) char hasClientModelId;
@property (retain, nonatomic) NSString *clientModelId;
@property (nonatomic) char hasInterarrivalTime;
@property (nonatomic) unsigned int interarrivalTime;
@property (nonatomic) char hasComputationTime;
@property (nonatomic) unsigned int computationTime;
@property (readonly, nonatomic) char hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;
@property (readonly, nonatomic) char hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;

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
