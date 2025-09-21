@class NSString;

@interface SECSFAPropertyValue : PBCodable <NSCopying> {
    struct { unsigned char integer : 1; unsigned char property : 1; } _has;
}

@property (nonatomic) char hasInteger;
@property (nonatomic) long long integer;
@property (readonly, nonatomic) char hasString;
@property (retain, nonatomic) NSString *string;
@property (nonatomic) char hasProperty;
@property (nonatomic) int property;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (int)StringAsProperty:(id)a0;
- (void)clearOneofValuesForProperty;
- (void)mergeFrom:(id)a0;
- (id)propertyAsString:(int)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
