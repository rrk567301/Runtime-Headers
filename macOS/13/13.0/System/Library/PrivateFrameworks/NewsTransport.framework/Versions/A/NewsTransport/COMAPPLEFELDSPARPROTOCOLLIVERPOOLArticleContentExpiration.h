@class NSMutableArray;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleContentExpiration : PBCodable <NSCopying> {
    struct { unsigned char globalExpireUtcTime : 1; } _has;
}

@property (nonatomic) BOOL hasGlobalExpireUtcTime;
@property (nonatomic) long long globalExpireUtcTime;
@property (retain, nonatomic) NSMutableArray *tagsExpirationLists;

+ (Class)tagsExpirationListType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearTagsExpirationLists;
- (void)addTagsExpirationList:(id)a0;
- (unsigned long long)tagsExpirationListsCount;
- (id)tagsExpirationListAtIndex:(unsigned long long)a0;

@end
