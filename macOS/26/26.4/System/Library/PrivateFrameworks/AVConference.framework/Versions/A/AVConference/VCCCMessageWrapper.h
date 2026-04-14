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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)dealloc;
- (int)StringAsContent:(id)a0;
- (void)clearOneofValuesForContent;
- (id)contentAsString:(int)a0;

@end
