@class NSMutableArray;

@interface GEOPDLabelLocalizations : PBCodable <NSCopying> {
    NSMutableArray *_localizedStrings;
}

@property (retain, nonatomic) NSMutableArray *localizedStrings;

+ (BOOL)isValid:(id)a0;
+ (Class)localizedStringType;

- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)bestLocalizedName;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)localizedStringsCount;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (void)clearLocalizedStrings;
- (id)initWithJSON:(id)a0;
- (void)addLocalizedString:(id)a0;
- (id)localizedStringAtIndex:(unsigned long long)a0;

@end
