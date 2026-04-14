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

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
