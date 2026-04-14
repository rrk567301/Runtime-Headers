@interface _ICLLClientInfoAction : PBCodable <NSCopying> {
    long long _participantId;
    int _code;
    struct { unsigned char participantId : 1; unsigned char code : 1; } _has;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
