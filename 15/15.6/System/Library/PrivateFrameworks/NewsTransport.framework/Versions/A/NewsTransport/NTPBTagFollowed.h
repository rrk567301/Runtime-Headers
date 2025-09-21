@class NSString;

@interface NTPBTagFollowed : PBCodable <NSCopying> {
    struct { unsigned char tagFollowMode : 1; unsigned char aLaCarteSubscribed : 1; } _has;
}

@property (readonly, nonatomic) char hasTagId;
@property (retain, nonatomic) NSString *tagId;
@property (nonatomic) char hasTagFollowMode;
@property (nonatomic) int tagFollowMode;
@property (nonatomic) char hasALaCarteSubscribed;
@property (nonatomic) char aLaCarteSubscribed;

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
