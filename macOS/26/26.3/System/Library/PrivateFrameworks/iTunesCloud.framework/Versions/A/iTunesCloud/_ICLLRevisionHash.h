@class NSString;

@interface _ICLLRevisionHash : PBCodable <NSCopying> {
    NSString *_hashValue;
    int _revision;
    int _type;
    struct { unsigned char revision : 1; unsigned char type : 1; } _has;
}

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
