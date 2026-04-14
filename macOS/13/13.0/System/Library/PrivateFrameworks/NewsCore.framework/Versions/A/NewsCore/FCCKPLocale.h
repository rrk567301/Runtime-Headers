@class NSString, NSMutableArray;

@interface FCCKPLocale : PBCodable <NSCopying> {
    NSString *_activeKeyboard;
    NSMutableArray *_enabledKeyboards;
    NSString *_languageCode;
    NSString *_regionCode;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
