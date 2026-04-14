@class NSData, NSMutableArray;

@interface HMPBMediaPlaybackAction : PBCodable <NSCopying> {
    NSData *_actionUUID;
    int _mediaPlaybackState;
    NSMutableArray *_mediaProfiles;
    NSData *_playbackArchive;
    NSData *_volume;
    struct { unsigned char mediaPlaybackState : 1; } _has;
}

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
