@class NSData, NSMutableArray;

@interface HMPBMediaPlaybackAction : PBCodable <NSCopying> {
    NSData *_actionUUID;
    int _mediaPlaybackState;
    NSMutableArray *_mediaProfiles;
    NSData *_playbackArchive;
    NSData *_volume;
    struct { unsigned char mediaPlaybackState : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
