@class NSString;

@interface CKCDPCodeServiceRequestServiceClientConfig : PBCodable <NSCopying> {
    struct { unsigned char port : 1; } _has;
}

@property (readonly, nonatomic) char hasHost;
@property (retain, nonatomic) NSString *host;
@property (nonatomic) char hasPort;
@property (nonatomic) unsigned int port;

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
