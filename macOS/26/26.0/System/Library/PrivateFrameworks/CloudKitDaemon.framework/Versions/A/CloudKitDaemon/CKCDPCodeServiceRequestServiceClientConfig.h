@class NSString;

@interface CKCDPCodeServiceRequestServiceClientConfig : PBCodable <NSCopying> {
    struct { unsigned char port : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasHost;
@property (retain, nonatomic) NSString *host;
@property (nonatomic) BOOL hasPort;
@property (nonatomic) unsigned int port;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
