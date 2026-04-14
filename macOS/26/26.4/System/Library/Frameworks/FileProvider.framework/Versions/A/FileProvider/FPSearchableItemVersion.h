@class NSData;

@interface FPSearchableItemVersion : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasContentVersion;
@property (retain, nonatomic) NSData *contentVersion;
@property (readonly, nonatomic) BOOL hasMetadataVersion;
@property (retain, nonatomic) NSData *metadataVersion;

+ (id)stringFromVersion:(id)a0;
+ (id)versionFromString:(id)a0;

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
