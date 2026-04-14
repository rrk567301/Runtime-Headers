@class NSString, _BlastDoorASCodableActivityDataPreview;

@interface _BlastDoorASCodableInviteRequest : PBRequest <NSCopying> {
    struct { unsigned char inviterVersion : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasHandshakeToken;
@property (retain, nonatomic) NSString *handshakeToken;
@property (readonly, nonatomic) BOOL hasInviterCloudKitAddress;
@property (retain, nonatomic) NSString *inviterCloudKitAddress;
@property (readonly, nonatomic) BOOL hasInviterCallerID;
@property (retain, nonatomic) NSString *inviterCallerID;
@property (readonly, nonatomic) BOOL hasInviterBuildNumber;
@property (retain, nonatomic) NSString *inviterBuildNumber;
@property (nonatomic) BOOL hasInviterVersion;
@property (nonatomic) unsigned int inviterVersion;
@property (readonly, nonatomic) BOOL hasActivityDataPreview;
@property (retain, nonatomic) _BlastDoorASCodableActivityDataPreview *activityDataPreview;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
