@class NSString;

@interface ATXMPBCacheAgeAtCacheRefreshTracker : PBCodable <NSCopying> {
    struct { unsigned char cacheAge : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasCacheName;
@property (retain, nonatomic) NSString *cacheName;
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;
@property (nonatomic) BOOL hasCacheAge;
@property (nonatomic) unsigned int cacheAge;

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
