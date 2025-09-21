@class NSString;

@interface _ICLLClientInfoCommand : PBCodable <NSCopying> {
    NSString *_externalId;
    NSString *_sharedSessionToken;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
