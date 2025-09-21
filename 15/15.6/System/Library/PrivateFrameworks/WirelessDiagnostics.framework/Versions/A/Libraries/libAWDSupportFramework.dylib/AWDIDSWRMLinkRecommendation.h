@interface AWDIDSWRMLinkRecommendation : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char infraWiFiState : 1; unsigned char magnetState : 1; unsigned char primaryLinkType : 1; unsigned char recommendedLinkType : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasRecommendedLinkType;
@property (nonatomic) unsigned int recommendedLinkType;
@property (nonatomic) char hasPrimaryLinkType;
@property (nonatomic) unsigned int primaryLinkType;
@property (nonatomic) char hasMagnetState;
@property (nonatomic) unsigned int magnetState;
@property (nonatomic) char hasInfraWiFiState;
@property (nonatomic) unsigned int infraWiFiState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
