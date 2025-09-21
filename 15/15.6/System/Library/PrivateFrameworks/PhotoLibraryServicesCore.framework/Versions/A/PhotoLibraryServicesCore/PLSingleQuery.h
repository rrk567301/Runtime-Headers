@class NSString, NSData, PLQueryCircularRegion, NSDate;

@interface PLSingleQuery : PBCodable <NSCopying> {
    struct { unsigned char comparator : 1; unsigned char key : 1; unsigned char unit : 1; unsigned char valueType : 1; } _has;
}

@property (nonatomic) double doubleValue;
@property (nonatomic) double secondDoubleValue;
@property (nonatomic) long long integerValue;
@property (nonatomic) long long secondIntegerValue;
@property (nonatomic) char boolValue;
@property (retain, nonatomic) NSString *stringValue;
@property (retain, nonatomic) NSString *secondStringValue;
@property (retain, nonatomic) NSDate *dateValue;
@property (retain, nonatomic) NSDate *secondDateValue;
@property (retain, nonatomic) PLQueryCircularRegion *circularRegionValue;
@property (retain, nonatomic) PLQueryCircularRegion *secondCircularRegionValue;
@property (nonatomic) char hasKey;
@property (nonatomic) int key;
@property (nonatomic) char hasValueType;
@property (nonatomic) int valueType;
@property (readonly, nonatomic) char hasFirstValue;
@property (retain, nonatomic) NSData *firstValue;
@property (readonly, nonatomic) char hasSecondValue;
@property (retain, nonatomic) NSData *secondValue;
@property (nonatomic) char hasComparator;
@property (nonatomic) int comparator;
@property (nonatomic) char hasUnit;
@property (nonatomic) int unit;

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
- (id)logDescription;
- (int)migratedComparator;
- (void)setValueAndType:(id)a0;

@end
