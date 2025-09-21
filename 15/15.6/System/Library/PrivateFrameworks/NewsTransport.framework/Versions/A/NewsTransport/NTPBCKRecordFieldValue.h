@class NTPBCKDate, NSString, NSData, NTPBCKRecordReference, NSMutableArray;

@interface NTPBCKRecordFieldValue : PBCodable <NSCopying> {
    struct { unsigned char doubleValue : 1; unsigned char signedValue : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasBytesValue;
@property (retain, nonatomic) NSData *bytesValue;
@property (nonatomic) char hasSignedValue;
@property (nonatomic) long long signedValue;
@property (nonatomic) char hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (readonly, nonatomic) char hasDateValue;
@property (retain, nonatomic) NTPBCKDate *dateValue;
@property (readonly, nonatomic) char hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) char hasReferenceValue;
@property (retain, nonatomic) NTPBCKRecordReference *referenceValue;
@property (retain, nonatomic) NSMutableArray *listValues;

+ (Class)listValueType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearListValues;
- (unsigned long long)listValuesCount;
- (void)addListValue:(id)a0;
- (id)listValueAtIndex:(unsigned long long)a0;

@end
