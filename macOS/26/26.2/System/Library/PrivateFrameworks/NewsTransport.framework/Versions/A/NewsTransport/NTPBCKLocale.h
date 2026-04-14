@class NSString, NSMutableArray;

@interface NTPBCKLocale : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasLanguageCode;
@property (retain, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) BOOL hasRegionCode;
@property (retain, nonatomic) NSString *regionCode;
@property (retain, nonatomic) NSMutableArray *enabledKeyboards;
@property (readonly, nonatomic) BOOL hasActiveKeyboard;
@property (retain, nonatomic) NSString *activeKeyboard;

+ (Class)enabledKeyboardsType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addEnabledKeyboards:(id)a0;
- (void)clearEnabledKeyboards;
- (id)enabledKeyboardsAtIndex:(unsigned long long)a0;
- (unsigned long long)enabledKeyboardsCount;

@end
