@class NSData;

@interface PKProtobufPaymentContentItem : PBCodable <NSCopying> {
    struct { unsigned char centered : 1; } _has;
}

@property (readonly, nonatomic) char hasImageRequest;
@property (retain, nonatomic) NSData *imageRequest;
@property (readonly, nonatomic) char hasImage;
@property (retain, nonatomic) NSData *image;
@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) NSData *title;
@property (readonly, nonatomic) char hasLabel;
@property (retain, nonatomic) NSData *label;
@property (nonatomic) char hasCentered;
@property (nonatomic) char centered;

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
