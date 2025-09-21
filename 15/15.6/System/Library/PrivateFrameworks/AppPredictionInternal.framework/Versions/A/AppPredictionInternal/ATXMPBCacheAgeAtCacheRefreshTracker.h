@class NSString;

@interface ATXMPBCacheAgeAtCacheRefreshTracker : PBCodable <NSCopying> {
    struct { unsigned char cacheAge : 1; } _has;
}

@property (readonly, nonatomic) char hasCacheName;
@property (retain, nonatomic) NSString *cacheName;
@property (readonly, nonatomic) char hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;
@property (nonatomic) char hasCacheAge;
@property (nonatomic) unsigned int cacheAge;

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
