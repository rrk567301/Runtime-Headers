@class NSString;

@interface _MRPreloadedPlaybackSessionInfo : PBCodable <NSCopying> {
    struct { unsigned char playbackSessionPriority : 1; } _has;
}

@property (readonly, nonatomic) char hasPlaybackSessionIdentifier;
@property (retain, nonatomic) NSString *playbackSessionIdentifier;
@property (readonly, nonatomic) char hasPlaybackSessionRevision;
@property (retain, nonatomic) NSString *playbackSessionRevision;
@property (nonatomic) char hasPlaybackSessionPriority;
@property (nonatomic) int playbackSessionPriority;

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
