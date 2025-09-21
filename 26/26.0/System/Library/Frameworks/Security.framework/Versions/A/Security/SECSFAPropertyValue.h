@class NSString;

@interface SECSFAPropertyValue : PBCodable <NSCopying> {
    struct { unsigned char integer : 1; unsigned char property : 1; } _has;
}

@property (nonatomic) BOOL hasInteger;
@property (nonatomic) long long integer;
@property (readonly, nonatomic) BOOL hasString;
@property (retain, nonatomic) NSString *string;
@property (nonatomic) BOOL hasProperty;
@property (nonatomic) int property;

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
- (int)StringAsProperty:(id)a0;
- (void)clearOneofValuesForProperty;
- (id)propertyAsString:(int)a0;

@end
