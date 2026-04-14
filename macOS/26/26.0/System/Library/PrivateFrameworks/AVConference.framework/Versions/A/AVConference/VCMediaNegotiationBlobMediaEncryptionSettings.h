@class VCMediaNegotiatorMediaEncryptionSettings, NSData;

@interface VCMediaNegotiationBlobMediaEncryptionSettings : PBCodable <NSCopying> {
    struct { unsigned char mediaCipherSuites : 1; unsigned char srtcpCipherSuites : 1; } _has;
}

@property (readonly, nonatomic) VCMediaNegotiatorMediaEncryptionSettings *mediaEncryptionSettings;
@property (readonly, nonatomic) BOOL hasSendMediaKey;
@property (retain, nonatomic) NSData *sendMediaKey;
@property (nonatomic) BOOL hasMediaCipherSuites;
@property (nonatomic) unsigned int mediaCipherSuites;
@property (nonatomic) BOOL hasSrtcpCipherSuites;
@property (nonatomic) unsigned int srtcpCipherSuites;

- (void)copyTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)extractMediaCipherSuitesWithBlock:(id /* block */)a0;
- (void)extractSRTCPCipherSuitesWithBlock:(id /* block */)a0;
- (id)initWithMediaEncryptionSettings:(id)a0;
- (BOOL)setUpMediaBitmaskWithCipherSuites:(id)a0;
- (BOOL)setUpSRTCPBitmaskWithCipherSuites:(id)a0;

@end
