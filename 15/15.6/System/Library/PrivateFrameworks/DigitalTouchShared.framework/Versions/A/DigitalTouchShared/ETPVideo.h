@class NSData;

@interface ETPVideo : PBCodable <NSCopying> {
    struct { unsigned char mediaType : 1; } _has;
}

@property (readonly, nonatomic) char hasIntroMessageData;
@property (retain, nonatomic) NSData *introMessageData;
@property (readonly, nonatomic) char hasPlayingMessagesData;
@property (retain, nonatomic) NSData *playingMessagesData;
@property (nonatomic) char hasMediaType;
@property (nonatomic) int mediaType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsMediaType:(id)a0;
- (id)mediaTypeAsString:(int)a0;

@end
