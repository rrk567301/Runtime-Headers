@class NSString, NSData;

@interface CKDPAnonymousZoneInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAnonymousZoneInfoID;
@property (retain, nonatomic) NSString *anonymousZoneInfoID;
@property (readonly, nonatomic) BOOL hasAnonymousZoneInfoData;
@property (retain, nonatomic) NSData *anonymousZoneInfoData;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
