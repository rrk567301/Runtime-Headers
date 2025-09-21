@class NSString, MPPMediaPredicateValue;

@interface MPPPropertyPredicate : PBCodable <NSCopying> {
    struct { unsigned char comparisonType : 1; } _has;
}

@property (readonly, nonatomic) char hasProperty;
@property (retain, nonatomic) NSString *property;
@property (readonly, nonatomic) char hasValue;
@property (retain, nonatomic) MPPMediaPredicateValue *value;
@property (nonatomic) char hasComparisonType;
@property (nonatomic) int comparisonType;

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
