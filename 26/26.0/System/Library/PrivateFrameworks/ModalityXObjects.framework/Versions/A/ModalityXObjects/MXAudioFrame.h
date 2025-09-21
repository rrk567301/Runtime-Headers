@class NSString, NSMutableArray;

@interface MXAudioFrame : PBCodable <NSCopying> {
    struct { unsigned char lastFrame : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSMutableArray *audios;
@property (nonatomic) BOOL hasLastFrame;
@property (nonatomic) BOOL lastFrame;

+ (Class)audioType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)audiosCount;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addAudio:(id)a0;
- (id)audioAtIndex:(unsigned long long)a0;
- (void)clearAudios;

@end
