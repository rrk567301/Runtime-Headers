@class NSString;

@interface _ICLLErrorMessage : PBCodable <NSCopying> {
    int _code;
    int _contentTypeCode;
    NSString *_message;
    struct { unsigned char code : 1; unsigned char contentTypeCode : 1; } _has;
}

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;

@end
