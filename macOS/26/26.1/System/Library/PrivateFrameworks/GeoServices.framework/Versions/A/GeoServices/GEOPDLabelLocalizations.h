@class NSMutableArray;

@interface GEOPDLabelLocalizations : PBCodable <NSCopying> {
    NSMutableArray *_localizedStrings;
}

@property (retain, nonatomic) NSMutableArray *localizedStrings;

+ (BOOL)isValid:(id)a0;
+ (Class)localizedStringType;

- (id)dictionaryRepresentation;
- (void)clearLocalizedStrings;
- (unsigned long long)hash;
- (id)initWithJSON:(id)a0;
- (id)bestLocalizedName;
- (id)jsonRepresentation;
- (id)description;
- (void)readAll:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)localizedStringsCount;
- (void)writeTo:(id)a0;
- (void)addLocalizedString:(id)a0;
- (id)localizedStringAtIndex:(unsigned long long)a0;

@end
