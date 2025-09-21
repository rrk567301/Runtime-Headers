@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLNotabilityScores, NSString, NTPBRecordBase, NSMutableArray;

@interface NTPBNotificationItemRecord : PBCodable <NSCopying> {
    struct { unsigned char targetMinNewsVersion : 1; unsigned char targetDeviceTypes : 1; } _has;
}

@property (readonly, nonatomic) char hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (readonly, nonatomic) char hasNotificationID;
@property (retain, nonatomic) NSString *notificationID;
@property (readonly, nonatomic) char hasArticleID;
@property (retain, nonatomic) NSString *articleID;
@property (readonly, nonatomic) char hasBody;
@property (retain, nonatomic) NSString *body;
@property (readonly, nonatomic) char hasClusterID;
@property (retain, nonatomic) NSString *clusterID;
@property (readonly, nonatomic) char hasNotabilityScores;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLNotabilityScores *notabilityScores;
@property (nonatomic) char hasTargetDeviceTypes;
@property (nonatomic) unsigned int targetDeviceTypes;
@property (nonatomic) char hasTargetMinNewsVersion;
@property (nonatomic) long long targetMinNewsVersion;
@property (retain, nonatomic) NSMutableArray *suppressIfFollowingTagIDs;

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
