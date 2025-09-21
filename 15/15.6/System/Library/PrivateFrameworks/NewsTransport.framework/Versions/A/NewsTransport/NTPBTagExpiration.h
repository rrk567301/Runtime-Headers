@class NSString;

@interface NTPBTagExpiration : PBCodable <NSCopying> {
    struct { unsigned char expireUtcTime : 1; } _has;
}

@property (readonly, nonatomic) char hasTagId;
@property (retain, nonatomic) NSString *tagId;
@property (nonatomic) char hasExpireUtcTime;
@property (nonatomic) long long expireUtcTime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
