@class NSString, NSData;

@interface MPPMediaPredicateValue : PBCodable <NSCopying> {
    struct { unsigned char doublePredicateValue : 1; unsigned char integerPredicateValue : 1; unsigned char floatPredicateValue : 1; unsigned char boolPredicateValue : 1; } _has;
}

@property (nonatomic) int type;
@property (nonatomic) char hasIntegerPredicateValue;
@property (nonatomic) long long integerPredicateValue;
@property (nonatomic) char hasDoublePredicateValue;
@property (nonatomic) double doublePredicateValue;
@property (nonatomic) char hasFloatPredicateValue;
@property (nonatomic) float floatPredicateValue;
@property (nonatomic) char hasBoolPredicateValue;
@property (nonatomic) char boolPredicateValue;
@property (readonly, nonatomic) char hasStringPredicateValue;
@property (retain, nonatomic) NSString *stringPredicateValue;
@property (readonly, nonatomic) char hasBytesPredicateValue;
@property (retain, nonatomic) NSData *bytesPredicateValue;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
