@interface _MRPlaybackQueueCapabilitiesProtobuf : PBCodable <NSCopying> {
    struct { unsigned char requestByIdentifiers : 1; unsigned char requestByRange : 1; unsigned char requestByRequest : 1; } _has;
}

@property (nonatomic) char hasRequestByRange;
@property (nonatomic) char requestByRange;
@property (nonatomic) char hasRequestByIdentifiers;
@property (nonatomic) char requestByIdentifiers;
@property (nonatomic) char hasRequestByRequest;
@property (nonatomic) char requestByRequest;

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
