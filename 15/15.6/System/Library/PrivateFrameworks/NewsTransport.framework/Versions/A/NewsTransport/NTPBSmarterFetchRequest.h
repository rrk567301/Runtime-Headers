@class NTPBPersonalizationParams, NSString, NSMutableArray, NTPBUserInfo;

@interface NTPBSmarterFetchRequest : PBRequest <NSCopying> {
    struct { unsigned char fromTimestamp : 1; unsigned char toTimestamp : 1; } _has;
}

@property (readonly, nonatomic) char hasUserInfo;
@property (retain, nonatomic) NTPBUserInfo *userInfo;
@property (readonly, nonatomic) char hasPersonalizationParams;
@property (retain, nonatomic) NTPBPersonalizationParams *personalizationParams;
@property (retain, nonatomic) NSMutableArray *tagsFolloweds;
@property (readonly, nonatomic) char hasFetchSource;
@property (retain, nonatomic) NSString *fetchSource;
@property (readonly, nonatomic) char hasFetchStrategy;
@property (retain, nonatomic) NSString *fetchStrategy;
@property (retain, nonatomic) NSMutableArray *fetchRecordSpecs;
@property (nonatomic) char hasFromTimestamp;
@property (nonatomic) long long fromTimestamp;
@property (nonatomic) char hasToTimestamp;
@property (nonatomic) long long toTimestamp;
@property (retain, nonatomic) NSMutableArray *mutedTagIds;

+ (Class)mutedTagIdsType;
+ (Class)fetchRecordSpecsType;
+ (Class)tagsFollowedType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
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
