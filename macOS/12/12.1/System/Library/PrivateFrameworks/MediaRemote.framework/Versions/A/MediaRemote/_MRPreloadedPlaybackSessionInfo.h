@class NSString;

@interface _MRPreloadedPlaybackSessionInfo : PBCodable <NSCopying> {
    NSString *_playbackSessionIdentifier;
    int _playbackSessionPriority;
    NSString *_playbackSessionRevision;
    struct { unsigned char playbackSessionPriority : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
