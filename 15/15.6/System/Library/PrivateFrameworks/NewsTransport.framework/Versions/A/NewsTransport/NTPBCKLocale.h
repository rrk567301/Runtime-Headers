@class NSString, NSMutableArray;

@interface NTPBCKLocale : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasLanguageCode;
@property (retain, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) char hasRegionCode;
@property (retain, nonatomic) NSString *regionCode;
@property (retain, nonatomic) NSMutableArray *enabledKeyboards;
@property (readonly, nonatomic) char hasActiveKeyboard;
@property (retain, nonatomic) NSString *activeKeyboard;

+ (Class)enabledKeyboardsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addEnabledKeyboards:(id)a0;
- (void)clearEnabledKeyboards;
- (id)enabledKeyboardsAtIndex:(unsigned long long)a0;
- (unsigned long long)enabledKeyboardsCount;

@end
