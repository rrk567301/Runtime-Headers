@class NSString, NSData;

@interface HDCodableUserDomainConceptProperty : PBCodable <NSCopying> {
    struct { unsigned char doubleValue : 1; unsigned char integerValue : 1; unsigned char timestamp : 1; unsigned char type : 1; unsigned char valueType : 1; unsigned char version : 1; unsigned char boolValue : 1; } _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) long long type;
@property (nonatomic) char hasVersion;
@property (nonatomic) long long version;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) char hasValueType;
@property (nonatomic) long long valueType;
@property (readonly, nonatomic) char hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) char hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) char hasIntegerValue;
@property (nonatomic) long long integerValue;
@property (nonatomic) char hasBoolValue;
@property (nonatomic) char boolValue;
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
