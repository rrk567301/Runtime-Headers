@class NTPBPersonalizationParams, NSString, NSMutableArray, NTPBUserInfo;

@interface NTPBSmarterFetchRequest : PBRequest <NSCopying> {
    struct { unsigned char fromTimestamp : 1; unsigned char toTimestamp : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUserInfo;
@property (retain, nonatomic) NTPBUserInfo *userInfo;
@property (readonly, nonatomic) BOOL hasPersonalizationParams;
@property (retain, nonatomic) NTPBPersonalizationParams *personalizationParams;
@property (retain, nonatomic) NSMutableArray *tagsFolloweds;
@property (readonly, nonatomic) BOOL hasFetchSource;
@property (retain, nonatomic) NSString *fetchSource;
@property (readonly, nonatomic) BOOL hasFetchStrategy;
@property (retain, nonatomic) NSString *fetchStrategy;
@property (retain, nonatomic) NSMutableArray *fetchRecordSpecs;
@property (nonatomic) BOOL hasFromTimestamp;
@property (nonatomic) long long fromTimestamp;
@property (nonatomic) BOOL hasToTimestamp;
@property (nonatomic) long long toTimestamp;
@property (retain, nonatomic) NSMutableArray *mutedTagIds;

+ (Class)mutedTagIdsType;
+ (Class)fetchRecordSpecsType;
+ (Class)tagsFollowedType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addMutedTagIds:(id)a0;
- (void)addFetchRecordSpecs:(id)a0;
- (void)addTagsFollowed:(id)a0;
- (void)clearFetchRecordSpecs;
- (void)clearMutedTagIds;
- (void)clearTagsFolloweds;
- (id)fetchRecordSpecsAtIndex:(unsigned long long)a0;
- (unsigned long long)fetchRecordSpecsCount;
- (id)mutedTagIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)mutedTagIdsCount;
- (id)tagsFollowedAtIndex:(unsigned long long)a0;
- (unsigned long long)tagsFollowedsCount;

@end
