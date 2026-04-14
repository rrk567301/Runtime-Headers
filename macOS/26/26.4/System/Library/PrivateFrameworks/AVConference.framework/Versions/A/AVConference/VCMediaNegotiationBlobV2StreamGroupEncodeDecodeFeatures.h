@class NSData;

@interface VCMediaNegotiationBlobV2StreamGroupEncodeDecodeFeatures : PBCodable <NSCopying> {
    struct { unsigned char rtpPayload : 1; } _has;
}

@property (nonatomic) BOOL hasRtpPayload;
@property (nonatomic) unsigned int rtpPayload;
@property (readonly, nonatomic) BOOL hasEncodeDecodeFeatures;
@property (retain, nonatomic) NSData *encodeDecodeFeatures;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)dealloc;
- (id)initWithPayload:(id)a0 encodeDecodeFeatures:(id)a1;

@end
