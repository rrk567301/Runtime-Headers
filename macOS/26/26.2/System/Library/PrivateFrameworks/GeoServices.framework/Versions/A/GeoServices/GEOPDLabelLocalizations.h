@class NSMutableArray;

@interface GEOPDLabelLocalizations : PBCodable <NSCopying> {
    NSMutableArray *_localizedStrings;
}

@property (retain, nonatomic) NSMutableArray *localizedStrings;

+ (BOOL)isValid:(id)a0;
+ (Class)localizedStringType;

- (id)initWithJSON:(id)a0;
- (id)bestLocalizedName;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)clearLocalizedStrings;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (unsigned long long)localizedStringsCount;
- (id)initWithDictionary:(id)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)readAll:(BOOL)a0;
- (void)addLocalizedString:(id)a0;
- (id)localizedStringAtIndex:(unsigned long long)a0;

@end
