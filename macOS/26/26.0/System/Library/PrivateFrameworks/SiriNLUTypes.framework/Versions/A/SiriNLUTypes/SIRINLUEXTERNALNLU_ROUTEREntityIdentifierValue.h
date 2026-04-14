@class SIRINLUEXTERNALNLU_ROUTERTypeIdentifier, NSString;

@interface SIRINLUEXTERNALNLU_ROUTEREntityIdentifierValue : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) SIRINLUEXTERNALNLU_ROUTERTypeIdentifier *type;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
