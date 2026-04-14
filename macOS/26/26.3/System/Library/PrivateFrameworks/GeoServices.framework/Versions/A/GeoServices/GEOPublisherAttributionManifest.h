@class NSMutableDictionary;

@interface GEOPublisherAttributionManifest : PBCodable <NSCopying> {
    NSMutableDictionary *_publisherAttributionSources;
}

@property (retain, nonatomic) NSMutableDictionary *publisherAttributionSources;

+ (BOOL)isValid:(id)a0;
+ (Class)publisherAttributionSourcesType;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)clearPublisherAttributionSources;
- (void)enumeratePublisherAttributionSourcesUsingBlock:(id /* block */)a0;
- (unsigned long long)publisherAttributionSourcesCount;
- (id)publisherAttributionSourcesForKey:(id)a0;
- (void)setPublisherAttributionSourcesValue:(id)a0 forKey:(id)a1;

@end
