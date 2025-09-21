@interface _MRAudioStreamPacketDescriptionProtobuf : PBCodable <NSCopying> {
    struct { unsigned char startOffset : 1; unsigned char dataByteSize : 1; unsigned char variableFramesInPacket : 1; } _has;
}

@property (nonatomic) char hasStartOffset;
@property (nonatomic) long long startOffset;
@property (nonatomic) char hasVariableFramesInPacket;
@property (nonatomic) unsigned int variableFramesInPacket;
@property (nonatomic) char hasDataByteSize;
@property (nonatomic) unsigned int dataByteSize;

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
