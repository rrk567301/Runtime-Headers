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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addEnabledKeyboards:(id)a0;
- (void)clearEnabledKeyboards;
- (id)enabledKeyboardsAtIndex:(unsigned long long)a0;
- (unsigned long long)enabledKeyboardsCount;

@end
