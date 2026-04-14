@class NSMutableArray;

@interface HMImmutableSettingsProtoAvailableLanguageListEvent : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *languages;

+ (Class)languagesType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearLanguages;
- (unsigned long long)languagesCount;
- (void)addLanguages:(id)a0;
- (id)languagesAtIndex:(unsigned long long)a0;

@end
