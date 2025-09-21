@class _MRGameControllerPropertiesProtobuf;

@interface _MRGameControllerPropertiesMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char controllerID : 1; } _has;
}

@property (nonatomic) char hasControllerID;
@property (nonatomic) unsigned long long controllerID;
@property (readonly, nonatomic) char hasProperties;
@property (retain, nonatomic) _MRGameControllerPropertiesProtobuf *properties;

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
