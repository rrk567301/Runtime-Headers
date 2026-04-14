@interface _MRSetHiliteModeMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char hiliteMode : 1; } _has;
}

@property (nonatomic) BOOL hasHiliteMode;
@property (nonatomic) BOOL hiliteMode;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
