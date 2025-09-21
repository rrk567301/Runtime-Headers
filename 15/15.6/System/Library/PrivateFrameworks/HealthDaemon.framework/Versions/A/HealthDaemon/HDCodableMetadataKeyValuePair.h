@class NSString, HDCodableQuantity, NSData;

@interface HDCodableMetadataKeyValuePair : PBCodable <NSCopying> {
    struct { unsigned char dateValue : 1; unsigned char numberDoubleValue : 1; unsigned char numberIntValue : 1; } _has;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) char hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) char hasDateValue;
@property (nonatomic) double dateValue;
@property (nonatomic) char hasNumberIntValue;
@property (nonatomic) long long numberIntValue;
@property (nonatomic) char hasNumberDoubleValue;
@property (nonatomic) double numberDoubleValue;
@property (readonly, nonatomic) char hasQuantityValue;
@property (retain, nonatomic) HDCodableQuantity *quantityValue;
@property (readonly, nonatomic) char hasDataValue;
@property (retain, nonatomic) NSData *dataValue;

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

@end
