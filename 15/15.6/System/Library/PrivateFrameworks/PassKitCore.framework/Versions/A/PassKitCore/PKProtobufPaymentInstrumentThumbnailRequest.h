@class NSString;

@interface PKProtobufPaymentInstrumentThumbnailRequest : PBRequest <NSCopying> {
    struct { unsigned char height : 1; unsigned char width : 1; } _has;
}

@property (readonly, nonatomic) char hasPassIdentifier;
@property (retain, nonatomic) NSString *passIdentifier;
@property (readonly, nonatomic) char hasManifestHash;
@property (retain, nonatomic) NSString *manifestHash;
@property (nonatomic) char hasWidth;
@property (nonatomic) double width;
@property (nonatomic) char hasHeight;
@property (nonatomic) double height;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;

@end
