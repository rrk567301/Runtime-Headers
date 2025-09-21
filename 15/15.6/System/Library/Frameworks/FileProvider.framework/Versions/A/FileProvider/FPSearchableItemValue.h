@class NSString, NSData, NSMutableArray;

@interface FPSearchableItemValue : PBCodable <NSCopying> {
    struct { unsigned char doubleValue : 1; unsigned char integerValue : 1; unsigned char timeIntervalSinceReferenceDateValue : 1; } _has;
}

@property (readonly, nonatomic) char hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) char hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) char hasIntegerValue;
@property (nonatomic) long long integerValue;
@property (nonatomic) char hasTimeIntervalSinceReferenceDateValue;
@property (nonatomic) double timeIntervalSinceReferenceDateValue;
@property (readonly, nonatomic) char hasNameComponents;
@property (retain, nonatomic) NSData *nameComponents;
@property (retain, nonatomic) NSMutableArray *arrayOfStringsValues;

+ (Class)arrayOfStringsValueType;
+ (id)objectFromString:(id)a0;
+ (id)stringArrayFromObject:(id)a0;
+ (id)stringFromObject:(id)a0;

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
- (void)addArrayOfStringsValue:(id)a0;
- (id)arrayOfStringsValueAtIndex:(unsigned long long)a0;
- (unsigned long long)arrayOfStringsValuesCount;
- (void)clearArrayOfStringsValues;

@end
