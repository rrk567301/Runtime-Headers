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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)clearRecords;
- (void)addRecords:(id)a0;
- (unsigned long long)recordsCount;
- (id)recordsAtIndex:(unsigned long long)a0;
- (void)addExperimentalGroups:(id)a0;
- (unsigned long long)experimentalGroupsCount;
- (void)clearExperimentalGroups;
- (id)experimentalGroupsAtIndex:(unsigned long long)a0;

@end
