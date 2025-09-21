@class NSString, NSData;

@interface CKCDPErrorUserInfoValue : PBCodable <NSCopying> {
    struct { unsigned char doubleValue : 1; unsigned char int64Value : 1; unsigned char value : 1; unsigned char boolValue : 1; } _has;
}

@property (nonatomic) char hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) char hasInt64Value;
@property (nonatomic) long long int64Value;
@property (nonatomic) char hasBoolValue;
@property (nonatomic) char boolValue;
@property (readonly, nonatomic) char hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) char hasBytesValue;
@property (retain, nonatomic) NSData *bytesValue;
@property (nonatomic) char hasValue;
@property (nonatomic) int value;

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
- (int)StringAsValue:(id)a0;
- (void)clearOneofValuesForValue;
- (id)valueAsString:(int)a0;

@end
