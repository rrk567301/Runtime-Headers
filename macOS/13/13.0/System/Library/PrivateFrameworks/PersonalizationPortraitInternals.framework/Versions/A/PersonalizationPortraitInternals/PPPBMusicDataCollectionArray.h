@class NSString, NSMutableArray;

@interface PPPBMusicDataCollectionArray : PBCodable <NSCopying> {
    struct { unsigned char hasMusicSubscription : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *records;
@property (nonatomic) BOOL hasHasMusicSubscription;
@property (nonatomic) BOOL hasMusicSubscription;
@property (retain, nonatomic) NSMutableArray *experimentalGroups;
@property (readonly, nonatomic) BOOL hasAssetVersion;
@property (retain, nonatomic) NSString *assetVersion;

+ (id)options;
+ (Class)recordsType;
+ (Class)experimentalGroupsType;

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
- (void)clearRecords;
- (void)addRecords:(id)a0;
- (unsigned long long)recordsCount;
- (id)recordsAtIndex:(unsigned long long)a0;
- (void)clearExperimentalGroups;
- (void)addExperimentalGroups:(id)a0;
- (unsigned long long)experimentalGroupsCount;
- (id)experimentalGroupsAtIndex:(unsigned long long)a0;

@end
