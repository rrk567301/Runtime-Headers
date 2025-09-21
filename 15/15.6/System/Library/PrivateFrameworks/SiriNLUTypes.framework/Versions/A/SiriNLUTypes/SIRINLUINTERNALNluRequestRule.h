@class NSString, NSMutableArray;

@interface SIRINLUINTERNALNluRequestRule : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasIdA;
@property (retain, nonatomic) NSString *idA;
@property (readonly, nonatomic) char hasLocaleId;
@property (retain, nonatomic) NSString *localeId;
@property (readonly, nonatomic) char hasDeviceType;
@property (retain, nonatomic) NSString *deviceType;
@property (readonly, nonatomic) char hasUserInterfaceIdiom;
@property (retain, nonatomic) NSString *userInterfaceIdiom;
@property (retain, nonatomic) NSMutableArray *turnInputRules;

+ (Class)turnInputRulesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addTurnInputRules:(id)a0;
- (void)clearTurnInputRules;
- (id)turnInputRulesAtIndex:(unsigned long long)a0;
- (unsigned long long)turnInputRulesCount;

@end
