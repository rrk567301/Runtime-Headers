@interface _MRPlaybackQueueCapabilitiesProtobuf : PBCodable <NSCopying> {
    BOOL _requestByIdentifiers;
    BOOL _requestByRange;
    BOOL _requestByRequest;
    struct { unsigned char requestByIdentifiers : 1; unsigned char requestByRange : 1; unsigned char requestByRequest : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
