@class SIRINLUEXTERNALNLU_ROUTERTypeIdentifier, NSString;

@interface SIRINLUEXTERNALNLU_ROUTEREntityIdentifierValue : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) SIRINLUEXTERNALNLU_ROUTERTypeIdentifier *type;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
