@class NSString;

@interface _ICLLDisplayMessage : PBCodable <NSCopying> {
    NSString *_detailMessage;
    NSString *_titleMessage;
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
