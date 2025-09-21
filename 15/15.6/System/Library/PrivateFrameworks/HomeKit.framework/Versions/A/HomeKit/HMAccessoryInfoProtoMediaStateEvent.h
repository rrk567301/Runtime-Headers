@class NSString;

@interface HMAccessoryInfoProtoMediaStateEvent : PBCodable <NSCopying> {
    struct { unsigned char playbackState : 1; unsigned char repeatState : 1; unsigned char shuffleState : 1; unsigned char volume : 1; } _has;
}

@property (nonatomic) char hasPlaybackState;
@property (nonatomic) long long playbackState;
@property (nonatomic) char hasShuffleState;
@property (nonatomic) long long shuffleState;
@property (nonatomic) char hasRepeatState;
@property (nonatomic) long long repeatState;
@property (nonatomic) char hasVolume;
@property (nonatomic) double volume;
@property (readonly, nonatomic) char hasMediaIdentifier;
@property (retain, nonatomic) NSString *mediaIdentifier;

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
