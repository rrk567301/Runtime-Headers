@class NSData;

@interface PKProtobufNSDecimalNumber : PBCodable <NSCopying>

@property (nonatomic) unsigned int version;
@property (nonatomic) int exponent;
@property (nonatomic) int length;
@property (nonatomic) int isNegative;
@property (nonatomic) int isCompact;
@property (nonatomic) int reserved;
@property (retain, nonatomic) NSData *mantissa;

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
