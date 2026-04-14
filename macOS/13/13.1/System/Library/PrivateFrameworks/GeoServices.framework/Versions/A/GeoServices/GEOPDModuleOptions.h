@class NSString, PBUnknownFields;

@interface GEOPDModuleOptions : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_webContentUrl;
}

@property (readonly, nonatomic) BOOL hasWebContentUrl;
@property (retain, nonatomic) NSString *webContentUrl;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)clearUnknownFields:(BOOL)a0;

@end
