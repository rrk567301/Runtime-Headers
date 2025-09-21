@class NSString, PKProtobufNSDecimalNumber, PKProtobufCustomPrecisionAmount;

@interface PKProtobufShippingMethod : PBCodable <NSCopying> {
    struct { unsigned char amount : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) char hasAmount;
@property (nonatomic) long long amount;
@property (readonly, nonatomic) char hasLabel;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) char hasType;
@property (nonatomic) unsigned int type;
@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasDetail;
@property (retain, nonatomic) NSString *detail;
@property (readonly, nonatomic) char hasCustomPrecisionAmount;
@property (retain, nonatomic) PKProtobufCustomPrecisionAmount *customPrecisionAmount;
@property (readonly, nonatomic) char hasDecimalAmount;
@property (retain, nonatomic) PKProtobufNSDecimalNumber *decimalAmount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
