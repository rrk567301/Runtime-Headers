@class NSString, NSMutableArray;

@interface MXAudioFrame : PBCodable <NSCopying> {
    struct { unsigned char lastFrame : 1; } _has;
}

@property (readonly, nonatomic) char hasRequestId;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSMutableArray *audios;
@property (nonatomic) char hasLastFrame;
@property (nonatomic) char lastFrame;

+ (Class)audioType;

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
- (void)addAudio:(id)a0;
- (unsigned long long)audiosCount;
- (id)audioAtIndex:(unsigned long long)a0;
- (void)clearAudios;

@end
