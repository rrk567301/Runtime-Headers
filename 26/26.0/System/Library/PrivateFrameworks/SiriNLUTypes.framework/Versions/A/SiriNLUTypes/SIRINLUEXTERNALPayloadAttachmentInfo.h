@interface SIRINLUEXTERNALPayloadAttachmentInfo : PBCodable <NSCopying> {
    struct { unsigned char attachmentType : 1; } _has;
}

@property (nonatomic) BOOL hasAttachmentType;
@property (nonatomic) int attachmentType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (id)attachmentTypeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (int)StringAsAttachmentType:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
