@class NSString, SECSFAPropertyValue;

@interface SECSFAMatchProperty : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPropertyName;
@property (retain, nonatomic) NSString *propertyName;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) SECSFAPropertyValue *value;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
