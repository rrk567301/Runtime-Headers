@class NSMutableDictionary;

@interface GEOPublisherAttributionManifest : PBCodable <NSCopying> {
    NSMutableDictionary *_publisherAttributionSources;
}

@property (retain, nonatomic) NSMutableDictionary *publisherAttributionSources;

+ (BOOL)isValid:(id)a0;
+ (Class)publisherAttributionSourcesType;

- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)clearPublisherAttributionSources;
- (void)enumeratePublisherAttributionSourcesUsingBlock:(id /* block */)a0;
- (unsigned long long)publisherAttributionSourcesCount;
- (id)publisherAttributionSourcesForKey:(id)a0;
- (void)setPublisherAttributionSourcesValue:(id)a0 forKey:(id)a1;

@end
