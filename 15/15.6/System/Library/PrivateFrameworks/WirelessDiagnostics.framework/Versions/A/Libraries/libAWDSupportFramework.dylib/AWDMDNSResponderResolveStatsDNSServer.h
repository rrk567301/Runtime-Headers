@class NSData;

@interface AWDMDNSResponderResolveStatsDNSServer : PBCodable <NSCopying> {
    struct { unsigned char networkType : 1; unsigned char serverID : 1; } _has;
}

@property (readonly, nonatomic) char hasAddress;
@property (retain, nonatomic) NSData *address;
@property (nonatomic) char hasNetworkType;
@property (nonatomic) int networkType;
@property (nonatomic) char hasServerID;
@property (nonatomic) unsigned int serverID;

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
- (int)StringAsNetworkType:(id)a0;
- (id)networkTypeAsString:(int)a0;

@end
