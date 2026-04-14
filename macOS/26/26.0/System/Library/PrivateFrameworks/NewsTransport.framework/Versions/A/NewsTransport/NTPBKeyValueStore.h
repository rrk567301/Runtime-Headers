@class NSData, NSMutableArray;

@interface NTPBKeyValueStore : PBCodable <NSCopying> {
    struct { unsigned char clientVersion : 1; unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) long long version;
@property (nonatomic) BOOL hasClientVersion;
@property (nonatomic) long long clientVersion;
@property (retain, nonatomic) NSMutableArray *keyValuePairs;
@property (readonly, nonatomic) BOOL hasPlistSidecar;
@property (retain, nonatomic) NSData *plistSidecar;

+ (Class)keyValuePairsType;

- (id)keyValuePairsAtIndex:(unsigned long long)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addKeyValuePairs:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (unsigned long long)keyValuePairsCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearKeyValuePairs;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
