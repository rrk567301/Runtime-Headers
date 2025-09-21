@class NSData;

@interface NTPBLRUCacheEntry : PBCodable <NSCopying> {
    struct { unsigned char lastAccessed : 1; } _has;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSData *key;
@property (readonly, nonatomic) char hasValue;
@property (retain, nonatomic) NSData *value;
@property (nonatomic) char hasLastAccessed;
@property (nonatomic) unsigned long long lastAccessed;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
