@class NSString;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagExpiration : PBCodable <NSCopying> {
    struct { unsigned char expireUtcTime : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTagId;
@property (retain, nonatomic) NSString *tagId;
@property (nonatomic) BOOL hasExpireUtcTime;
@property (nonatomic) long long expireUtcTime;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
