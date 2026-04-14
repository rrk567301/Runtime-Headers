@class NSString, NSData;

@interface MPPMediaPredicateValue : PBCodable <NSCopying> {
    struct { unsigned char doublePredicateValue : 1; unsigned char integerPredicateValue : 1; unsigned char floatPredicateValue : 1; unsigned char boolPredicateValue : 1; } _has;
}

@property (nonatomic) int type;
@property (nonatomic) BOOL hasIntegerPredicateValue;
@property (nonatomic) long long integerPredicateValue;
@property (nonatomic) BOOL hasDoublePredicateValue;
@property (nonatomic) double doublePredicateValue;
@property (nonatomic) BOOL hasFloatPredicateValue;
@property (nonatomic) float floatPredicateValue;
@property (nonatomic) BOOL hasBoolPredicateValue;
@property (nonatomic) BOOL boolPredicateValue;
@property (readonly, nonatomic) BOOL hasStringPredicateValue;
@property (retain, nonatomic) NSString *stringPredicateValue;
@property (readonly, nonatomic) BOOL hasBytesPredicateValue;
@property (retain, nonatomic) NSData *bytesPredicateValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)dealloc;

@end
