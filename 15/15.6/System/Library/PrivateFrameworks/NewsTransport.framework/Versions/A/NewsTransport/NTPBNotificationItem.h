@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLNotabilityScores, NSString, NTPBFeedItem, NSMutableArray;

@interface NTPBNotificationItem : PBCodable <NSCopying> {
    struct { unsigned char targetMinNewsVersion : 1; unsigned char source : 1; unsigned char targetDeviceTypes : 1; } _has;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasFeedItem;
@property (retain, nonatomic) NTPBFeedItem *feedItem;
@property (readonly, nonatomic) char hasCanonicalID;
@property (retain, nonatomic) NSString *canonicalID;
@property (readonly, nonatomic) char hasClusterID;
@property (retain, nonatomic) NSString *clusterID;
@property (readonly, nonatomic) char hasNotabilityScores;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLNotabilityScores *notabilityScores;
@property (nonatomic) char hasTargetDeviceTypes;
@property (nonatomic) unsigned int targetDeviceTypes;
@property (nonatomic) char hasTargetMinNewsVersion;
@property (nonatomic) long long targetMinNewsVersion;
@property (retain, nonatomic) NSMutableArray *suppressIfFollowingTagIDs;
@property (nonatomic) char hasSource;
@property (nonatomic) int source;
@property (readonly, nonatomic) char hasAlgoID;
@property (retain, nonatomic) NSString *algoID;

+ (Class)suppressIfFollowingTagIDsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addSuppressIfFollowingTagIDs:(id)a0;
- (void)clearSuppressIfFollowingTagIDs;
- (id)suppressIfFollowingTagIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)suppressIfFollowingTagIDsCount;

@end
