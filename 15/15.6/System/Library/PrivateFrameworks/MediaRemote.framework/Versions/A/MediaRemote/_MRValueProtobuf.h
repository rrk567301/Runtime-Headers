@class NSString, NSData, NSMutableArray, _MRDictionaryProtobuf;

@interface _MRValueProtobuf : PBCodable <NSCopying> {
    struct { unsigned char doubleValue : 1; unsigned char int64Value : 1; unsigned char floatValue : 1; unsigned char boolValue : 1; } _has;
}

@property (readonly, nonatomic) char hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) char hasInt64Value;
@property (nonatomic) long long int64Value;
@property (nonatomic) char hasFloatValue;
@property (nonatomic) float floatValue;
@property (nonatomic) char hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (readonly, nonatomic) char hasDataValue;
@property (retain, nonatomic) NSData *dataValue;
@property (nonatomic) char hasBoolValue;
@property (nonatomic) char boolValue;
@property (readonly, nonatomic) char hasDateValue;
@property (retain, nonatomic) NSString *dateValue;
@property (retain, nonatomic) NSMutableArray *arrayValues;
@property (readonly, nonatomic) char hasDictionaryValue;
@property (retain, nonatomic) _MRDictionaryProtobuf *dictionaryValue;

+ (Class)arrayValueType;

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
- (void)addArrayValue:(id)a0;
- (id)arrayValueAtIndex:(unsigned long long)a0;
- (unsigned long long)arrayValuesCount;
- (void)clearArrayValues;

@end
