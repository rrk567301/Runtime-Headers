@class NSData;

@interface VCMediaNegotiationBlobV2StreamGroupEncodeDecodeFeatures : PBCodable <NSCopying> {
    struct { unsigned char rtpPayload : 1; } _has;
}

@property (nonatomic) BOOL hasRtpPayload;
@property (nonatomic) unsigned int rtpPayload;
@property (readonly, nonatomic) BOOL hasEncodeDecodeFeatures;
@property (retain, nonatomic) NSData *encodeDecodeFeatures;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (id)initWithPayload:(id)a0 encodeDecodeFeatures:(id)a1;

@end
