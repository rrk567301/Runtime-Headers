@interface CKDPSetBadgeCountRequest : PBRequest <NSCopying> {
    struct { unsigned char badgeCount : 1; unsigned char forDevice : 1; } _has;
}

@property (nonatomic) BOOL hasBadgeCount;
@property (nonatomic) unsigned int badgeCount;
@property (nonatomic) BOOL hasForDevice;
@property (nonatomic) BOOL forDevice;

+ (id)options;

- (Class)responseClass;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
