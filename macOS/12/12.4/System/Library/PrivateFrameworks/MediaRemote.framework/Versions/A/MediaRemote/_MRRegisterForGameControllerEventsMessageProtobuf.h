@interface _MRRegisterForGameControllerEventsMessageProtobuf : PBCodable <NSCopying> {
    int _inputModeFlags;
    struct { unsigned char inputModeFlags : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
