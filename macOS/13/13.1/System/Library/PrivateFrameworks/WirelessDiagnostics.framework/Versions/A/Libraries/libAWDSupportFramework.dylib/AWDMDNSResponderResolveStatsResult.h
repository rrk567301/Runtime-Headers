@class NSData;

@interface AWDMDNSResponderResolveStatsResult : PBCodable <NSCopying> {
    struct { unsigned char count : 1; unsigned char serverID : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) unsigned int count;
@property (nonatomic) BOOL hasServerID;
@property (nonatomic) unsigned int serverID;
@property (readonly, nonatomic) BOOL hasData;
@property (retain, nonatomic) NSData *data;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)typeAsString:(int)a0;
- (int)StringAsType:(id)a0;

@end
