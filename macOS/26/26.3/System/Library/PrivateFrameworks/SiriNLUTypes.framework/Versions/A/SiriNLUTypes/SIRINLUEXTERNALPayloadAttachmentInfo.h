@interface SIRINLUEXTERNALPayloadAttachmentInfo : PBCodable <NSCopying> {
    struct { unsigned char attachmentType : 1; } _has;
}

@property (nonatomic) BOOL hasAttachmentType;
@property (nonatomic) int attachmentType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (id)attachmentTypeAsString:(int)a0;
- (int)StringAsAttachmentType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
