@interface AWDSafariInteractedWithGeneratedPasswordEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char generatedPasswordInteractionType : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasGeneratedPasswordInteractionType;
@property (nonatomic) int generatedPasswordInteractionType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsGeneratedPasswordInteractionType:(id)a0;
- (id)generatedPasswordInteractionTypeAsString:(int)a0;

@end
