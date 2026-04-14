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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
