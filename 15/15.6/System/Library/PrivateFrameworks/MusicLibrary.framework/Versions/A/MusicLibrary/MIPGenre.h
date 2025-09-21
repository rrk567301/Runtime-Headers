@class NSString;

@interface MIPGenre : PBCodable <NSCopying> {
    struct { unsigned char persistentId : 1; unsigned char storeId : 1; } _has;
}

@property (nonatomic) char hasStoreId;
@property (nonatomic) long long storeId;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) char hasPersistentId;
@property (nonatomic) long long persistentId;

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
