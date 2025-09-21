@class NSString;

@interface BMPBScreenTimeRequestEvent : PBCodable <NSCopying> {
    struct { unsigned char eventTime : 1; unsigned char approvalTime : 1; unsigned char kind : 1; unsigned char status : 1; unsigned char isActionUserDevice : 1; } _has;
}

@property (readonly, nonatomic) char hasRequestID;
@property (retain, nonatomic) NSString *requestID;
@property (nonatomic) char hasEventTime;
@property (nonatomic) double eventTime;
@property (readonly, nonatomic) char hasRequesterDSID;
@property (retain, nonatomic) NSString *requesterDSID;
@property (readonly, nonatomic) char hasResponderDSID;
@property (retain, nonatomic) NSString *responderDSID;
@property (nonatomic) char hasKind;
@property (nonatomic) int kind;
@property (nonatomic) char hasStatus;
@property (nonatomic) int status;
@property (nonatomic) char hasApprovalTime;
@property (nonatomic) int approvalTime;
@property (readonly, nonatomic) char hasWebsitePath;
@property (retain, nonatomic) NSString *websitePath;
@property (readonly, nonatomic) char hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) char hasIsActionUserDevice;
@property (nonatomic) char isActionUserDevice;

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
- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (int)StringAsKind:(id)a0;
- (id)kindAsString:(int)a0;
- (int)StringAsApprovalTime:(id)a0;
- (id)approvalTimeAsString:(int)a0;

@end
