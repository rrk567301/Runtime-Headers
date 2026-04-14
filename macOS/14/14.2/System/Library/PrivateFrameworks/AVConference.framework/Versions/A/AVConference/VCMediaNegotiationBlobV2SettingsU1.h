@class NSMutableArray;

@interface VCMediaNegotiationBlobV2SettingsU1 : PBCodable <NSCopying> {
    struct { unsigned char rtpSSRC : 1; } _has;
}

@property (nonatomic) BOOL hasRtpSSRC;
@property (nonatomic) unsigned int rtpSSRC;
@property (retain, nonatomic) NSMutableArray *encodeDecodeFeatures;

+ (Class)encodeDecodeFeaturesType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addEncodeDecodeFeatures:(id)a0;
- (void)clearEncodeDecodeFeatures;
- (id)encodeDecodeFeaturesAtIndex:(unsigned long long)a0;
- (unsigned long long)encodeDecodeFeaturesCount;
- (id)initWithU1Config:(id)a0;
- (BOOL)loadEncodeDecodeFeatures:(id)a0;
- (id)u1Config;

@end
