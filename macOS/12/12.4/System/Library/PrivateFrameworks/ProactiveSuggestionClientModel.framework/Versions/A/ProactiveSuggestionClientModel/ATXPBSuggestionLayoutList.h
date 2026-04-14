@class NSMutableArray;

@interface ATXPBSuggestionLayoutList : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *layouts;

+ (Class)layoutType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)clearLayouts;
- (unsigned long long)layoutsCount;
- (void)addLayout:(id)a0;
- (id)layoutAtIndex:(unsigned long long)a0;

@end
