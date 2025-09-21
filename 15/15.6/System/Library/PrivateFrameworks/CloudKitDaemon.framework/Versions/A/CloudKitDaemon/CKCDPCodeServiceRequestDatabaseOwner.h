@class NSString;

@interface CKCDPCodeServiceRequestDatabaseOwner : PBCodable <NSCopying> {
    struct { unsigned char numericValue : 1; unsigned char identifier : 1; } _has;
}

@property (nonatomic) char hasNumericValue;
@property (nonatomic) unsigned long long numericValue;
@property (readonly, nonatomic) char hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) char hasIdentifier;
@property (nonatomic) int identifier;

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
- (int)StringAsIdentifier:(id)a0;
- (void)clearOneofValuesForIdentifier;
- (id)identifierAsString:(int)a0;

@end
