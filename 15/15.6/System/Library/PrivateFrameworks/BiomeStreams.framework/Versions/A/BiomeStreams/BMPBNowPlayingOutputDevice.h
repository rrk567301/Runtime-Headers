@class NSString;

@interface BMPBNowPlayingOutputDevice : PBCodable <NSCopying> {
    struct { unsigned char outputDeviceSubType : 1; unsigned char outputDeviceType : 1; } _has;
}

@property (nonatomic) char hasOutputDeviceType;
@property (nonatomic) int outputDeviceType;
@property (nonatomic) char hasOutputDeviceSubType;
@property (nonatomic) int outputDeviceSubType;
@property (readonly, nonatomic) char hasOutputDeviceId;
@property (retain, nonatomic) NSString *outputDeviceId;

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
- (int)StringAsOutputDeviceSubType:(id)a0;
- (int)StringAsOutputDeviceType:(id)a0;
- (id)outputDeviceSubTypeAsString:(int)a0;
- (id)outputDeviceTypeAsString:(int)a0;

@end
