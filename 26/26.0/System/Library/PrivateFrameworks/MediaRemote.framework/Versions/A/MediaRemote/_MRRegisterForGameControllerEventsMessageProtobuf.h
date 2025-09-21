@interface _MRRegisterForGameControllerEventsMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char inputModeFlags : 1; } _has;
}

@property (nonatomic) BOOL hasInputModeFlags;
@property (nonatomic) int inputModeFlags;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)StringAsInputModeFlags:(id)a0;
- (id)inputModeFlagsAsString:(int)a0;

@end
