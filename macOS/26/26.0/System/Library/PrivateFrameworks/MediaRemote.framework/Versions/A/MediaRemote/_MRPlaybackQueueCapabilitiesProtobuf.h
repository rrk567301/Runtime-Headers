@interface _MRPlaybackQueueCapabilitiesProtobuf : PBCodable <NSCopying> {
    struct { unsigned char requestByIdentifiers : 1; unsigned char requestByRange : 1; unsigned char requestByRequest : 1; } _has;
}

@property (nonatomic) BOOL hasRequestByRange;
@property (nonatomic) BOOL requestByRange;
@property (nonatomic) BOOL hasRequestByIdentifiers;
@property (nonatomic) BOOL requestByIdentifiers;
@property (nonatomic) BOOL hasRequestByRequest;
@property (nonatomic) BOOL requestByRequest;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
