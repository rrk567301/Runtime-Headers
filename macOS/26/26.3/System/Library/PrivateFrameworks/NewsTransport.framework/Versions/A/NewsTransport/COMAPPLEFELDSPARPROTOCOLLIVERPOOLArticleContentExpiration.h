@class NSMutableArray;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleContentExpiration : PBCodable <NSCopying> {
    struct { unsigned char globalExpireUtcTime : 1; } _has;
}

@property (nonatomic) BOOL hasGlobalExpireUtcTime;
@property (nonatomic) long long globalExpireUtcTime;
@property (retain, nonatomic) NSMutableArray *tagsExpirationLists;

+ (Class)tagsExpirationListType;

- (id)dictionaryRepresentation;
- (id)description;
- (unsigned long long)tagsExpirationListsCount;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)tagsExpirationListAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)addTagsExpirationList:(id)a0;
- (void)clearTagsExpirationLists;

@end
