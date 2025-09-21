@interface _MRVirtualTouchDeviceDescriptorProtobuf : PBCodable <NSCopying> {
    struct { unsigned char screenSizeHeight : 1; unsigned char screenSizeWidth : 1; unsigned char absolute : 1; unsigned char integratedDisplay : 1; } _has;
}

@property (nonatomic) char hasAbsolute;
@property (nonatomic) char absolute;
@property (nonatomic) char hasIntegratedDisplay;
@property (nonatomic) char integratedDisplay;
@property (nonatomic) char hasScreenSizeWidth;
@property (nonatomic) float screenSizeWidth;
@property (nonatomic) char hasScreenSizeHeight;
@property (nonatomic) float screenSizeHeight;

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
