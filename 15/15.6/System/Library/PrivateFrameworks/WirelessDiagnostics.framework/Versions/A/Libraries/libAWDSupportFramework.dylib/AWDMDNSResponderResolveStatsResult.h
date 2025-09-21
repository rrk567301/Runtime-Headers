@class NSData;

@interface AWDMDNSResponderResolveStatsResult : PBCodable <NSCopying> {
    struct { unsigned char count : 1; unsigned char serverID : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (nonatomic) char hasCount;
@property (nonatomic) unsigned int count;
@property (nonatomic) char hasServerID;
@property (nonatomic) unsigned int serverID;
@property (readonly, nonatomic) char hasData;
@property (retain, nonatomic) NSData *data;

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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;

@end
