@class NSArray, NSString, NSDate, NSMutableArray, PBUnknownFields;

@interface GEOCondition : PBCodable <GEOServerCondition, NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_conditions;
    unsigned int _expirationTime;
    int _type;
    struct { unsigned char has_expirationTime : 1; unsigned char has_type : 1; } _flags;
}

@property (readonly, nonatomic) long long conditionType;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) NSArray *subconditions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (nonatomic) char hasExpirationTime;
@property (nonatomic) unsigned int expirationTime;
@property (retain, nonatomic) NSMutableArray *conditions;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)conditionType;
+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)clearConditions;
- (unsigned long long)conditionsCount;
- (void)addCondition:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)conditionAtIndex:(unsigned long long)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
