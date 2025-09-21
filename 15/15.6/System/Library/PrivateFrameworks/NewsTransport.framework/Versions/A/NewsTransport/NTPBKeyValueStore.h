@class NSData, NSMutableArray;

@interface NTPBKeyValueStore : PBCodable <NSCopying> {
    struct { unsigned char clientVersion : 1; unsigned char version : 1; } _has;
}

@property (nonatomic) char hasVersion;
@property (nonatomic) long long version;
@property (nonatomic) char hasClientVersion;
@property (nonatomic) long long clientVersion;
@property (retain, nonatomic) NSMutableArray *keyValuePairs;
@property (readonly, nonatomic) char hasPlistSidecar;
@property (retain, nonatomic) NSData *plistSidecar;

+ (Class)keyValuePairsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addKeyValuePairs:(id)a0;
- (void)clearKeyValuePairs;
- (id)keyValuePairsAtIndex:(unsigned long long)a0;
- (unsigned long long)keyValuePairsCount;

@end
