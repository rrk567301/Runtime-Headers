@class NSString;

@interface NTPBTagExpiration : PBCodable <NSCopying> {
    struct { unsigned char expireUtcTime : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTagId;
@property (retain, nonatomic) NSString *tagId;
@property (nonatomic) BOOL hasExpireUtcTime;
@property (nonatomic) long long expireUtcTime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
