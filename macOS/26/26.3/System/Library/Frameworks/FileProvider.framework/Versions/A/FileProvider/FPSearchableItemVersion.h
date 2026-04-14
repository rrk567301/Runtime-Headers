@class NSData;

@interface FPSearchableItemVersion : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasContentVersion;
@property (retain, nonatomic) NSData *contentVersion;
@property (readonly, nonatomic) BOOL hasMetadataVersion;
@property (retain, nonatomic) NSData *metadataVersion;

+ (id)stringFromVersion:(id)a0;
+ (id)versionFromString:(id)a0;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
