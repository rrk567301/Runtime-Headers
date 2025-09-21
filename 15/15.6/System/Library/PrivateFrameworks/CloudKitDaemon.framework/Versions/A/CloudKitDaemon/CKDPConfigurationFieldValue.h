@class NSData, NSString, NSMutableArray;

@interface CKDPConfigurationFieldValue : PBCodable <NSCopying> {
    struct { unsigned char doubleValue : 1; unsigned char longValue : 1; unsigned char type : 1; unsigned char boolValue : 1; } _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasBytesValue;
@property (retain, nonatomic) NSData *bytesValue;
@property (nonatomic) char hasBoolValue;
@property (nonatomic) char boolValue;
@property (nonatomic) char hasLongValue;
@property (nonatomic) long long longValue;
@property (nonatomic) char hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (readonly, nonatomic) char hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (retain, nonatomic) NSMutableArray *fieldValues;
@property (retain, nonatomic) NSMutableArray *listValues;

+ (Class)fieldValuesType;
+ (Class)listValuesType;

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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)addFieldValues:(id)a0;
- (void)clearListValues;
- (unsigned long long)listValuesCount;
- (void)addListValues:(id)a0;
- (void)clearFieldValues;
- (id)fieldValuesAtIndex:(unsigned long long)a0;
- (unsigned long long)fieldValuesCount;
- (id)listValuesAtIndex:(unsigned long long)a0;

@end
