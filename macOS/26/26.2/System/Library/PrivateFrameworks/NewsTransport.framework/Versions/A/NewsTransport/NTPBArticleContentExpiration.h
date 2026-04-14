@class NSMutableArray;

@interface NTPBArticleContentExpiration : PBCodable <NSCopying> {
    struct { unsigned char globalExpireUtcTime : 1; } _has;
}

@property (nonatomic) BOOL hasGlobalExpireUtcTime;
@property (nonatomic) long long globalExpireUtcTime;
@property (retain, nonatomic) NSMutableArray *tagsExpirationLists;

+ (Class)tagsExpirationListType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearTagsExpirationLists;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)tagsExpirationListsCount;
- (void)mergeFrom:(id)a0;
- (void)addTagsExpirationList:(id)a0;
- (id)dictionaryRepresentation;
- (id)tagsExpirationListAtIndex:(unsigned long long)a0;

@end
