@class NSString, CKDPZone;

@interface CKDPZoneSaveRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasRecordZone;
@property (retain, nonatomic) CKDPZone *recordZone;
@property (readonly, nonatomic) BOOL hasZoneProtectionInfoTag;
@property (retain, nonatomic) NSString *zoneProtectionInfoTag;

+ (id)options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned int)requestTypeCode;
- (Class)responseClass;

@end
