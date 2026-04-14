@interface _MRRegisterGameControllerResponseMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char controllerID : 1; } _has;
}

@property (nonatomic) BOOL hasControllerID;
@property (nonatomic) unsigned long long controllerID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
