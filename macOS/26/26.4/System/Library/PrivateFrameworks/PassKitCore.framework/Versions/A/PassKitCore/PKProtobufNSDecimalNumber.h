@class NSData;

@interface PKProtobufNSDecimalNumber : PBCodable <NSCopying>

@property (nonatomic) unsigned int version;
@property (nonatomic) int exponent;
@property (nonatomic) int length;
@property (nonatomic) int isNegative;
@property (nonatomic) int isCompact;
@property (nonatomic) int reserved;
@property (retain, nonatomic) NSData *mantissa;

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

@end
