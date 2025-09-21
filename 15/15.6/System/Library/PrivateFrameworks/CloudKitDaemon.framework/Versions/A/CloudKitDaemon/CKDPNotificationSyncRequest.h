@class NSData;

@interface CKDPNotificationSyncRequest : PBRequest <NSCopying> {
    struct { unsigned char maxChanges : 1; unsigned char wantsChanges : 1; } _has;
}

@property (readonly, nonatomic) char hasServerChangeToken;
@property (retain, nonatomic) NSData *serverChangeToken;
@property (nonatomic) char hasMaxChanges;
@property (nonatomic) unsigned int maxChanges;
@property (nonatomic) char hasWantsChanges;
@property (nonatomic) char wantsChanges;

+ (id)options;

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

@end
