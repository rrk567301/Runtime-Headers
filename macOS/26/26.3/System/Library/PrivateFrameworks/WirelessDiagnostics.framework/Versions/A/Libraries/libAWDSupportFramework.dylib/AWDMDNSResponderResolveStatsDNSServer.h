@class NSData;

@interface AWDMDNSResponderResolveStatsDNSServer : PBCodable <NSCopying> {
    struct { unsigned char networkType : 1; unsigned char serverID : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAddress;
@property (retain, nonatomic) NSData *address;
@property (nonatomic) BOOL hasNetworkType;
@property (nonatomic) int networkType;
@property (nonatomic) BOOL hasServerID;
@property (nonatomic) unsigned int serverID;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)StringAsNetworkType:(id)a0;
- (id)networkTypeAsString:(int)a0;

@end
