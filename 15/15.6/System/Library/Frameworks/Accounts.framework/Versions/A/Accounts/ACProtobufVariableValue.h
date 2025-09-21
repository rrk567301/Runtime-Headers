@class ACProtobufURL, NSString, ACProtobufVariableValueList, NSData, ACProtobufDate, ACProtobufVariableValueDictionary, ACProtobufUUID;

@interface ACProtobufVariableValue : PBCodable <NSCopying> {
    struct { unsigned char doubleValue : 1; unsigned char integerValue : 1; unsigned char unsignedIntegerValue : 1; } _has;
}

@property (retain, nonatomic) id object;
@property (readonly, nonatomic) char hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) char hasIntegerValue;
@property (nonatomic) long long integerValue;
@property (nonatomic) char hasUnsignedIntegerValue;
@property (nonatomic) unsigned long long unsignedIntegerValue;
@property (nonatomic) char hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (readonly, nonatomic) char hasDataValue;
@property (retain, nonatomic) NSData *dataValue;
@property (readonly, nonatomic) char hasUuidValue;
@property (retain, nonatomic) ACProtobufUUID *uuidValue;
@property (readonly, nonatomic) char hasDateValue;
@property (retain, nonatomic) ACProtobufDate *dateValue;
@property (readonly, nonatomic) char hasUrlValue;
@property (retain, nonatomic) ACProtobufURL *urlValue;
@property (readonly, nonatomic) char hasArrayValue;
@property (retain, nonatomic) ACProtobufVariableValueList *arrayValue;
@property (readonly, nonatomic) char hasSetValue;
@property (retain, nonatomic) ACProtobufVariableValueList *setValue;
@property (readonly, nonatomic) char hasDictionaryValue;
@property (retain, nonatomic) ACProtobufVariableValueDictionary *dictionaryValue;

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
- (char)_setObject:(id)a0;
- (id)initWithObjectValue:(id)a0;

@end
