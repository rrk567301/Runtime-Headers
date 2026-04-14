@class NSString;

@interface _MRPreloadedPlaybackSessionInfo : PBCodable <NSCopying> {
    struct { unsigned char playbackSessionPriority : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPlaybackSessionIdentifier;
@property (retain, nonatomic) NSString *playbackSessionIdentifier;
@property (readonly, nonatomic) BOOL hasPlaybackSessionRevision;
@property (retain, nonatomic) NSString *playbackSessionRevision;
@property (nonatomic) BOOL hasPlaybackSessionPriority;
@property (nonatomic) int playbackSessionPriority;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
