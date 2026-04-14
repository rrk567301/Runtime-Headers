@class NSData;

@interface PKProtobufNSDecimalNumber : PBCodable <NSCopying>

@property (nonatomic) unsigned int version;
@property (nonatomic) int exponent;
@property (nonatomic) int length;
@property (nonatomic) int isNegative;
@property (nonatomic) int isCompact;
@property (nonatomic) int reserved;
@property (retain, nonatomic) NSData *mantissa;

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
