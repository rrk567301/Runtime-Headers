@interface AWDSafariInteractedWithGeneratedPasswordEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char generatedPasswordInteractionType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasGeneratedPasswordInteractionType;
@property (nonatomic) int generatedPasswordInteractionType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)StringAsGeneratedPasswordInteractionType:(id)a0;
- (id)generatedPasswordInteractionTypeAsString:(int)a0;

@end
