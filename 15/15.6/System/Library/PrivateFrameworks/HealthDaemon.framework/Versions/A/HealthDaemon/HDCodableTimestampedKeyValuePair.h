@class NSString, NSData;

@interface HDCodableTimestampedKeyValuePair : PBCodable <NSCopying> {
    struct { unsigned char numberDoubleValue : 1; unsigned char numberIntValue : 1; unsigned char timestamp : 1; } _has;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) char hasNumberIntValue;
@property (nonatomic) long long numberIntValue;
@property (nonatomic) char hasNumberDoubleValue;
@property (nonatomic) double numberDoubleValue;
@property (readonly, nonatomic) char hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) char hasBytesValue;
@property (retain, nonatomic) NSData *bytesValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)setValue:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)decodedTimestamp;
- (id)decodedValue;
- (id)initWithKey:(id)a0 value:(id)a1 timestamp:(id)a2;
- (void)setTimestampWithDate:(id)a0;

@end
