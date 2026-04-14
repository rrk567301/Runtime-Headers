@class NSData;

@interface PKProtobufNSDecimalNumber : PBCodable <NSCopying>

@property (nonatomic) unsigned int version;
@property (nonatomic) int exponent;
@property (nonatomic) int length;
@property (nonatomic) int isNegative;
@property (nonatomic) int isCompact;
@property (nonatomic) int reserved;
@property (retain, nonatomic) NSData *mantissa;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
