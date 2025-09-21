@class NSString, CLPMeta, CLPAccessoryMeta, CLPLocationProcessingPipelineMetadata, NSMutableArray;

@interface CLPLocationCollectionRequest : PBRequest <NSCopying> {
    struct { unsigned char mcc : 1; unsigned char mnc : 1; unsigned char rat : 1; } _has;
}

@property (retain, nonatomic) CLPMeta *meta;
@property (retain, nonatomic) NSMutableArray *locations;
@property (readonly, nonatomic) char hasAppBundleId;
@property (retain, nonatomic) NSString *appBundleId;
@property (retain, nonatomic) NSString *tripId;
@property (nonatomic) char hasRat;
@property (nonatomic) int rat;
@property (nonatomic) char hasMcc;
@property (nonatomic) int mcc;
@property (nonatomic) char hasMnc;
@property (nonatomic) int mnc;
@property (retain, nonatomic) NSMutableArray *appBundleIds;
@property (readonly, nonatomic) char hasAccessoryMeta;
@property (retain, nonatomic) CLPAccessoryMeta *accessoryMeta;
@property (retain, nonatomic) NSMutableArray *accessoryLocations;
@property (readonly, nonatomic) char hasPipelineMetadata;
@property (retain, nonatomic) CLPLocationProcessingPipelineMetadata *pipelineMetadata;

+ (Class)locationType;
+ (Class)accessoryLocationType;
+ (Class)appBundleIdsType;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)addLocation:(id)a0;
- (void)clearLocations;
- (id)locationAtIndex:(unsigned long long)a0;
- (unsigned long long)locationsCount;
- (void)addAppBundleIds:(id)a0;
- (id)appBundleIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)appBundleIdsCount;
- (void)clearAppBundleIds;
- (id)accessoryLocationAtIndex:(unsigned long long)a0;
- (unsigned long long)accessoryLocationsCount;
- (void)addAccessoryLocation:(id)a0;
- (void)clearAccessoryLocations;

@end
