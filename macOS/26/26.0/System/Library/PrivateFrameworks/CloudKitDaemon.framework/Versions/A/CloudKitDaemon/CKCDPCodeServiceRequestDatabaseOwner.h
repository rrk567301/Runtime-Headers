@class NSString;

@interface CKCDPCodeServiceRequestDatabaseOwner : PBCodable <NSCopying> {
    struct { unsigned char numericValue : 1; unsigned char identifier : 1; } _has;
}

@property (nonatomic) BOOL hasNumericValue;
@property (nonatomic) unsigned long long numericValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) int identifier;

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
- (int)StringAsIdentifier:(id)a0;
- (void)clearOneofValuesForIdentifier;
- (id)identifierAsString:(int)a0;

@end
