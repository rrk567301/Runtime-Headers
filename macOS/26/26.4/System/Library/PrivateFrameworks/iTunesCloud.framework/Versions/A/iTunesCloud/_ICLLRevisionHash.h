@class NSString;

@interface _ICLLRevisionHash : PBCodable <NSCopying> {
    NSString *_hashValue;
    int _revision;
    int _type;
    struct { unsigned char revision : 1; unsigned char type : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
