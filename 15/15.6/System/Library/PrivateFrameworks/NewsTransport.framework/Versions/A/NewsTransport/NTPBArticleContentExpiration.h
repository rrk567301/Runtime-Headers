@class NSMutableArray;

@interface NTPBArticleContentExpiration : PBCodable <NSCopying> {
    struct { unsigned char globalExpireUtcTime : 1; } _has;
}

@property (nonatomic) char hasGlobalExpireUtcTime;
@property (nonatomic) long long globalExpireUtcTime;
@property (retain, nonatomic) NSMutableArray *tagsExpirationLists;

+ (Class)tagsExpirationListType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addTagsExpirationList:(id)a0;
- (void)clearTagsExpirationLists;
- (id)tagsExpirationListAtIndex:(unsigned long long)a0;
- (unsigned long long)tagsExpirationListsCount;

@end
