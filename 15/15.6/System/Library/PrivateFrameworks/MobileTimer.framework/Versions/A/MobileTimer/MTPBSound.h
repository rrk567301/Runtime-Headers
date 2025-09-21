@class NSString;

@interface MTPBSound : PBCodable <NSCopying> {
    struct { unsigned char mediaID : 1; unsigned char soundVolume : 1; } _has;
}

@property (nonatomic) unsigned int soundType;
@property (readonly, nonatomic) char hasToneID;
@property (retain, nonatomic) NSString *toneID;
@property (nonatomic) char hasMediaID;
@property (nonatomic) double mediaID;
@property (readonly, nonatomic) char hasVibeID;
@property (retain, nonatomic) NSString *vibeID;
@property (nonatomic) char hasSoundVolume;
@property (nonatomic) float soundVolume;

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

@end
