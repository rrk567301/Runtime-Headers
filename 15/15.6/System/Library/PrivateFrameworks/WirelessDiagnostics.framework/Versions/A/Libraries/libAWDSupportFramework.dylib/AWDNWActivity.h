@class NSString, AWDNWL2Report, AWDNWDeviceReport;

@interface AWDNWActivity : PBCodable <NSCopying> {
    struct { unsigned char activityDomain : 1; unsigned char activityLabel : 1; unsigned char investigationID : 1; unsigned char timestamp : 1; unsigned char isRetry : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasActivityDomain;
@property (nonatomic) unsigned long long activityDomain;
@property (nonatomic) char hasActivityLabel;
@property (nonatomic) unsigned long long activityLabel;
@property (readonly, nonatomic) char hasActivityUUID;
@property (retain, nonatomic) NSString *activityUUID;
@property (readonly, nonatomic) char hasParentActivityUUID;
@property (retain, nonatomic) NSString *parentActivityUUID;
@property (nonatomic) char hasIsRetry;
@property (nonatomic) char isRetry;
@property (readonly, nonatomic) char hasL2Report;
@property (retain, nonatomic) AWDNWL2Report *l2Report;
@property (readonly, nonatomic) char hasDeviceReport;
@property (retain, nonatomic) AWDNWDeviceReport *deviceReport;
@property (readonly, nonatomic) char hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) char hasInvestigationID;
@property (nonatomic) unsigned long long investigationID;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
