@class NSData;

@interface VCMediaNegotiationBlobV2StreamGroupEncodeDecodeFeatures : PBCodable <NSCopying> {
    struct { unsigned char rtpPayload : 1; } _has;
}

@property (nonatomic) char hasRtpPayload;
@property (nonatomic) unsigned int rtpPayload;
@property (readonly, nonatomic) char hasEncodeDecodeFeatures;
@property (retain, nonatomic) NSData *encodeDecodeFeatures;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithPayload:(id)a0 encodeDecodeFeatures:(id)a1;

@end
