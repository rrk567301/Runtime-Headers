@class NSString, MPPMediaPredicateValue;

@interface MPPPropertyPredicate : PBCodable <NSCopying> {
    struct { unsigned char comparisonType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasProperty;
@property (retain, nonatomic) NSString *property;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) MPPMediaPredicateValue *value;
@property (nonatomic) BOOL hasComparisonType;
@property (nonatomic) int comparisonType;

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
