@interface PKProtobufPaymentSetupFeature : PBCodable <NSCopying> {
    struct { unsigned char state : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) unsigned long long type;
@property (nonatomic) char hasState;
@property (nonatomic) unsigned long long state;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
