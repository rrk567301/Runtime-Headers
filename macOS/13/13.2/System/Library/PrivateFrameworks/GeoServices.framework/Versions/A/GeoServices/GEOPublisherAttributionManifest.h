@class NSMutableDictionary;

@interface GEOPublisherAttributionManifest : PBCodable <NSCopying> {
    NSMutableDictionary *_publisherAttributionSources;
}

@property (retain, nonatomic) NSMutableDictionary *publisherAttributionSources;

+ (BOOL)isValid:(id)a0;
+ (Class)publisherAttributionSourcesType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)clearPublisherAttributionSources;
- (void)setPublisherAttributionSourcesValue:(id)a0 forKey:(id)a1;
- (id)publisherAttributionSourcesForKey:(id)a0;
- (void)enumeratePublisherAttributionSourcesUsingBlock:(id /* block */)a0;
- (unsigned long long)publisherAttributionSourcesCount;

@end
