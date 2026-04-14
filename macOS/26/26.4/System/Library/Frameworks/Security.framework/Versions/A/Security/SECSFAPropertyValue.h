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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (int)StringAsProperty:(id)a0;
- (void)clearOneofValuesForProperty;
- (id)propertyAsString:(int)a0;

@end
