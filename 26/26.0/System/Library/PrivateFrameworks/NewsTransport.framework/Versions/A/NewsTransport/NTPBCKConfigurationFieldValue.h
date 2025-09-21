@class NSData, NSString, NSMutableArray;

@interface NTPBCKConfigurationFieldValue : PBCodable <NSCopying> {
    struct { unsigned char doubleValue : 1; unsigned char longValue : 1; unsigned char type : 1; unsigned char boolValue : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasBytesValue;
@property (retain, nonatomic) NSData *bytesValue;
@property (nonatomic) BOOL hasBoolValue;
@property (nonatomic) BOOL boolValue;
@property (nonatomic) BOOL hasLongValue;
@property (nonatomic) long long longValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (retain, nonatomic) NSMutableArray *fieldValues;
@property (retain, nonatomic) NSMutableArray *listValues;

+ (Class)fieldValuesType;
+ (Class)listValuesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)listValuesCount;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)clearListValues;
- (void)addFieldValues:(id)a0;
- (void)addListValues:(id)a0;
- (void)clearFieldValues;
- (id)fieldValuesAtIndex:(unsigned long long)a0;
- (unsigned long long)fieldValuesCount;
- (id)listValuesAtIndex:(unsigned long long)a0;

@end
