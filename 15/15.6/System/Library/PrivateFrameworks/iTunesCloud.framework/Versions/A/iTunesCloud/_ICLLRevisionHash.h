@class NSString;

@interface _ICLLRevisionHash : PBCodable <NSCopying> {
    NSString *_hashValue;
    int _revision;
    int _type;
    struct { unsigned char revision : 1; unsigned char type : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
