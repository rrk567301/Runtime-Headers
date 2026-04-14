@interface _MRSetHiliteModeMessageProtobuf : PBCodable <NSCopying> {
    BOOL _hiliteMode;
    struct { unsigned char hiliteMode : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
