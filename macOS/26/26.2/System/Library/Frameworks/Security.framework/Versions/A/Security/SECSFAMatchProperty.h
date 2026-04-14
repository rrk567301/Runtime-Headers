@class NSString, SECSFAPropertyValue;

@interface SECSFAMatchProperty : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPropertyName;
@property (retain, nonatomic) NSString *propertyName;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) SECSFAPropertyValue *value;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
