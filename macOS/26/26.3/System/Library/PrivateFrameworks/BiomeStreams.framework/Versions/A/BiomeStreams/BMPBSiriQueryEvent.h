@class NSString, NSMutableArray;

@interface BMPBSiriQueryEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; } _has;
}

@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) BOOL hasQuery;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSMutableArray *results;
@property (readonly, nonatomic) BOOL hasUniqueId;
@property (retain, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) BOOL hasContentProtection;
@property (retain, nonatomic) NSString *contentProtection;
@property (readonly, nonatomic) BOOL hasPersonaId;
@property (retain, nonatomic) NSString *personaId;

+ (Class)resultsType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void)addResults:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (id)resultsAtIndex:(unsigned long long)a0;
- (void)clearResults;
- (void).cxx_destruct;
- (unsigned long long)resultsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
