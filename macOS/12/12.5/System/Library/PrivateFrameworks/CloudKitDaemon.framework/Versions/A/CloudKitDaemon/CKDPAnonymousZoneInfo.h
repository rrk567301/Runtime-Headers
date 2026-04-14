@class NSString, NSData;

@interface CKDPAnonymousZoneInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAnonymousZoneInfoID;
@property (retain, nonatomic) NSString *anonymousZoneInfoID;
@property (readonly, nonatomic) BOOL hasAnonymousZoneInfoData;
@property (retain, nonatomic) NSData *anonymousZoneInfoData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;

@end
