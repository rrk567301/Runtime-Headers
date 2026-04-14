@class NSString;

@interface _ICLLErrorMessage : PBCodable <NSCopying> {
    int _code;
    int _contentTypeCode;
    NSString *_message;
    struct { unsigned char code : 1; unsigned char contentTypeCode : 1; } _has;
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
