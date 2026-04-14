@class VCCCMessageAcknowledgment, VCCCMessage;

@interface VCCCMessageWrapper : PBCodable <NSCopying> {
    struct { unsigned char content : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMessage;
@property (retain, nonatomic) VCCCMessage *message;
@property (readonly, nonatomic) BOOL hasAcknowledgement;
@property (retain, nonatomic) VCCCMessageAcknowledgment *acknowledgement;
@property (nonatomic) BOOL hasContent;
@property (nonatomic) int content;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)contentAsString:(int)a0;
- (int)StringAsContent:(id)a0;
- (void)clearOneofValuesForContent;

@end
